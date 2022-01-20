#include<stdio.h>


int main(int argc,char *args[])
{
	long cashAmount;
	printf("Enter The Cash Amount : ");	
	scanf("%d",&cashAmount);
	printf("Denominations of 10  Total Notes : %d\n",cashAmount/10 );
	printf("Denominations of 50  Total Notes : %d\n",cashAmount/50);
	printf("Denominations of 100 Total Notes : %d\n",cashAmount/100);
	
	return 0;
}