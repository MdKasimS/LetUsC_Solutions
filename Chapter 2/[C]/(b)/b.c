#include<stdio.h>


int main(int argc,char *args[])
{
	int num;
	printf("Enter the number : ");
	scanf("%d",&num);
	if(num%2==0 &&  num!=0)
	{
		printf("Even\n");
	}
	else if(num%2!=0)
	{
		printf("Odd\n");
	}
	else
	{
		printf("0 is neither even or odd\n");
	}




	return 0;
}