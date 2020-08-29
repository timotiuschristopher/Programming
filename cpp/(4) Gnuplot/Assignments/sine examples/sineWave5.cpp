/* 
		Introduction to Programming, Week 4, Even 2019
		Plotting sine wave using gnuplot	
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
  FILE* gnuplotPipe = popen ("gnuplot -persistent", "w");
		
  	 printf("Enter the degree: ");
  	 scanf("%d", &param); 
    result = sin (param*PI/180);
    printf ("The sine of %i degrees is %f.\n", param, result );
  	 fprintf(dataGenerate, "%i\t%f\n", param, result);
  	 fprintf(gnuplotPipe, "%s \n", "plot 'sine1.csv' u 1:2 w l");
  fclose (dataGenerate);
  fclose (gnuplotPipe);
  return 0;
}
