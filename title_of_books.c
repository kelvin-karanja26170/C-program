/*
Name:Kelvin Karanja
Reg no:CT100/G/26170/25
Description:Track_of_title_ofbooks
*/

#include<stdio.h>
#include<stdlib.h>

#define  FILENAME "borrowed_books.txt"

int main(){
	FILE*fp;
	char title[100];
	
	fp=fopen(FILENAME,"a");
	
	if(fp==NULL){
		printf("Error opening the file%s.\n",FILENAME);
		exit(1);
	}
	printf("Enter the title of the book:");
	fgets(title, sizeof(title),stdin);
	
	fprintf(fp,"%s",title);
	
	fclose(fp);
	
	printf("Title successfully stored in %s.\n",FILENAME);
	
	return 0;
}