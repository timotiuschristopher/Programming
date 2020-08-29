#include "Matrix.h"
#include <stdio.h>

int mtx[10][10], r, c, data;
int mtxT[10][10];

void Matrix::setRow (int ri){
	r = ri;
}

void Matrix::setColumn (int ci){
	c = ci;
}

void Matrix::setMatrix(int Ori[10][10]){	
	for (int p = 0; p < r ; p++) 
     { 
        for (int k = 0; k < c; k++) 
    	{ 
         mtx[p][k] = Ori [p][k]; 
        } 
    }
}

int Matrix::getOriMatrix(){
	 for (int p = 0; p < r ; p++) 
     { 
        for (int k = 0; k < c; k++) 
    	{ 
         printf("%i", mtx[p][k]); 
        }
         printf("\n");
        } 
    printf("\n");
    return 0;
}

int Matrix::getTMatrix(){
	for (int p = 0; p < c; p++) 
        { 
        	for (int k = 0; k < r; k++) 
    		{ 
    			mtxT[p][k] = mtx[k][p];
            printf("%i ", mtxT[p][k]); 
        }
         printf("\n");
        } 
    printf("\n");
	return 0;
}





