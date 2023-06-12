#ifndef __BOOK_H_
#define __BOOK_H_
// #include "date.h"
typedef struct book {
    int id;
    char name[40];
    float price;
    date_t publish;
} book_t;

void accept_book(book_t *b);
void print_book(book_t *b);

#endif