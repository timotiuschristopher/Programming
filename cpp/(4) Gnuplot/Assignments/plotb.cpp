#include <stdio.h>      
#include <math.h>      
#define PI 3.14159265

int main(){
	
   int param;
   int shift = 15; 
   int A = 4;
   int n = 1;  
   double result;
   double result1; 
   double wt;
   double theta;
  
   
   FILE* y1 = fopen("sineB1.csv","a");
   FILE* y2 = fopen("sineB2.csv","a");
   FILE* gnuplotPipe = popen ("gnuplot -persistent", "w");

	
	printf("The main equation is A sin(wt-theta)\n");
	printf("Y1 = sin(wt)\n");
  printf("Y2 = 4 cos(wt+15)\n");
  	
  	
	for (int i = 0; i < 360/n; i++){		
  	 	param = (i*n);
  	 	wt = param*PI/180;
    	theta = shift*PI/180; 
    	result = sin (wt); 
      result1 = A * cos (wt+theta);
  	 	fprintf(y1, "%i\t%f\n", param, result); 
      fprintf(y2, "%i\t%f\n", param, result1);
  	 }
  	 
  	 
  	 fprintf(gnuplotPipe, "%s \n", "set title 'Graph 2'"); 
  	 fprintf(gnuplotPipe, "%s \n%s \n", "set ylabel 'amplitude'", "set xlabel 'wt (degrees)'"); 
  	 fprintf(gnuplotPipe, "%s \n", "plot 'sineB1.csv' u 1:2 w l title 'sin(wt)', 'sineB2.csv' u 1:2 w l title 'cos(wt+15)'"); 
  	 

  fclose (y1);
  fclose (y2);
  fclose (gnuplotPipe);
  
  return 0;
}
