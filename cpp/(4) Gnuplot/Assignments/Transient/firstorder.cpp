#include <stdio.h>      
#include <math.h>      

int main(){
  
   int param;
   int n = 1;  
   double result;
 
   
   FILE* vtransient = fopen("sinet.csv","a"); // fopen = file open
   FILE* gnuplotPipe = popen ("gnuplot -persistent", "w"); //popen = pipe open

   
  printf("v(t) = 4 exp (-5 * t)\n");
  
  for (int t = 0; t < 100/n; t++){    
      param = (t*n);
      result = 4.0*exp(-5.0 * t/100.0); 
      fprintf(vtransient, "%i\t%f\n", param, result); 
     }
     
     
     fprintf(gnuplotPipe, "%s \n", "set title 'First Order Transient'"); 
     fprintf(gnuplotPipe, "%s \n%s \n", "set ylabel 'Voltage'", "set xlabel 'time'"); 
     fprintf(gnuplotPipe, "%s \n", "plot 'sinet.csv' u 1:2 w l title '4 exp (-5 * t)'"); 
     

  fclose (vtransient);
  fclose (gnuplotPipe);
  
  return 0;
}
