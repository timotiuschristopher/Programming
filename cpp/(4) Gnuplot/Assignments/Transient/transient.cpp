#include <stdio.h>      
#include <math.h>      

int main(){
  
   int param;
   int n = 1;  
   double result;
 
   
   FILE* vtransient2 = fopen("sinet2.csv","a"); // fopen = file open
   FILE* gnuplotPipe = popen ("gnuplot -persistent", "w"); //popen = pipe open

   
  printf("vc(t) = -4 exp (-3t) cos (4t) + 22 exp (-3t) sin (4t)\n");
  
  for (int t = 0; t < 150/n; t++){    
      param = (t*n);
      result = -4.0*exp(-3.0*t/50.0) * cos(4.0*t/50.0) + 22.0*exp (-3.0*t/50.0) * sin (4.0*t/50.0); //divided by 20 to make graph smoother
      fprintf(vtransient2, "%i\t%f\n", param, result); 
     }
     
     
     fprintf(gnuplotPipe, "%s \n", "set title 'Second Order Transient'"); 
     fprintf(gnuplotPipe, "%s \n%s \n", "set ylabel 'Voltage'", "set xlabel 'time'"); 
     fprintf(gnuplotPipe, "%s \n", "plot 'sinet2.csv' u 1:2 w l title '-4 exp (-3t) cos(4t) + 22 exp (-3t) sin (4t)'"); 
     

  fclose (vtransient2);
  fclose (gnuplotPipe);
  
  return 0;
}
