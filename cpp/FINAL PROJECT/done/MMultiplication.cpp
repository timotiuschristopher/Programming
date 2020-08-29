#include "MMultiplication.h"
#include <stdio.h>
#include <math.h>

int MMultiplication::getMMultiplication()
	{
	int r, c, i, j, k;
	int mat0[4][4];
	int mat1[4][4];
	int mat2[4][4];

	printf("\nMode: Matrix Multiplication(Max Row & Column = 4)\n\n");
	printf("Enter rows of matrix : ");
	scanf("%i", &r);
	printf("Enter columns of matrix : ");
    	scanf("%i", &c);

		if(r > 4 or c>4)
		{
		printf("ERROR");
		return -1;
		}

	printf("Enter Data for Matrix A (%ix%i): \n", r, c);
		for (i = 0; i < r; i++)
		{
			for (j = 0; j < c; j++)
			{
			printf("Element [%i][%i]: ", i, j);
			scanf("%i", &mat0[i][j]);
			}
		}

	printf("Enter Data for Matrix B (%ix%i): \n", c, r);
		for (i = 0; i < c; i++)
		{
			for (j = 0; j < r; j++)
			{
			printf("Element [%i][%i]: ", i, j);
			scanf("%i", &mat1[i][j]);
			}
		}

	printf("Entered Matrix:\n");
		for (i = 0; i < r; i++)
		{ 
			for (j = 0; j < c; j++)
			{
			printf(" %i ", mat0[i][j]);
			}
		printf("\n");
		}

	printf("Entered Matrix:\n");
		for (i = 0; i < c; i++)
		{ 
			for (j = 0; j < r; j++)
			{
			printf(" %i ", mat1[i][j]);
			}
		printf("\n");
		}

	printf("Result of Multiplication is:\n");
		for (i = 0; i < r; i++)
		{
			for (j = 0; j < r; j++)
			{
				mat2[i][j] = 0;
				for (k = 0; k < c; k++)
				{
				mat2[i][j] += mat0[i][k] * mat1[k][j];
				}
			printf(" %i ", mat2[i][j]);
			}
		printf("\n");
		}
	
	return 0;
	}