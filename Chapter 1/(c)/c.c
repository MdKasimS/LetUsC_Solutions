#include <stdio.h>

int main(int argc, char *args[])
{
	float sub[5], sum;
	sum = 0;
	for (int i = 0; i < 5; ++i)
	{
		printf("Enter the marks ", sub[i]);
		scanf("%f", &sub[i]);
		sum = sum + sub[i];
	}

	printf("Average of marks %0.3f ", sum / 5);
	printf("Percentage = %0.3f %%", sum / 5);

	return 0;
}