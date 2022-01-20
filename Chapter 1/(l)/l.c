#include<stdio.h>


int main(int argc,char *args[])
{
	float sp,profit;
	printf("Total Selling Price of 15 Items is ");
	scanf("%f",&sp);	
	printf("Profit earned is ");
	scanf("%f",&profit);
	printf("Cost of one item is %0.2f : ",(sp-profit)/15);




	return 0;
}