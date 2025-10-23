/*
Name:Kelvin Karanja
Reg no:CT100/G/26170/25
Description:Electric_bill_calculation
*/

#include<stdio.h>

float ElectricBillcalculation(int units){
	float bill = 0.0;
	
	if(units <= 100){
		bill = units * 10;
	}else if(units <= 200){
		bill = (100 * 10) + ((units - 100)* 15);
	}else{
		bill = (100 * 10) + (100 * 15) + ((units-200)* 20);
	}
	
	return bill;

}
int main(){
	int units;
	printf("Enter number of units consumed:\n");
	scanf("%d",&units);
	
	float bill= ElectricBillcalculation(units);
	printf("Total bill for %d units : Ksh. %.2f\n", units,bill);
	
	return 0;
}