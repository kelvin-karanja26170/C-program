/*
Name:Kelvin Karanja
Reg no:CT100/G/26170/25
Description:Room_Occupancy
*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
	int occupancy[5][10];
	int floors,room;
	int occupied,vaccant;
	
	srand(time(NULL));
	
	for(int i = 0; i<floors; i++){
		for(int j =0; j<rooms; j++){
			occupancy[i][j]=rand()%2;
		}
	}
	
	printf("room occupancy:\n");
	for(int i=0; i<floors; i++){
		occupied=0;
		vaccant=0;
		for(int j=0;<rooms; j++){
			if(occupancy[i][j] ==1)
				occupied++;
			else
				vaccant++;
		}
		printf("floor &d:occupied=%d,vaccant=%d\n",i+1,occupied,vaccant);
	}
	return 0;
	
}