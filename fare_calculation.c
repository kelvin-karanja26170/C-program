/*
Name:Kelvin Karanja
Reg no:CT100/G/26170/25
Description:Fare_Calculation
*/

#include<stdio.h>

float farecalculation(float distance){
	float farerate = 50.0;
	return distance * farerate;
}

int main(){
	float distanceTravelled;
	float totalfare;
	
	printf("Enter the distance travelled in kilometers:");
	scanf("%f",&distanceTravelled);
	
	totalfare = farecalculation(distanceTravelled);
	printf("Total fare for a distance of %.2f km is Ksh. %.2f\n",distanceTravelled,totalfare);
	
	return 0;
}