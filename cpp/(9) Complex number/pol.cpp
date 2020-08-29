#include <stdio.h>		//printf/scanf
#include <math.h>		//atan
#include <stdlib.h>		//atoi
#include <string.h>		//to use strcmp

#define PI 3.14159265

int main(int argc, char* argv []){

	float r, theta, a, b;								//x=1 actuall 1, x==1 equal to 1

	if(argc !=4){										//x!=1 not equal to 1
		printf("Usage:<program> <CODE> <x> <y>\n\nCONVERTER CODE\n");
		printf("Rec To Pol: pol\nPol To Rec: rec");
		return -1;
	}

	float x = atof(argv[2]);
	float y = atof(argv[3]);


	if(strcmp(argv[1],"pol") ==0){						//==0 equal !=0 not equal

		//Rect to polar equation
		//r<theta
		r = sqrt(pow(x,2)+pow(y,2)); 
		theta = atan(y/x)*180/PI;

		printf("Polar Equation\n r<(theta)\n");
		printf("%.2f<(%.2f)", r, theta);
	}

	else if(strcmp(argv[1],"rec") ==0){

		//Polar to Rect equation
		//a+jb
		a = x*cos(y/180*PI);
		b = x*sin(y/180*PI);

		printf("Rectangular Equation\n a+j(b)\n");
		printf("%.2f+j(%.2f)", a, b);
	}

	else {
		printf("CONVERTER ERROR\nPlease re-enter the program\n");

	}


return 0;
}