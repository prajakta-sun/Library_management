#include<stdio.h>
#include "book_dal.h"

    void book_save(book_t *b)
    {
        // file*fp;
         struct book b;
    
        fp = fopen("book.db", "rb");
    if(fp == NULL) {
        perror("fopen() failed");
        exit(1);
    }
    
    fwrite(&b, sizeof(struct book), 1, fp);{
    printf("New book saved.\n");
    fclose(fp);}
 }
 
    void update_all_books()
 
    //  file *fp;
    //
     {
    fp = fopen("book.db", "ab");
    if(fp == NULL) {
        perror("fopen() failed");
        exit(1);
    }    
    while(fread(&b, sizeof(struct book), 1, fp) > 0) 
    {
        print_book(&b);
    }
    fclose(fp);
     }


    void find_book_by_isbn(){
    // file *fp;
     struct book b;

    printf("enter book isbn to find: ");
    scanf("%s",isbn);
    str(isbn);
    
    fp = fopen("book.db", "rb");
    if(fp == NULL)
    {
        perror("fopen() failed");
        exit(1);
    }
}
   
    while( fread(&b, sizeof(struct book), 1, fp) > 0 ) 
       { 
        str(b.isbn);
        if(strstr(b.isbn, isbn) != NULL) {
            found = 1;
           { print_book(&b);
        }
    }
     
    if(!found)  
        printf("No matching book found.\n");
    
    fclose(fp);
}
     void find_book_by_title()
    {
    // file *fp;
     struct book b;
    
    printf("enter title to find: ");
    scanf("%s", title);
    str(title);
    
    fp = fopen("book.db", "rb");
    if(fp == NULL) {
        perror("fopen() failed");
        exit(1);
    }
      }  while( fread(&b, sizeof(struct book), 1, fp) > 0 ) 
    
      
        str(b.title);
        if(strstr(b.title, title) != NULL)
        {
            found = 1;
            print_book(&b);
        }
    
    if(!found)  
        {printf("No matching book found.\n");
        }
    fclose(fp);
    
     do{
      printf("\n0. exit\n1. save book\n2. update all books\n3. find book by isbn\n4. find book by title\nenter choice: ");
        scanf("%d", &choice);
        switch(choice) {
            case 1:
                save_book();
                break;
            case 2:
                update_all_books();
                break;
            case 3:
                find_book_by_isbn();
                break;
            case 4:
                find_book_by_title();
                break;
            
        }
    while(choice != 0);
}
 void bookcopy_save(book_t *b)
 {
    //   file *fp;
     struct book *b ;

  
    fp = fopen("book.db", "rb");
    if(fp == NULL) {
        perror("fopen() failed");
        exit(1);
    }
    
    fwrite(&b, sizeof(struct book), 1, fp);
    printf("New bookcopy saved.\n");
    fclose(fp);
}
 void bookcopy_update()
 {

     FILE *fp;
     struct bookcopy b;
    
    fp = fopen("book.db", "ab");
    if(fp == NULL) {
        perror("fopen() failed");
        exit(1);
    }    
    while(fread(&b, sizeof(struct bookcopy), 1, fp) > 0) {
        print_bookcopy(&b);
    }
    fclose(fp);
    }
    void bookcopy_get_available_id()
    {

	 int book_id;
	 FILE *fp;
	 bookcopy_t bc;
	 int count = 0;
	 input book id
	
    printf("enter the book id: ");
	scanf("%d", &book_id);
    }
	// open book copies file
	fp = fopen("bookcopy.db", "rb");
	if(fp == NULL) {
		perror("cannot open bookcopies file.");
		return;
	}

	// read bookcopy records one by one
	while(fread(&bc, sizeof(bookcopy_t), 1, fp) > 0)
     {
		if(bc.bookid == book_id && strcmp(bc.status, status_available)==0) {
			bookcopy_display(&bc);
			count++;
		}
	}
	fclose(fp);
		{
            printf("no copies availables.\n");
        }
int bookcopy_get_available_count()