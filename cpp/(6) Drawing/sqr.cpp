#include <stdio.h>

int main(void){

	for (int i = 0; i < 8; i++){
		printf("*");
		printf(" ");
	}

	printf("\n");

	for (int k = 0; k < 6; k++){
		printf("*");

		for(int j = 0; j < 13; j++){ //increment
			printf(" ");
		}

		printf("*\n");
	}

	for (int l = 0 ; l < 8; l++){
		printf("*");
		printf(" ");
	}

return 0;
}