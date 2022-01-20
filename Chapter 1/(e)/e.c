#include <stdio.h>
#define PI 3.14

int main(int argc, char *args[])
{
	float l, b, r;
	printf("Enter the length ");
	scanf("%f", &l);
	printf("Enter the breadth ");
	scanf("%f", &b);
	printf("Enter the radius ");
	scanf("%f", &r);

	printf("Area of Rectangle : %0.3f\n", l * b);
	printf("Perimeter of Recatangle : %0.3f\n", 2 * (l + b));

	printf("Area of circle : %0.3f\n", PI * r * r);
	printf("Circumference of circle : %0.3f\n", 2 * r * PI);

	return 0;
}