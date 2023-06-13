#include<stdio.h>
#ifndef ___BOOK.H
#define ___BOOK.H
#define BOOK_DB		"books.db"
#define BOOKCOPY_DB	"bookcopies.db"
#include "book.h"
  typedef struct book
{
char book_save[30];
char book_update[30];
int book_find_by_isbn;
char book_find_by_title[40];
 }book_t;   
 //* copy_save(), copy_update(), copy_get_available_count(), copy_get_available_id().
    typedef struct bookcopy
    {   char bookcopy_id[40];
        charbookcopy_save[30];
        char bookcopy_update[30];
        int bookcopy_get_available_count;
        int bookcopy_get_available_id;
        }bookcopy_t;
    #endif