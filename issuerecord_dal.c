
    #include<stdio.h>
    #include "issuerecord_dal.h"
    #include "issuerecord.h"


    void issuerecord_save(issuerecord_t *r)
 {
         struct issuerecord r;

         FILE *fp;
        fp = fopen("issuerecord.db", "rb");  
    if(fp == NULL) {
        perror("fopen() failed");
        exit(1);
    }
    
    fwrite(&r, sizeof(struct issuerecord), 1, fp);{
    printf("issuerecord saved.\n");
    fclose(fp);}
 
 }
     void issuerecord_update()
         FILE *fp;
     struct issuerecord r;
      {
     fp = fopen("issuerecord.db", "ab");
     if(fp == NULL) {
         perror("fopen() failed");
         exit(1);
    }    
     while(fread(&r, sizeof(struct issuerecord), 1, fp) > 0) 
     {
         print_issuerecord(&r);
     }
     fclose(fp);
    }
