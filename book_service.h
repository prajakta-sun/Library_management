    
#ifndef __BOOK_H_
#define __BOOK_H_
#define BOOK_FILE "book.db"
#include "book.h"

   {
    void add_book();
    void book_edit();
   }   
    {
    void bookcopy_add();
    void bookcopy_edit(bookcopy_t *c);
    void bookcopy_available_id(bookcopy_t *c);


    }
    #endif