    #ifndef __BOOK_H_
    #define __BOOK_H_
    #include "service.h"
    #include<string.h>
    #include "book.h"
//add book

    file *fp;  
    struct book;
    accept_book();
    // open file for appending
    fp = fopen("book.db",1,"a");
    if(fp == NULL) {
        perror("fopen() failed");}
        exit(1);
    
     fp=fopen("book.db","w");
    // fwrite(book, sizeof( book_t), fp);
    {printf(" book add.\n");
    }
    fclose(fp);
    //void book_edit()
      found = 0;
	// file*fp;
	// book_t b;
	// input book id from user.
	{
    printf("enter book : ");
	scanf("%d", &book);
    }
	// open books file
	{fp = fopen(book.db, "rb+");
	if(fp == NULL) {
		perror("cannot open books file");
		exit(1);
	}
	// read books one by one and check if book with given id is found.
	while(fread(&b, sizeof(book_t), 1, fp) > 0) {
		if(book == b.book) {
			found = 1;
			break;
		}
	}
	// if found
	if(found) {
		// input new book details from user
		long size = sizeof(book_t);
		book_t;
		book_accept();
		nb.book = b.book;
		// take file position one record behind.
		fseek(fp, -size, seek_cur);
		// overwrite book details into the file
		fwrite(str, size, 1, fp);
        {
		printf("book updated.\n");
	    }
	else // if not found
		
		{
            printf("Book not found.\n");
        }
	// close books file
	fclose(fp);
    }
return 0;
}
