#include<stdio.h>


int main(int argc,char *args[])
{
	int i,j,n,count,num;
	
	while(num<999 || num>=10000)
	{
		printf("Enter the number ");
		scanf("%d",&num);
	}
	
	count=4;
	n=0;
	while(num!=0)
	{
		j=num%10;
		num=num/10;
		if(count==4 || count==1)
		{
			n=n+j;
		}
		--count;
	}	
	printf("Sum of 1st and last digit is %d ",n);


	return 0;
}