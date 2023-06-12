#ifndef USER 
#define USER H
#define USER_FILE "user.db"
 //id, name, email, password, phone, role)
enum rol {owner,librarian,member};
typedef 
 struct user{
    int id;
    char name[40];
    char email[30];
    char password[20] ;
    char phone[30];
    enum rol role; 
}user ;
    #endif 
    

