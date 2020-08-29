#include <stdio.h>
#include <math.h>

#include "Mode.h"

int main(int argc, char* argv[])
{
int a;
Mode mod;

	if(argc!= 2)
	{
	printf("\n\t\t\tBiomedical Engineering Survival Pack\n\n\n");
	printf("\t\t\t    Programming Final Project\n");
	printf("\t\t\t by Maria Prevyolita (11806002)\n");
	printf("\t\t  Timotius Christopher Tantokusumo (11806001)\n");
	printf("\nPlease Choose a Mode:\n");
	printf("1. Matrices (Addition, Substraction, Multiplication, Transpose, Echelon)\n2. Polynomials (Graph, Peak)\n3. Complex\n");
	printf("4. Basic Calculator\n");
	return -1;
	}

	a = atoi(argv[1]);

	mod.setMode (a);

	printf(" ", mod.getMode());

return 0;
}