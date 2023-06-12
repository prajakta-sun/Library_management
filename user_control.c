//for tier 3 authentication

#include<stdio.h>
#include "user_control.h"



        int userPasswords[]={1111},i,password,count=0,flag=0;
            do{
            printf("Enter  passwd\n");
            scanf("%d",&password);
            for(i=0;i<10;i++)
            {
            if(userPasswords[i]==password)
            {
            printf("Authentication Successful\n");
            flag=1;
            break;
            }
            }
            if(flag==0)
            
              if(count!=2){
            printf(" passwd Wrong,try again. %d \n",count+1);}
              else
            printf("passwd Wrong. %d \n",count+1);
            count+=1;
            
            while(count>0 && count<3 && flag==0);
          if(flag==0)
        {
        printf("authentication failed\n");
        }
        return 0;
