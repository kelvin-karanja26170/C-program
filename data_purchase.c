/*
Name:Kelvin Karanja
Reg no:CT100/G/26170/25
Description:Mobile data bundle purchase
*/
#include<stdio.h>

int main(){
	 int choice;
	 
	 printf("1.100MB=KES.50:\n");
	 printf("2.500MB=KES.200:\n");
	 printf("3.1GB=KES.350:\n");
	 printf("4.2GB=KES.600:\n");
	 
	 printf("Enter your choice(1-4):");
	 scanf("%d",&choice);
	 
	 switch(choice)
	 {
      case 1:
      	printf("Thank you for purchasing 100MB data bundle\n");
      	break;
      case 2:
      	printf("Thank you for purchasing 500MB data bundle\n");
      	break;
      case 3:
      	printf("Thank you for purchasing 1GB data bundle\n");
      	break;
      case 4:
      	printf("Thank you for purchasing 2GB data bundle\n");
      	break;
        default:
	 
      printf("Invalid choice.please enter a choice (1-4)\n");
	 }
      
      return 0;
	 }