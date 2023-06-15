//for tier 1

#ifndef ___USER_DAL_H
#define ___USER_DAL_H
#include "user.h"
#define USER_FILE "user.db"


int user_save();
int user_update();
int user_find_by_email();
int user_find_by_id();
            
#endif
