#include <stdio.h>

int main(int argc, char *args[])
{
	int basic_pay;
	printf("Enter the basic pay\t : ");
	scanf("%d", &basic_pay);
	printf("His basic pay is %d ", basic_pay);
	printf("Dearness Allowance %%40  %f\n", 0.4 * basic_pay);
	printf("House Allowance %%20     %f\n", 0.2 * basic_pay);
	printf("Gross salary is %f\n", (1 + .4 + .2) * basic_pay);

	return 0;
}