
    #include<stdio.h>
    #include "issuerecord_service.h"
    #include "issuerecord.h"

void issuerecord_add(issuerecord_t *r)
{
   struct issuerecord r;
   
     FILE *fp;
	bookcopy_accept(&b);
	b.id = get_next_issuerecord_id();
	
	fp = fopen("issuerecord.db", "ab");
	if(fp == NULL) {
		perror("cannot open issuerecord file");
		exit(1);
	}
	
	fwrite(&r, sizeof(issuerecord_t), 1, fp);
	printf("issuerecord added in file.\n");

	fclose(fp);
}
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
void  bookcopy_find_by_id()//issued
 {
	issuerecord_t rec;
	FILE *fp;
	// accept issuerecord details from user
	issuerecord_accept(&rec);
	// if user is not paid, give error & return.
	if(!is_paid_member(rec.memberid)) {
		printf("member is not paid.\n");
		return;
	}
	// generate & assign new id for the issuerecord
	rec.id = get_next_issuerecord_id();
	// open issuerecord file
	fp = fopen("issuerecord.db", "ab");
	if(fp == NULL) {
		perror("issuerecord file cannot be opened");
		exit(1);
	}
	
	fwrite(&rec, sizeof(issuerecord_t), 1, fp);
	
	fclose(fp);
//bookcopy_changestatus(rec.copyid,status_issued);
 }
void bookcopy_edit(bookcopy_t)
{
int id, found = 0;
	FILE *fp;
	bookcopy_t;
	// input bookcopy id from user.
	printf("enter bookcopy id: ");
	scanf("%d", &id);
	// open books file
	fp = fopen("bookcopy.db", "rb+");
	if(fp == NULL) {
		perror("cannot open books file");
		exit(1);
	}
	// read books one by one and check if book with given id is found.
	while(fread(&b, sizeof(bookcopy_t), 1, fp) > 0) {
		if(id == b.id) {
			found = 1;
			break;
		}
	}
	// if found
	if(found) {
		// input new book details from user
		long size = sizeof(bookcopy_t);
		bookcopy_t nb;
		bookcopy_accept(&nb);
		nb.id = b.id;
		// take file position one record behind.
		fseek(fp, -size, SEEK_CUR);
		// overwrite book details into the file
		fwrite(&nb, size, 1, fp);
		printf("bookcopy updated.\n");
	}
	else // if not found
		printf("Bookcopy not found.\n");
	fclose(fp);
}