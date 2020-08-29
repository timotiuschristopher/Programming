// Class file for Matrix
#include <stdio.h>
#include "Matrix.h"
#define ROW 10
#define COL 10
//States
int row;
int col;
int A[ROW][COL];
int AT[COL][ROW];

void Matrix::setMatSize(int m, int n){
    row = m;
    col = n;
}

void Matrix::setMatValues(int m, int n, int val){
    A[m][n] = val;
}

int Matrix::getMatValues(int x, int y){
    return A[x][y];
}

int Matrix::getTranspose(){

   printf("Transposed Matrix\n");
   for(int i = 0; i < col; i++){
     for(int j = 0; j < row; j++){
	AT[i][j] = A[j][i];
   	printf("%d \t", AT[i][j]);
     }
	printf("\n");
   }

return 0;
}

int Matrix::getRow(){
    return row;
}

int Matrix::getCol(){
    return col;
}

int Matrix::displayMat(){

   printf("Original Matrix\n");
   for(int i = 0; i < row; i++){
     for(int j = 0; j < col; j++){
   	printf("%d \t", A[i][j]);
     }
	printf("\n");
   }

return 0;
}

