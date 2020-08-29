//ECHELON PROGRAMM

#include <stdio.h>
#include <math.h>

int main(){

	int mat0[4][4];
	int mat1[4][4];
	int mat2[4][4];
	int mat3[4][4];
	int r, c, i, j, k, l, v;

	printf("Matrix Multiplier (Max Row & Column = 4)\n");
	printf("Enter rows of matrix : ");
    	scanf("%i", &r);
    printf("Enter columns of matrix : ");
    	scanf("%i", &c);
   
    printf("Enter matrix A (%ix%i): \n", r, c);
    for (i = 0; i < r; i++){
        for (j = 0; j < c; j++){
        	printf("Element [%i][%i]: ", i, j);
            scanf("%i", &mat0[i][j]);
        }
    }

    printf("Entered Matrix:\n");
    for (int i = 0; i < r; i++){ 
        for (int j = 0; j < c; j++){
            printf(" %i ", mat0[i][j]);
    }
     	printf("\n");
	}

    

//computing Echelon
	
    for (int i = 1; i < r; i++){
    	for (int j = 0; j < c; j++){
		   	mat1[0][j]= mat0[0][j];
			mat1[i][j]=(mat0[i][j]*mat0[0][0])-(mat0[0][j]*mat0[i][0]);
		}
	}


	for (int i = 2; i < r; i++){
    	for (int j = 0; j < c; j++){
		   	mat2[0][j]= mat1[0][j];
		   	mat2[1][j]= mat1[1][j];
			mat2[i][j]=(mat1[i][j]*mat1[1][1])-(mat1[1][j]*mat1[i][1]);
		}
	}

	
	for (int i = 3; i < r; i++){
    	for (int j = 0; j < c; j++){
		   	mat3[0][j]= mat2[0][j];
		   	mat3[1][j]= mat2[1][j];
		   	mat3[2][j]= mat2[2][j];
			mat3[i][j]=(mat2[i][j]*mat2[2][2])-(mat2[2][j]*mat2[i][2]);
		}
	}

//printing echelon
	printf("\nEchelon Matrix:\n"); 


	for (int i = 0; i < r; i++){ 
        for (int j = 0; j < c; j++){
        printf(" %i ", mat1[i][j]);
    	}

     	printf("\n");
	}

	printf("\n\n");

	if(r>=3){
	for (int i = 0; i < r; i++){ 
        for (int j = 0; j < c; j++){
            printf(" %i ", mat2[i][j]);
    	}
     	printf("\n");
	}

	printf("\n\n");

	if(r=4){
	for (int i = 0; i < r; i++){ 
        for (int j = 0; j < c; j++){
        	printf(" %i ", mat3[i][j]);
    	}
    	printf("\n");
	}
}
}
return 0;
}