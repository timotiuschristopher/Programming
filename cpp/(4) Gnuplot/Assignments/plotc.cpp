#include <stdio.h>      
#include <math.h>      
#define PI 3.14159265

int main(){
	
   int param;
   int vpeak;
   int n = 1;  
   double result1;
   double result2;
   double result3; 
   double theta;
  
   
   FILE* v1 = fopen("sineC1.csv","a"); // fopen = file open
   FILE* v2 = fopen("sineC2.csv","a");
   FILE* v3 = fopen("sineC3.csv","a");
   FILE* gnuplotPipe = popen ("gnuplot -persistent", "w"); //popen = pipe open

	
  printf("The main equation is A sin(wt-theta)\n");
    printf("Enter the Vpeak: ");
    scanf("%i", &vpeak);
	printf("v1 = %i sin(theta)\n", vpeak);
  printf("v2 = %i sin(theta-(2*PI)/3)\n", vpeak);
  printf("v3 = %i sin(theta-(4*PI)/3)\n", vpeak);

  
  	
	for (int i = 0; i < 360/n; i++){		
  	 	param = (i*n);
  	 	theta = param*PI/180;
    	result1 = vpeak*sin(theta); 
      result2 = vpeak*sin(theta-(2.0/3.0)*PI); // <float>/<float> = <float>
      result3 = vpeak*sin(theta-(4.0/3.0)*PI); // if <int>/<int> = <int> (will be no decimal which is error)
  	 	fprintf(v1, "%i\t%f\n", param, result1); 
      fprintf(v2, "%i\t%f\n", param, result2);
      fprintf(v3, "%i\t%f\n", param, result3);
  	 }
  	 
  	 
  	 fprintf(gnuplotPipe, "%s \n", "set title 'Graph 3'"); 
  	 fprintf(gnuplotPipe, "%s \n%s \n", "set ylabel 'Voltage'", "set xlabel 'Phase Shift (degrees)'"); 
  	 fprintf(gnuplotPipe, "%s \n", "plot 'sineC1.csv' u 1:2 w l title 'v1', 'sineC2.csv' u 1:2 w l title 'v2', 'sineC3.csv' u 1:2 w l title 'v3'"); 
  	 

  fclose (v1);
  fclose (v2);
  fclose (v3);
  fclose (gnuplotPipe);
  
  return 0;
}
