/*
Name:Kelvin Karanja
Reg no:CT100/G/26170/25
Description:Transaction_from_file
*/

#include<stdio.h>

int main(){
	FILE *fp;
	float transaction;
	float total_sales=0.0;
	int count ,i;
	
	printf("Enter the number of transactions:");
	scanf("%d",&count);
	
	fp=fopen("sales.txt","w");
	
	if(fp==NULL){
		printf("Error opening  file for writing.\n");
		return 1;
	}
	
	for(i=0;i<count;i++){
		printf("Enter amount for transaction %d:",i+1);
		scanf("%f",&transaction);
		fprintf(fp,"%.2f\n",transaction);
	}
	
	fclose(fp);
	
	fp=fopen("sales.txt","r");
	if(fp==NULL){
		printf("Error opening file for reading.\n");
		return 1;
	}	
	
	
	while(fscanf(fp,"%f",&transaction)==1){
		total_sales+=transaction;
	}
	
	printf("Total sales for the day:%.2f\n",total_sales);
	
	fclose(fp);
	
	return 0;
}