#include "MatrixMult.h"
#include <stdio.h>

int mtxA[10][10], r, c, data;
int mtxB[10][10];
int C[10][10];

void MatrixMult::setRow (int ri){
	r = ri;
}

void MatrixMult::setColumn (int ci){
	c = ci;
}

void MatrixMult::setMatrixOri(int matA[10][10], int matB[10][10]){	
	for (int d = 0; d < r ; d++){ 
        for (int k = 0; k < c; k++){ 
            mtxA[d][k] = matA[d][k]; 
            mtxB[k][d] = matB[k][d];
        } 
    }
}

int MatrixMult::getMatrixA(){
	for (int p = 0; p < r ; p++){ 
        for (int k = 0; k < c; k++){ 
            printf("%i ", mtxA[p][k]); 
        }

        printf("\n");
    }

    printf("\n");

    return 0;
}

int MatrixMult::getMatrixB(){
    for (int i = 0; i < c ; i++){ 
        for (int j = 0; j < r; j++){ 
            printf("%i ", mtxB[i][j]); 
        }

        printf("\n");
    } 

    printf("\n");

    return 0;
}

int MatrixMult::getMatrixMult(){
	for (int h = 0; h < r; h++){
        for (int g = 0; g < r; g++){
            for (int k = 0; k < c; k++){
                C[h][g] += mtxA[h][k] * mtxB[k][g];
            }

            printf("%i ", C[h][g]);
        }

        printf("\n");
    }

  	return 0;
}
