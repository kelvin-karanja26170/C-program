/*
Name:Kelvin Karanja
Reg no:CT100/G/26170/25
Description:Multiple_branches
*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
	int chain[3][5][10];
	int totaloccupied = 0;
	
	srand(time(NULL));
	
	for(int b=0; b <3; b++){
		for(int f =0; f <5; f++){
			for(int r =0; r <10; r++){
				chain[b][f][r]=rand()%2;
				if(chain[b][f][r]==1){
					totaloccupied++;
				}
			}
		}
	}
	printf("Total number of rooms occupied across all branches:%d\n",totaloccupied);
	return 0;
}