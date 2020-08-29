#include "Complex.h"
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

#define PI 3.14159265

int Complex::getComplex()
{
	int chs, compute;
	float A, B;
	float theta1, theta2;
	float a, b, c, d;
	float x,y,r;
	float real1, real2, real3, real4;
	float img1, img2, img3, img4;
	char method[10];
	char form[5];

	printf("\nMode: Complex\n\n");
	printf("Rectangular ==> a+jb\nPolar ==> r<(theta)\n");
	printf("(Decimals are allowed)\n");
	printf("Please Choose a Mode: \n");
	printf("1.Conversion\n2.Computation");
	printf("\nMode: ");
	scanf("%i", &chs);

		if(chs == 1)
		{
		printf("Input Command:\nRectangular To Polar: pol\nPolar To Rectangular: rec\n");
		printf("Enter the Desired Mode:");
		scanf("%s", &form);

		printf("Input the a or r:");
		scanf("%f", &x);
		printf("Input the b or theta:");
		scanf("%f", &y);

			if(strcmp(form,"pol") ==0)
			{						//==0 equal !=0 not equal
			r = sqrt(pow(x,2)+pow(y,2)); 
			theta1 = atan(y/x)*180/PI;

			printf("Polar Equation\tr<(theta)\n");
			printf("%.2f<(%.2f)", r, theta1);
			}

			else if(strcmp(form, "rec") ==0)
			{
			A = x*cos(y/180*PI);
			B = x*sin(y/180*PI);

			printf("Rectangular Equation\n a+j(b)\n");
			printf("%.2f+j(%.2f)", A, B);
			}
		}

		else if(chs == 2){
		printf("1. Addition & Substraction\n2. Muliplication & Division\n");
		printf("Enter the computation method:\n");
		scanf("%i", &compute);

			if(compute == 1)
			{					
			printf("(a+jb) +|- (c+jb)\n");
			printf("Enter the value (a,b,c,d):\n");
			printf("a = ");
			scanf("%f", &a);
			printf("b = ");
			scanf("%f", &b);
			printf("c = ");
			scanf("%f", &c);
			printf("d = ");
			scanf("%f", &d);

			printf("\n");
			printf("Input Command:\nAddition: add\nSubstraction: sub\n");
			printf("Enter the Desired Mode: ");
			scanf("%s", &method);

				if(strcmp(method,"add") ==0)
				{						//addition
				real1 = a+c;
				img1 = b+d;

				printf("Result = %.2f+j(%.2f)", real1, img1);
				}

				else if(strcmp(method,"sub") ==0)
				{				//subtraction
				real2 = a-c;
				img2 = b-d;

				printf("Result = %.2f+j(%.2f)", real2, img2);
				}
			}
		
			else if(compute == 2)
			{
			printf("(A<theta1) *|/ (B<theta2)\n");
			printf("Enter the value (A,theta1,B,theta2):\n");
			scanf("%f", &A);
			scanf("%f", &theta1);
			scanf("%f", &B);
			scanf("%f", &theta2);

			printf("\n");
			printf("Input Command:\nMultiplication: mult\nDivision: div\n");
			printf("Enter the Desired Mode: ");
			scanf("%s", &method);

				if(strcmp(method,"mult") ==0)
				{			//Multiplication
				real3 = A*B;
				img3 = theta1+theta2;

				printf("Result = %.2f<(%.2f)", real3, img3);
				}
		
				else if(strcmp(method,"div") ==0)
				{			//Division
				real4 = A/B;
				img4 = theta1-theta2;
				printf("Result = %.2f<(%.2f)", real4, img4);
				}
			}
		
		}

	else
	{
	printf("ERROR\n");
	return -1;
	}
return 0;
}