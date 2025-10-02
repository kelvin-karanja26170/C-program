/*
Name:Kelvin Karanja
Reg no:CT100/G/26170/25
Description:Exam Eligibility
*/
#include<stdio.h>

int main(){
	int attendance,average_marks;
	printf("Enter your attendance:");
	scanf("%d",&attendance);
	
	printf("Enter your average marks:");
	scanf("%d",&average_marks);
	
	if(attendance>=75 and average_marks>=40){
	printf("Eligible for exams");
	}
	else{
		printf("Not eligible for exams");
	}
	
	return 0;
}