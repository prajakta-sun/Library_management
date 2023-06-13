#ifndef __BOOK_H_
    #define __BOOK_H_
    #include "control.h"
//accept book
void book_accept(book_t *b) {
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
//add new book

 FILE *fp;
    struct book;
    accept_book();
    // open file for appending
    fp = fopen("book.db",1,"w");
    if(fp == NULL) {
        perror("fopen() failed");}
        exit(1);
    
  
    fwrite(book, sizeof( book_t), fp);
    {printf("New book add.\n");
    }
    fclose(fp);
    //change_rack()
    //check_book_availability() 
    {
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
		return 0;
