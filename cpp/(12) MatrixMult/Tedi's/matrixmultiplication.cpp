#include <stdio.h>
#include "matrixmultiplication.h"

int row, column, data;
int matrixA[7][7], matrixB[7][7];
int matrixmltplctn[7][7];

void matrixmultiplication::setValues (int r, int c){
	row = r;
    column = c;
}

void matrixmultiplication::setMatrixEquation(int matrix1[7][7], int matrix2[7][7]){	
	for (int o = 0; o < row ; o++){ 
        for (int p = 0; p < column ; p++){ 
            matrixA[o][p] = matrix1[o][p]; 
            matrixB[p][o] = matrix2[p][o];
        } 
    }
}

int matrixmultiplication::getMatrixA(){
	for (int y = 0; y < row ; y++){ 
        for (int h = 0; h < column ; h++){ 
            printf("%i ", matrixA[y][h]); 
        }

        printf("\n");
    }

    printf("\n");

    return 0;
}

int matrixmultiplication::getMatrixB(){
    for (int e = 0; e < column ; e++){ 
        for (int d = 0; d < row ; d++){ 
            printf("%i ", matrixB[e][d]); 
        }

        printf("\n");
    } 

    printf("\n");

    return 0;
}

int matrixmultiplication::getMatrixmltplctn1(){
	for (int q = 0; q < row ; q++){
        for (int a = 0; a < row ; a++){
            for (int z = 0; z < column ; z++){
                matrixmltplctn[q][a] += matrixA[q][z] * matrixB[z][a];
            }

            printf("%i ", matrixmltplctn[q][a]);
        }

        printf("\n");
    }

  	return 0;
}
