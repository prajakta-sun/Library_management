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
    
    ///////////////
  void user_accept(user_t *u) {
	// printf("id: ");
	// scanf("%d", &u->id);
	u->id = get_next_user_id();
	printf("name: ");
	scanf("%s", u->name);
	printf("email: ");
	scanf("%s", u->email);
	printf("phone: ");
	scanf("%s", u->phone);
	printf("password: ");
	scanf("%s", u->password);
	strcpy(u->role, ROLE_MEMBER);
}

void user_print(user_t *u) {
	printf("%d, %s, %s, %s, %s\n", u->id, u->name, u->email, u->phone, u->role);
}

void sign_in() {
	char email[30], password[10];
	user_t u;
	int invalid_user = 0;
	// input email and password from user.
	printf("email: ");
	scanf("%s", email);
	printf("password: ");
	scanf("%s", password);
	// find the user in the users file by email.
	if(user_find_by_email(&u, email) == 1) {
		// check input password is correct.
		if(strcmp(password, u.password) == 0) {
			// special case: check for owner login
			if(strcmp(email, EMAIL_OWNER) == 0)
				strcpy(u.role, ROLE_OWNER);

			// if correct, call user_area() based on its role.
			if(strcmp(u.role, ROLE_OWNER) == 0)
				owner_area(&u);
			else if(strcmp(u.role, ROLE_LIBRARIAN) == 0)
				librarian_area(&u);
			else if(strcmp(u.role, ROLE_MEMBER) == 0)
				member_area(&u);
			else
				invalid_user = 1;
		}
		else
			invalid_user = 1;
	}
	else
		invalid_user = 1;

	if(invalid_user)
		printf("Invalid email, password or role.\n");
}

void sign_up() {
	// input user details from the user.
	user_t u;
	user_accept(&u);
	// write user details into the users file.
	user_add(&u);
}