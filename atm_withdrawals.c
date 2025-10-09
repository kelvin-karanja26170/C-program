/*
Name:Kelvin Karanja
Reg no:CT100/G/26170/25
Description:ATM withdrawals
*/
#include<stdio.h>

int main(){
	float balance;
	
	printf("enter initial account balance:");
	scanf("%f",&balance);
	
	while(balance>0){
		float withdrawal;
		
		printf("enter amount to withdraw:");
		scanf("%f",&withdrawal);
		 balance-=withdrawal;
		
		printf("remaining balance:%.2f\n",balance);
	}
	printf("insufficient amount,balance is zero or negative.\n");
	
	return 0;
}