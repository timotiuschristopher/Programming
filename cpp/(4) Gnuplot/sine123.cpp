#include <stdio.h>
#include <math.h>

#define PI 3.14159265
int main(){

	int param;
	double result;
	FILE* dataGenerate = fopen("sinegen1.csv","a");   		//w=write|a=append
	FILE* gnuplotPipe = popen ("gnuplot -persistent","w");	//popen = ?

	printf("insert degrees: ");
	scanf("%d", &param);	
	result = sin (param*PI/180);
	printf ("The sine of %i degrees is %f.\n", param, result);
	fprintf(dataGenerate,"%i\t%f\n", param, result);
	fprintf(gnuplotPipe, "%s \n", "plot 'sinegen1.csv' u 1:2 w l");

fclose(dataGenerate);
fclose(gnuplotPipe);
return 0;
}