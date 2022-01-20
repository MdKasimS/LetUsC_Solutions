#include <stdio.h>

int main(int argc, char *args[])
{
	unsigned long num;
	int sum;
	sum = 0;
	printf("Enter The Number(< 5 digits) : ");
	scanf("%u", &num);

	for (int i = 0; i < 5; ++i)
	{
		sum = sum + (num % 10);
		num = num / 10;
	}

	printf("Sum of all digits in input number is = %d ", sum);

	return 0;
}