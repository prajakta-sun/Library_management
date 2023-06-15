//for tier 3

#ifndef ___USER.H
#define ___USER.H
// #define USER_FILE "user.db"
 
enum rol {owner,librarian,member};

//  struct user {
   
//     int id;
//     char name[40];
//     char email[30];
//     char password[20];
//     char phone[30];
//     enum rol role;
//     }user_t;
    
void user_accept(user_t *u);
void user_print(user_t *u);
int user_get_max_id(user_t *u);
int sign_in();
int sign_up();
void edit_profile();
void change_passwd();

#endif