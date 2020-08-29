#include <stdio.h>
#include "Matrix.h"

int main (){

	int data [10][10], r, c, i, j;
	
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
    }
				
	Matrix m1;
	m1.setRow(r);
	m1.setColumn(c);
	m1.setMatrix (data);

	printf("\n");
	printf("Original Matrix\n");	
	printf("", m1.getOriMatrix());	
	printf("Transpose Matrix\n");
	printf("", m1.getTMatrix());
	
	return 0;      
}