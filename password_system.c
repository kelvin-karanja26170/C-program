/*
Name:Kelvin Karanja
Reg no:CT100/G/26170/25
Description:Password_system
*/
#include<stdio.h>

int main (){
	int password;
	do{
		printf("Enter password:");
		scanf("%d",&password);
	}while(password!=1234);
	printf("Access granted\n");
	
	return 0;
}