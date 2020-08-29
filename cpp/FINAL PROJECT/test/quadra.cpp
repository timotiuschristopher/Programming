//quadratic formula
#include <stdio.h>
#include <math.h>

int main (int argc, char* argv []){

	float sq1, sq2;
	float xp, yp;
	float x, y;

	FILE* graph = fopen("parabola.csv","a");   		
	FILE* gnuplotPipe = popen ("gnuplot -persistent","w");

	if(argc !=4){		
		printf("Quadratic Formula Calculator\n\n");
		printf("General Equation:\n y = ax^2 + bx +c");								
		printf("Usage:<program> <a> <b> <c>\n");
		return -1;
	}

	float a = atof(argv[1]);
	float b = atof(argv[2]);
	float c = atof(argv[3]);

	printf("General Formula\n");
	printf("(-b%c%c(b^2 - 4ac))/(2a)\n\n", 241, 251);

	sq1 = (-b+sqrt(pow(b,2)-(4.0*a*c)))/(2.0*a);
	sq2 = (-b-sqrt(pow(b,2)-(4.0*a*c)))/(2.0*a);

	printf("X1 = %.2f\n", sq1);
	printf("X2 = %.2f\n", sq2);

	xp = -b/(2*a);
	yp = a*pow(xp,2)+b*xp+c;
	
	printf("Vertex of the parabola (%f,%f)", xp, yp);
	
	for (float i = -1000; i <= 1000; i++){
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