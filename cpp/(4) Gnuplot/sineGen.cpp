#include <stdio.h>
#include <math.h>

#define PI 3.14159265

int main(){
	int param;
	double result;
	printf("insert degrees: ");
	scanf("%i",&param);
	

		result = sin (param*PI/180);
		printf ("The sine of %i degrees is %f.\n", param, result);
}