/* 
		Introduction to Programming, Week 4, Even 2019
		Plotting sine wave using for and gnuplot	
		AAI
 */

// Please add the library that we need.
#include <stdio.h>      // printf, scanf, fprintf, fopen, fclose, popen
#include <math.h>       // sin

#define PI 3.14159265

// Here we begin the programm
int main(){
	// We need to declare all of the variables that is used.	
   int param, A, shift; // Integer variables with out pre-define value in a row
   int n = 1; // Sampling value | Integer variables with pre-define value 
   double result; // Double variables with out pre-define value 
   double x;
   double theta;
  
   // This part is to define the output filename and running the gnuplot 
   FILE* dataGenerate = fopen("sine6c.csv","a"); // Don't forget to change the filename for different amplitude and phase
   FILE* gnuplotPipe = popen ("gnuplot -persistent", "w");

	// Ok, after declaring and initializing the variables and filename
	// Now, we begin the programm.
	printf("The main equation is A sin(wt-theta)\n");
  	printf("Enter the amplitude: ");
  	scanf("%i", &A);
	printf("Enter the phase shift (theta): ");
  	scanf("%i", &shift);
  	
  	// Rather than always changing the angle one-by-one
  	// It is easier to use for - loop
  	// for (starting value; ending value; each iteration add 1)
	for (int i = 0; i < 360/n; i++){		
  	 	param = (i*n); // the changing angles 
  	 	x = param*PI/180; // the value for sin(x). It is also the omega value
    	theta = shift*PI/180; // the phase shift in the sin(x-theta)
    	result = A * sin (x-theta); // the main equation with amplification (A)
  	 	fprintf(dataGenerate, "%i\t%f\n", param, result); // Save the angle and result in the file
  	 }
  	 
  	 // Finally, we plot the generated data from the equation
  	 // The command is plot <filename> using <column1>:<column2> with lines
  	 // Don't forget to change the filename for different amplitude and phase
  	 fprintf(gnuplotPipe, "%s \n", "plot 'sine6c.csv' u 1:2 w l"); 
  
  // Don't forget to close the FILE!
  fclose (dataGenerate);
  fclose (gnuplotPipe);
  
  return 0;
}
