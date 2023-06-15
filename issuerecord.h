#ifndef __BOOK_H_
#define __BOOK_H_
//#include <time.h>
//#include <Date.h>
#include "date.h"
#include "user.h"
typedef struct issuerecord {
	int id;
	int copyid;
	int memberid;
	date_t issue_date;
	date_t return_duedate;
	date_t return_date;
	double fine_amount;
}issuerecord_t;
#endif