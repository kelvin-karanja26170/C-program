/*
Name:Kelvin Karanja
Reg no:CT100/G/26170/25
Description:Guessing game
*/
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main(){
	srand(time(NULL));
	
	int secretnumber=rand()%20+1;
	int guess;
	int attempts=0;
	
    	printf("Guess the number between 1 and 20:\n");
	
	do{
		printf("Enter your guess:");
		scanf("%d",&guess);
		++attempts;
		
		if(guess > secretnumber){
			printf("Too high!\n");
		}
		else if (guess< secretnumber){
			printf("Too low!\n");
		}
		else{
			printf("congratulations!You guessed it in %d attempts.\n",attempts);
		}
	}	while(guess != secretnumber);
	
        return 0;
	}