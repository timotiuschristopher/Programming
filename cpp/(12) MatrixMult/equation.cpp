#include <stdio.h>

int main(void){

        int numRowA = 2;
        int numColA = 3; // ColA = RowB
        int numRowB = numColA;
        int numColB = 2;
        
        int matricsC[numRowA][numColB];
        
        // Matrix multiplication Equation
        for (int i = 1; i < numRowA + 1; i++) { // aRow
            for (int j = 1; j < numColB + 1; j++) { // bColumn
            	printf("C%i%i = ", i, j);
	        for (int k = 1; k < numColA + 1; k++) { // aColumn
                    printf("A%i%i.B%i%i + ", i, k, k, j);
                }
	     printf("\n");
            } 
       } 

return 0;
}
