/*
Name:Kelvin Karanja
Reg no:CT100/G/26170/25
Description:Water bill calculator
*/
#include<stdio.h>

int main(){
	int water_units;
	float bill;
	
	printf("Enter number of water units consumed:");
	scanf("%d",&water_units);
	
	if(water_units<=30){
		bill=20 * water_units;
	}
	else if(water_units<=60){
		bill=25 * water_units;
	}
	else{
		bill=30 * water_units;
	}
	
	printf("Total water bill %.2f KES\n", bill);
	return 0;
}