#include<stdio.h>


int main(int argc,char *args[])
{
	int year;
	printf("Enter the year : ");
	scanf("%d",&year);
	if(year%4==0)
	{
		printf("Number is Leap Year\n");
	}
	else
	{
		printf("Not A Leap Year\n");
	}

	return 0;
}