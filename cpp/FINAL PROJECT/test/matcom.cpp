#include <stdio.h>
#include <math.h>
#include <string.h>

int main (){

	int mat1[4][4];
	int mat2[4][4];
	int result[4][4];
	int r,c;
	char method[5];


	printf("Matrix Multiplier (Max Row & Column = 4)\n");
	printf("Enter rows of matrix : ");
    	scanf("%i", &r);
    printf("Enter columns of matrix : ");
    	scanf("%i", &c);

    if(r > 4 or c >4){
    	printf("ERROR");
    	return -1;
    }

    printf("Enter matrix A (%ix%i): \n", r, c);
    for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j++){
        	printf("Element [%i][%i]: ", i, j);
            scanf("%i", &mat1[i][j]);
        }
    }

    printf("Enter matrix B (%ix%i): \n", r, c);
    for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j++){
        	printf("Element [%i][%i]: ", i, j);
            scanf("%i", &mat2[i][j]);
        }
    }

    printf("add or sub?");
	scanf("%s", &method);
	if(strcmp(method,"add") ==0){
		for(int i = 0; i < r; i++){
			for(int j =0; j<c; j++){
				result[i][j]=mat1[i][j]+mat2[i][j];
			}
		}
	}
	
	else if(strcmp(method,"sub") ==0){
		for(int i = 0; i < r; i++){
			for(int j =0; j<c; j++){
				result[i][j]=mat1[i][j]-mat2[i][j];
			}
		}
	}

	for (int i = 0; i < r; i++){ 
        for (int j = 0; j < c; j++){
        	printf(" %i ", result[i][j]);
    	}
    	printf("\n");
	}

	return 0;
}