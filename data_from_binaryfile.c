/*
Name:Kelvin Karanja
Reg no:CT100/G/26170/25
Description:read_data_from_binaryfile
*/

#include <stdio.h>
#include<stdlib.h>

 typedef struct {
	char name[50];
	int reg_no;
	float total_marks;
} Student;

int main(){
	FILE *file_ptr;
	 Student s;
	 int n,i;
	
	file_ptr=fopen("results.dat","wb");
	
	if(file_ptr==NULL){
		printf("Error opening file!\n");
		return 1;
	}
	
	printf("Enter number of students:\n");
	scanf("%d",&n);
	
	
	for(i=0;i<n;i++){
		printf("\nstudent %d\n",i+1);
		printf("\nEnter name:");
		scanf("%[^\n]", s.name);
		
		printf("Enter registration number:");
		scanf("%d",&s.reg_no);
		
		printf("Enter marks:");
		scanf("%f",&s.total_marks);
		getchar();
		
		fwrite(&s,sizeof( Student),1,file_ptr);
	}
	fclose(file_ptr);
	printf("All student records saved successfully!\n");
	
	return 0;
}
	
