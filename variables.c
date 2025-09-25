/*
Name:Kelvin Karanja
Reg No:CT100/G/26170/25
Description:Program to compute volume of a cylinder and surface area
Vol=pi*radius^2*height
S_A=(2pi*radius^2)+(2pi*radius*height)
*/

#include <stdio.h>

int main(){
	//variable declaration
	float pi,radius,height;
	
	//prompt the user to enter pi
	printf("Enter pi:");
	scanf("%f",&pi);
	
	//prompt the user to enter radius
	printf("\n Enter radius:");
	scanf("%f",&radius);
	
	//prompt the user to enter height
	printf("\n Enter height:");
	scanf("%f",&height);
	
	//computer volume
     printf("volume = pi*radius^2*height:\n");
	
	//computer surface area
	printf("surface area=(2pi*radius^2)+(2pi*radius*height):");
	
	return 0;
}
