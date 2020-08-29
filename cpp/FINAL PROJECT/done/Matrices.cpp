#include "Matrices.h"
#include "MMultiplication.h"
#include "MEchelon.h"
#include "MTranspose.h"
#include "MAddSub.h"
#include <stdio.h>

int Matrices::getMatricesMode(void)
	{
	int matmode;
	MMultiplication mul;
	MEchelon ech;
	MTranspose tra;
	MAddSub add;

	printf("\nMode: Matrices\n\n");
	printf("Please Choose a Mode:\n");
	printf("1.Multiplication\n2.Echelon\n3.Transpose\n");
	printf("4.Addition or Substraction\n");
	printf("Mode: ");
	scanf("%i",&matmode);

	if( matmode == 1 )
	{printf(" ", mul.getMMultiplication());}
	if( matmode == 2 )
	{printf(" ", ech.getMEchelon());}
	if( matmode == 3 )
	{printf(" ", tra.getMTranspose());}
	if( matmode == 4 )
	{printf(" ", add.getMAddSub());}
	return 0;
	}