//Reverse The Number

#include<stdio.h>

int main(int argc,char *args[])
{
	int num,revNum,i,count,temp,r;
	count=5;
	while(num<10000 || num>99999)
	{
		printf("Enter the Number : ");
		scanf("%d",&num);
	}
	revNum=0;
	while(num!=0)
	{
		r=num%10;
		num=num/10;
		temp=1;
		for(i=1;i<=count-1;++i)
		{
			temp=temp*10;
			printf("temp = %d \n",temp);
		}
		revNum=revNum+r*temp;
		--count;
	}

	printf("Reverese Num Is %d ",revNum);

	return 0;
}