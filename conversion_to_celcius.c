/*
Name:Kelvin Karanja
Reg no:CT100/G/26170/25
Description:Conversion_to_celcius
*/

#include<stdio.h>

float convertToCelcius(float fahrenheit){
	float celcius = (fahrenheit - 32)* (5.0/9.0);
	return celcius;
}

int main(){
	float fahrenheit_temp;
	printf("Enter temperature in fahrenheit:");
	scanf("%f",&fahrenheit_temp);
	
	float celcius_temp = convertToCelcius(fahrenheit_temp);
	printf("The temperature in celcius is : %.2f\n",celcius_temp);
	
	return 0;
}