// #ifndef ___USER.H
// #define ___USER.H
#include "book.h"
// book functions
void book_accept(book_t *b);
void book_print(book_t *b);

 
 //add_new_book(), change_rack(), check_book_availability(), ...


    void add_new_book(book_t *b);
    int change_rack();
    void check_book_availability();

//#endif