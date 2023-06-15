	#include<stdio.h>
	#include "book_control.h"
	#include "book.h"
	//accept book
	void book_accept(book_t *b)
	{
		printf("id: ");
		scanf("%d", &b->id);
		printf("name: ");
		scanf("%s", b->name);
		printf("author: ");
		scanf("%s", b->author);
		printf("subject: ");
		scanf("%s", b->subject);
		printf("price: ");
		scanf("%lf", &b->price);
		printf("isbn: ");
		scanf("%s", b->isbn);
	}

	void book_display(book_t *b) {
		printf("%d, %s, %s, %s, %.2lf, %s\n", b->id, b->name, b->author, b->subject, b->price, b->isbn);
}
    void book_print(book_t *b)
{	    printf("enter the book id: ");
		printf("enter the book name: ");
		printf("enter the book author: ");
		printf("enter the book subject: ");
	    printf("enter the book price: ");
		printf("enter the book isbn: ");
		}
		
	 void add_new_book(book_t *b) 
		{
		fp = fopen("book.db",1,"w");
		if(fp == NULL) {
			perror("fopen() failed");}
			exit(1);
	
		fwrite(&b, sizeof(book_t), 1, fp);
		{printf("New book add.\n");
		}
		fclose(fp);
		}
		
	//	void change_rack()


		void check_book_availability() {
			
			int book_id;
			FILE *fp;
			book_t;
			int count = 0;
			// input book id
			printf("enter the book id: ");
			scanf("%d", &book_id);
			
			// open book  file
			fp = fopen("book.db", "rb");
			if(fp == NULL) {
				perror("cannot open book file.");
			
			}
		}
			