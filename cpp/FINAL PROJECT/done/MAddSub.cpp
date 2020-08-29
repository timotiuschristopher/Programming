#include "MAddSub.h"
#include <stdio.h>
#include <math.h>
#include <string.h>

int MAddSub::getMAddSub()
	{
	int mat1[4][4];
	int mat2[4][4];
	int result[4][4];
	int r,c;
	int method;


	printf("\nMode: Matrix Addition or Substraction (Max Row & Column = 4)\n\n");
	printf("Enter rows of matrix : ");
    	scanf("%i", &r);
	printf("Enter columns of matrix : ");
	scanf("%i", &c);

		if(r > 4 or c > 4)
		{
		printf("ERROR");
		return -1;
		}

	printf("Enter matrix A (%ix%i): \n", r, c);
		for (int i = 0; i < r; i++)
		{
			for (int j = 0; j < c; j++)
			{
			printf("Element [%i][%i]: ", i, j);
			scanf("%i", &mat1[i][j]);
			}
		}

	printf("Enter matrix B (%ix%i): \n", r, c);
		for (int i = 0; i < r; i++)
		{
			for (int j = 0; j < c; j++)
			{
			printf("Element [%i][%i]: ", i, j);
			scanf("%i", &mat2[i][j]);
			}
		}

	printf("Choose Mode: \n1. Addition\n2. Substraction\n");
	printf("Mode: ");
	scanf("%i", &method);
		if(method == 1)
		{
			for(int i = 0; i < r; i++)
			{
				for(int j =0; j<c; j++)
				{
				result[i][j]=mat1[i][j]+mat2[i][j];
				}
			}
		} 

		else if(method == 2)
		{
			for(int i = 0; i < r; i++)
			{
				for(int j =0; j<c; j++)
				{
				result[i][j]=mat1[i][j]-mat2[i][j];
				}
			}
		}

		for (int i = 0; i < r; i++)
		{ 
        		for (int j = 0; j < c; j++)
			{
        		printf(" %i ", result[i][j]);
    			}
    		printf("\n");
		}

	return 0;
}