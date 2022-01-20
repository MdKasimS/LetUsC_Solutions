#include <stdio.h>

int main(int argc, char *args[])
{
	float dist;
	printf("Enter the distance (in km)");
	scanf("%f", &dist);
	printf("in meters %0.3f m \n", dist * 1000);
	printf("in centi-meters %0.3f cm\n", dist * 100000);
	printf("in feet %0.3f ft\n", (dist * 100000) / 30.48);
	printf("in inches %0.3f inch.\n", (dist * 100000) / 2.54);
	return 0;
}