#include<stdio.h>
#include "book_dal.h"
//save book
 
    //  file *fp;
    //  struct book b ;

  {
    fp = fopen("book_db", "rb");
    if(fp == NULL) {
        perror("fopen() failed");
        exit(1);
    }
    
    fwrite(&b, sizeof(struct book), 1, fp);{
    printf("New book saved.\n");
    fclose(fp);}
 }
 
//updae_all_books()
 
    // file *fp;
    // struct book b;
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
//find book by isbn
{
    printf("enter book isbn to find: ");
    scanf("%c",isbn);
    strupr(isbn);
    
    fp = fopen("book.db", "rb");
    if(fp == NULL)
    {
        perror("fopen() failed");
        exit(1);
    }
}
   
    while( fread(&b, sizeof(struct book), 1, fp) > 0 ) 
       { 
        strupr(b.isbn);
        if(strstr(b.isbn, isbn) != NULL) {
            found = 1;
           { print_book(&b);
        }
    }
     
    if(!found)  
        printf("No matching book found.\n");
    
    fclose(fp);
}
    //find book by title
    {
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
//save bookcopy
{
    //   file *fp;
    // struct book b ;

  
    fp = fopen("book_db", "rb");
    if(fp == NULL) {
        perror("fopen() failed");
        exit(1);
    }
    
    fwrite(&b, sizeof(struct book), 1, fp);
    printf("New bookcopy saved.\n");
    fclose(fp);
}
//bookcopy_update();

//   FILE *fp;
//     struct bookcopy b;
    {
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
    //bookcopy get available id

	printf("enter the bookcopy id ");
	scanf("%s", &bookcopy_id);
	// open book copies file
	fp = fopen("bookcopy.db", "rb");
	if(fp == NULL) {
		perror("cannot open bookcopies file.");
    }

    //bookcopy_get_available_count();

		return 0;
