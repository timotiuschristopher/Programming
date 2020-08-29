#include <stdio.h>
#include "matrixmultiplication.h"

int main (){

	int data[7][7], data2[7][7];
	int r, c, i, j, k, l;
	
	printf("Enter rows of matrix : ");
    scanf("%i", &r);
    printf("Enter columns of matrix : ");
    scanf("%i", &c);
   
    printf("Enter matrix A (%ix%i): \n", r, c);
    for (i = 0; i < r; i++){
        for (j = 0; j < c; j++){
        	printf("Element [%i][%i]: ", i, j);
            scanf("%i", &data[i][j]);
        }
    }
    printf("\n");
    
    printf("Enter matrix B (%ix%i): \n", c, r);
    for(k = 0; k < c; k++){
    	for(l =0; l <r; l++){
    		printf("Element [%i][%i]: ", l, k);
            scanf("%i", &data2[k][l]);
    	}
    }
				
	matrixmultiplication m2;
	m2.setValues(r, c);
	m2.setMatrixEquation (data, data2);
	printf("\n");
	printf("Matrix A\n");	
	printf("", m2.getMatrixA());	
	printf("Matrix B\n");
	printf("", m2.getMatrixB());
	printf("Matrix Multiplication\n");
	printf("", m2.getMatrixmltplctn1());
	
	return 0;      
}