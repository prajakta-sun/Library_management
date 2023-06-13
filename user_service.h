//for tier 2
#ifndef ___USER.H
#define ___USER.H
#define USER_FILE "user.db"
 
enum rol {owner,librarian,member};

 struct user {
   
    int id;
    char name[40];
    char email[30];
    char password[20];
    char phone[30];
    enum rol role;
}user_t;

int user_authenticate(char email[], char passwd[], struct user *u);
int user_register(user_t *u);                     //-- assign max id+1 -- call user_save() 
int owner_register(user_t *u);                   //-- delete users.db (if exists), id = 1, call user_save() -- Tier-2

#endif
//sign in
//user accept user print  
