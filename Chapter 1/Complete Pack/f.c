#include <stdio.h>

int main(int argc, char *args[])
{
	int B, C;
	printf("Enter B : ");
	scanf("%d", &B);

	printf("Enter C : ");
	scanf("%d", &C);

	B = B - C;
	C = C + B; //gets B's value
	B = C - B; //gets C's value

	printf("After Swapping Value of B is : %d \n", B);
	printf("After Swapping Value of A is : %d \n", C);
	return 0;
}