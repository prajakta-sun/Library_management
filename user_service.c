//for tier 2
//int user_authenticate(char email[], char passwd[], struct user *u); -- Tier-2
//                 * int user_register(user_t *u); -- assign max id+1 -- call user_save() -- Tier-2
//                 * int owner_register(user_t *u); -- delete users.db (if exists), id = 1, call user_save() -- Tier-2

#include<stdio.h>
#include <conio.h> 
#include<stdlib.h>
#include "user_service.h"

    void takeinput(char ch[30]){
        fgets(ch,50,stdin);

        }
        void generateusername(char email[30],char username[20]){
        for(int i=0;i<strlen(email);i++){
            if(email[i]='@')break;
            else username[i]=email[i];
        }}
        
        int choice;
            char username[20]; 
            char password[12]; {
        
            printf("choice \n");
            scanf("%d",&choice);
            printf("1.signup");
            printf("2.login \n");
            printf("3.exit \n");
            printf("Enter your username:\n"); 
            scanf("%s",&username); 
            
                printf("Enter your password:\n"); 
                scanf("%s",&password); }
                {
                if(strcmp(username,"prajaktagaware97@gmail.com")==0) }{
                    if(strcmp(password,"12341234")==0) }
                    {printf("\nWelcome.Login Success!"); 
                    }
                    elseif
                    { printf("\nwrong password"); 
                    } 
                
                else {printf("\n exit"); 
                
                }
                // Function to delete the records
            void deleterecord()
{
    
    while (another == 'y') {
        printf("\nEnter user "
               "name to delete : ");
        scanf("%s", username);
  
        ft = fopen("temp.txt", "wb");
        rewind(fp);
  
        while (fread(&e, size,
                     1, fp)
               == 1) {
            if (strcmp(e.name,
                       username)
                != 0)
                fwrite(&e, size, 1, ft);
        }
  
        fclose(fp);
        fclose(ft);
        remove("data.txt");
        rename("temp.txt", "data.txt");
        fp = fopen("data.txt", "rb+");
  
        printf("\nWant to delete another"
               " record (Y/N) :");
        fflush(stdin);
        another = getche();
    }

                return 0; 
            
} 