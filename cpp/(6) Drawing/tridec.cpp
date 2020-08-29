#include <stdio.h>

int main(void){
	for (int i = 0; i<7; i++){
		for(int j = 7; j > i; j--){
			printf("*");
		}
		printf("\n");
	}

return 0;
}