//for tier 1

#include<stdio.h>
#include "user_dal.h"



// void accept_user(struct user_t *u) {
//     printf("enter id: ");
//     scanf("%d%*c", b->id);
//     printf("enter name: ");
//     scanf("%[^\n]", b->name);
//     printf("enter email: ");
//     scanf("%ch", b->email);
// }

// void print_user(struct user_t *u) {
//     printf("id = %d\nname = %s\nemail = %s\n", b->id, b->name, b->email);
// }

  //void add_user()

   { FILE *fp;
    struct user u;
    accept_user(&u);
    // open file for appending
    fp = fopen("user.db", "w");
    if(fp == NULL) {
        perror("fopen() failed");}
        exit(1);
    
  
    fwrite(&u, sizeof( user_t), 1, fp);
    {printf("New user saved.\n");
    }
    fclose(fp);
 

 //void search_a_user_by_email()
   
   FILE *fp;
    struct user_t *u;
    // open file for reading
    fp = fopen("user.db", "r");
    if(fp == NULL) 
        {perror("fopen() failed");
        exit(1);}
       
   
    while(fread(&u, sizeof( user_t), 1, fp) > 0) 
        {print_user(&u);}
    

  
    fclose(fp);
// }
//   //void search_a_user_by_id()
// {
     FILE *fp;
    struct user_t*u;
    
    fp = fopen("user.db", "r");
    if(fp == NULL) 

        {perror("fopen() failed");
        exit(1);}
    
   
    while(fread(&u, sizeof( user_t), 1, fp) > 0) 
        {print_user(&u);}

    fclose(fp);

    return 0;
}