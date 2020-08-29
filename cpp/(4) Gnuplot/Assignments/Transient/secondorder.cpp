#include <stdio.h>      
#include <math.h>      

int main(){
  
   int param;
   int n = 1;  
   double result;
 
   
   FILE* vtransient1 = fopen("sinet1.csv","a"); // fopen = file open
   FILE* gnuplotPipe = popen ("gnuplot -persistent", "w"); //popen = pipe open

   
  printf("v(t) = -4 exp (-t/2) + 4 exp (-t)\n");
  
  for (int t = 0; t < 15/n; t++){    
      param = (t*n);
      result = -4.0*exp(-t/2.0) + 4.0*exp (-t); 
      fprintf(vtransient1, "%i\t%f\n", param, result); 
     }
     
     
     fprintf(gnuplotPipe, "%s \n", "set title 'Second Order Transient'"); 
     fprintf(gnuplotPipe, "%s \n%s \n", "set ylabel 'Voltage'", "set xlabel 'time'"); 
     fprintf(gnuplotPipe, "%s \n", "plot 'sinet1.csv' u 1:2 w l title '-4 exp (-t/2) + 4 exp (-t)'"); 
     

  fclose (vtransient1);
  fclose (gnuplotPipe);
  
  return 0;
}
