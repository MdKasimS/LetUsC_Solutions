#include <stdio.h>

int main(int argc, char *args[])
{
	float tempF;
	printf("Enter the temperature in Farenheit : ");
	scanf("%f", &tempF);
	printf("Temperature in Centigrades is : %0.3f C", (tempF - 32) * 5 / 9);

	return 0;
}