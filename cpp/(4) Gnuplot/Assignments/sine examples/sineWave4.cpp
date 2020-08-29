/* 
		Introduction to Programming, Week 4, Even 2019
		Generating sine wave data	
		AAI
 */

// Please add the library that we need.
#include <stdio.h>      // printf, scanf, fprintf, fopen, fclose, popen
#include <math.h>       // sin

#define PI 3.14159265

// Here we begin the programm
int main(){

  int param;
  double result;
  FILE* dataGenerate = fopen("sine1.csv","a");
  
  	 printf("Enter the degree: ");
  	 scanf("%d", &param); 
    result = sin (param*PI/180);
    printf ("The sine of %i degrees is %f.\n", param, result );
  	 fprintf(dataGenerate, "%i\t%f\n", param, result);
  
  fclose (dataGenerate);
  return 0;
}
