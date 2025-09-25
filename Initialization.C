/*
Name:Kelvin Karanja
Reg No:CT100/G/26170/25
Description:Variables and Initialization
*/

#include<stdio.h> //scanf(),printf()
//main function
int main (){
	//Variable declaration
	char name[]={};      //%s
	int age;             //%d
	float salary;        //%f
	
	//prompting the user to enter values of each variable
	printf("Enter your age:");
	scanf("%d",&age);
	
	printf("Enter your name:");
	scanf("%s",name);
	
	printf("Enter your salary:");
	scanf("%f",&salary);
	//print the output to the user screen
	printf("Your age is %d \n",age);
	printf("Enter your name(string) is%s \n",name);
	printf("The value of your annual salary%f \n",salary);
	
	//qualification conditions
	printf("If age >=21 and annual_income>=21000:");
	printf("Congratulation, you qualify for a loan:\n");
	
	printf("if age<21 and annual_income<21000:");
	printf("Unfortunately, we are unable to offer you loan at this time:");
	
	return 0;
}