    // #ifndef __BOOK_H_
    // #define __BOOK_H_
    // #include "date.h"
    #include "user.h"

    typedef struct book {
        int id;
        char name[50];
        char author[50];
        char subject[30];
        double price;
        char isbn[16];
    }book_t;

    typedef struct bookcopy {
        int id;
        int bookid;
        int rack;
        char status[16];
    }bookcopy_t;

   // #endif