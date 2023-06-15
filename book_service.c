     #include<stdio.h>
    #include "book_service.h"
    #include "book.h"


 	void add_book() {
	FILE *fp;
	// input book details
	book_t b;
	book_accept(&b);
	b.id = get_next_book_id();
	// add book into the books file
	// open books file.
	fp = fopen("book.db", "ab");
	if(fp == NULL) {
		perror("cannot open books file");
		exit(1);
	}
	// append book to the file.
	fwrite(&b, sizeof(book_t), 1, fp);
	printf("book added in file.\n");
	// close books file.
	fclose(fp);
}

	void book_edit()
	{ //_by_isbn() 
	int isbn, found = 0;
	FILE *fp;
	book_t b;
	// input book isbn from user.
	printf("enter book isbn: ");
	scanf("%d", &isbn);
	// open books file
	fp = fopen("book.db", "rb+");
	if(fp == NULL) {
		perror("cannot open books file");
		exit(1);
	}
	// read books one by one and check if book with given id is found.
	while(fread(&b, sizeof(book_t), 1, fp) > 0) {
		if(isbn == b.isbn) {
			found = 1;
			break;
		}
	}
	// if found
	if(found) {
		// input new book details from user
		long size = sizeof(book_t);
		book_t nb;
		book_accept(&nb);
		nb.isbn = b.isbn;
		// take file position one record behind.
		fseek(fp, -size, SEEK_CUR);
		// overwrite book details into the file
		fwrite(&nb, size, 1, fp);
		printf("book updated.\n");
	}
	else // if not found
		// show message to user that book not found.
		printf("Book not found.\n");
	// close books file
	fclose(fp);
}

	void bookcopy_add() {
	FILE *fp;
	// input book copy details
	bookcopy_t b;
	bookcopy_accept(b);
	b.id= get_next_bookcopy_id();
	// add book copy into the books file
	// open book copies file.
	fp = fopen("bookcopy.db", "ab");

	if(fp == NULL) {
		perror("cannot open book copies file");
		exit(1);
	}
	// append book copy to the file.
	fwrite(&b, sizeof(bookcopy_t), 1, fp);
	printf("book copy added in file.\n");
	// close book copies file.
	fclose(fp);
}

   void bookcopy_edit(bookcopy_t *c)
   { //_by_isbn() 
	int isbn, found = 0;
	FILE *fp;
	bookcopy_t b;
	// input book isbn from user.
	printf("enter bookcopy isbn: ");
	scanf("%d", &isbn);
	// open books file
	fp = fopen("bookcopy.db", "rb+");
	if(fp == NULL) {
		perror("cannot open books file");
		exit(1);
	}
	// read books one by one and check if book with given id is found.
	while(fread(&b, sizeof(bookcopy_t), 1, fp) > 0) 
		if(isbn == b.isbn) {
			found = 1;
			break;
		}
	}
	// if found
	if(found) {
	
		long size = sizeof(book_t);
		bookcopy_t nb;
		bookcopy_accept(&nb);
		nb.isbn = b.isbn;
		
		fseek(fp, -size, SEEK_CUR);
		
		fwrite(&nb, size, 1, fp);
		printf("bookcopy updated.\n");
	}
	else // if not found
		
		printf("Bookcopy not found.\n");
	
	fclose(fp);


	void bookcopy_available_id(bookcopy_t *c);
   {
	int book_id;
	FILE *fp;
	bookcopy_t bc;
	int count = 0;
	
	printf("enter the book id: ");
	scanf("%d", &book_id);
	// open book copies file
	fp = fopen("bookcopy.db", "rb");
	if(fp == NULL) {
	perror("cannot open bookcopies file.");
		return 0; 
	}

	// read bookcopy records one by one
	while(fread(&bc, sizeof(bookcopy_t), 1, fp) > 0) {
		// if book id is matching and status is available, print copy details
		if(bc.bookid == book_id && strcmp(bc.status, status_available)==0) {
			bookcopy_display(&bc);
			count++;
		}
	}
	// close book copies file
	fclose(fp);
	// if no copy is available, print the message. 
	if(count == 0)
		{printf("no copies availables.\n");}
}
