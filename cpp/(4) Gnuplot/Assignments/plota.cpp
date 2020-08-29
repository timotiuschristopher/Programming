// Y=2.sin(x−90)

#include <stdio.h>      
#include <math.h>      
#define PI 3.14159265

int main(){
	
   int param;
   int shift = 90; 
   int A = 2;
   int n = 1;  
   double result; 
   double x;
   double theta;
  
   FILE* dataGenerate = fopen("sineA.csv","a");
   FILE* gnuplotPipe = popen ("gnuplot -persistent", "w");
	
	printf("The main equation is A sin(wt-theta)\n");
	printf("Y = 2 sin(x-90)\n");
  	
  	
	for (int i = 0; i < 360/n; i++){		
  	 	param = (i*n);
  	 	x = param*PI/180;
    	theta = shift*PI/180; 
    	result = A * sin (x-theta); 
  	 	fprintf(dataGenerate, "%i\t%f\n", param, result); 
  	 }
  	 
  	 fprintf(gnuplotPipe, "%s \n", "set title 'Graph 1'"); 
  	 fprintf(gnuplotPipe, "%s \n%s \n", "set ylabel 'amplitude'", "set xlabel 'wt (degrees)'"); 
  	 fprintf(gnuplotPipe, "%s \n", "plot 'sineA.csv' u 1:2 w l title 'sin(x-90)'"); 
  	 
  fclose (dataGenerate);
  fclose (gnuplotPipe);
  
  return 0;
}
