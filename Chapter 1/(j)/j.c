#include<stdio.h>


int main(int argc,char *args[])
{
	int i,j,n;
	float pop;
	//printf("Enter The Population : ");
	pop=80000;//scanf("%f", &pop);
	float men,women,illiterate;

	men=0.52 * pop;
	women=pop-men;
	illiterate=pop-0.48*pop;
	//printf("Total Men 52%% : %0.0f\n",men);
	//printf("Total Women 48%% : %0.0f\n",women);
	//printf("Total illitearates 52%% : %0.0f\n",illiterate);	
	printf("Total illiterate men out of 52%% : %0.0f\n",(pop-.35*pop-women));
	printf("Total illiterate women out of 48%% : %0.0f\n",illiterate-(pop-.35*pop-women));

	return 0;
}