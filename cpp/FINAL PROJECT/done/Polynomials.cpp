#include <stdio.h>
#include <math.h>
#include "Polynomials.h"

int Polynomials::getPolynomials()
{
	float sq1, sq2;
	float xp, yp;
	float x, y;
	float a,b,c;

	FILE* graph = fopen("parabola.csv","a");   		
	FILE* gnuplotPipe = popen ("gnuplot -persistent","w");

	printf("\nMode: Polynomials\n\n");
	printf("Quadratic Formula Calculator\n\n");
	printf("General Equation:\n y = ax^2 + bx +c");

	printf("\nEnter the data (Decimals are allowed)\n");
	printf("a = ");
	scanf("%f", &a);
	printf("b = ");
	scanf("%f", &b);
	printf("c = ");
	scanf("%f", &c);

	printf("General Formula\n");
	printf("(-b%c%c(b^2 - 4ac))/(2a)\n\n", 241, 251);

	sq1 = (-b+sqrt(pow(b,2)-(4.0*a*c)))/(2.0*a);
	sq2 = (-b-sqrt(pow(b,2)-(4.0*a*c)))/(2.0*a);

	printf("X1 = %.2f\n", sq1);
	printf("X2 = %.2f\n", sq2);

	xp = -b/(2*a);
	yp = a*pow(xp,2)+b*xp+c;
	
	printf("Vertex of the parabola (%f,%f)", xp, yp);
	
	for (int i = -100; i <= 100; i++){
		y = a*pow(i,2)+b*i+c;
		x = i;
		fprintf(graph, "%f\t%f\n", x, y);
	}
	
	fprintf(gnuplotPipe, "%s \n", "set title 'Quadratic Graph'"); 
  	fprintf(gnuplotPipe, "%s \n%s \n", "set ylabel 'y'", "set xlabel 'x'"); 
  	fprintf(gnuplotPipe, "%s \n", "plot 'parabola.csv' u 1:2 w l title 'quadra'"); 

  	fclose(graph);
  	fclose(gnuplotPipe);
	
	return 0;
}