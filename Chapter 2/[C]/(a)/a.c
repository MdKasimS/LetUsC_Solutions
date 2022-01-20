#include<stdio.h>


int main(int argc,char *args[])
{
	float sp,cp;
	printf("Enter the SP : " );
	scanf("%f",&sp);
	printf("Enter the CP : ");
	scanf("%f",&cp);
	if(sp-cp<0)
	{
		printf("Loss made is : %0.3f",sp-cp);
	}
	else if(sp-cp>0)
	{
		printf("Profit made is : %0.3f",sp-cp);
	}


	return 0;
}