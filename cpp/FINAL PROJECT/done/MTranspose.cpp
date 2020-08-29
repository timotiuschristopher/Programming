#include "MTranspose.h"
#include <stdio.h>
#include <math.h>

int MTranspose::getMTranspose()
	{
	int r, c, i, j;
	int mat0[4][4];
	printf("\nMode: Matrix Transpose(Max Row & Column = 4)\n\n");
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

	printf("Entered Matrix:\n");
		for (int i = 0; i < r; i++)
		{ 
			for (int j = 0; j < c; j++)
			{
			printf(" %i ", mat0[i][j]);
			}
		printf("\n");
		}	

	printf("Transpose of Matrix : \n ");
		for (int i = 0; i < c; i++)
		{
			for (int j = 0; j < r; j++)
			{
			printf("%i", mat0[j][i]);
			}
		printf("\n ");
		}
	return 0;
	}