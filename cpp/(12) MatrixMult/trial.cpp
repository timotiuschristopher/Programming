#include <stdio.h>
//#include "MatrixMult.h"
#include <math.h>

int main (){

	/*int data [10][10], r, c, i, j;
	
	printf("Matrix Transposer (Max Row & Column = 10)\n");
	printf("Enter rows of matrix : ");
    scanf("%i", &r);
    printf("Enter columns of matrix : ");
    scanf("%i", &c);
   
    printf("Enter elements of matrix : \n");
    for (i = 0; i < r; i++){
        for (j = 0; j < c; j++){
        	printf("Element [%i][%i]: ", i, j);
            scanf("%i", &data[i][j]);
        }
    }*/
	
    int A [2][3] = {{1, 2, 3}, {4, 5, 6}};
    int B [3][2] = {{7,8}, {9,10}, {11,12}};
    int C [10][10];

    printf("Mat A : \n ");
    for (int i = 0; i < 2; i++)
    { 
        for (int j = 0; j < 3; j++)
            printf("%i", A[i][j]);
            printf("\n ");
    }

    printf("Mat B : \n ");
    for (int p = 0; p < 3; p++)
    {
        for (int q = 0; q < 2; q++)
            printf("%i ", B[p][q]);
            printf("\n ");
    }
   
	printf("MatMult : \n");
	for (int h = 0; h < 2; h++)
	    {
	        for (int g = 0; g < 2; g++)
	        {
	            C[h][g] = 0;
	            for (int k = 0; k < 3; k++)
	            {
	                C[h][g] += A[h][k] * B[k][g];
	            }
	        }
	    }
	for (int p = 0; p < 2; p++)
	{
	    for (int q = 0; q < 2; q++)
	        printf("%i ", C[p][q]);
	        printf("\n ");
	}
    
	return 0;      
}