#include <stdio.h>

int main(void){

	for (int i = 0; i < 7; i++){

		for(int k = 7; k > i; k--){
			printf(" ");
		}

		printf("*");


		for(int j = 0; j < i; j++){
			printf("*");
		}
		

		for(int k = 0; k < i; k++){
		printf("*");
		}
		

		printf("\n");
	}


return 0;
}