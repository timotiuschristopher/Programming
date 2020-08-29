#include <stdio.h>
#include "MatrixMult.h"

int main (){

	int data [10][10], data2 [10][10];
	int r, c, i, j, k, l;
	
	printf("Matrix Multiplier (Max Row & Column = 10)\n");
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
				
	MatrixMult m1;
	m1.setRow(r);
	m1.setColumn(c);
	m1.setMatrixOri (data, data2);
	printf("\n");
	printf("Matrix A\n");	
	printf("", m1.getMatrixA());	
	printf("Matrix B\n");
	printf("", m1.getMatrixB());
	printf("Matrix Mult\n");
	printf("", m1.getMatrixMult());
	
	return 0;      
}