#include<stdio.h>
#include "Matrix.h"

int main (void){

   Matrix mat; //create an object
   int k;
   int m, n;
   
   printf("Row = ");
   scanf("%i", &m);
   printf("Col = ");
   scanf("%i", &n);

   mat.setMatSize(m,n);
   
   for(int i = 0; i < mat.getRow(); i++){
      for(int j = 0; j < mat.getCol(); j++){
	printf("A%i%i = ", i+1, j+1);
   	scanf("%i", &k);
	mat.setMatValues(i, j, k);
      }
   }

   
   mat.displayMat();
   mat.getTranspose();

return 0;
}

