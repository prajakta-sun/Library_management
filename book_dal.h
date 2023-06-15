#include<stdio.h>
#ifndef ___BOOK.H
#define ___BOOK.H
#define BOOK_DB		"books.db"
#define BOOKCOPY_DB	"bookcopies.db"
#include "book.h"

void book_save(book_t *b);
void book_update(book_t *b);
void book_find_by_isbn();
void book_find_by_title();
   
 //* copy_save(), copy_update(), copy_get_available_count(), copy_get_available_id().
   
int bookcopy_id(bookcopy_t);
void bookcopy_save(bookcopy_t);
void bookcopy_update();
int bookcopy_get_available_count();
void bookcopy_get_available_id();
        
#endif