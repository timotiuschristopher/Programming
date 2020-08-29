#include "Calculator.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.14159265

int Calculator::getCalculator(void)
	{
	int i, mode;
	char mode1[1]; char mode2[1]; char mode3[1]; char mode4[1];
	float digit1, digit2, digit3, digit4, digit5, digit6;

	printf("\nMode: Basic Calculator\n\n");
	printf("Please Choose a Mode:\n");
	printf("1. Addition and Substraction\n2. Multiplication and Division\n");
	printf("3. Trigonometry\n4. Logarithmic\n");

	printf("Mode: ");
	scanf("%i", &mode);
	printf("\n");

		if( mode == 1)
		{
		printf("Mode: Addition and Substraction\n\n");
		printf("Maximum Operands: 2 (Decimals are allowed)\n");
		printf("Input Format Example: '5.67 + 8.98'\n");
		scanf("%f %s %f", &digit1, &mode1, &digit2);
			if(strcmp(mode1,"+") ==0)
			{printf(" = %.5f", digit1 + digit2);}
			if(strcmp(mode1,"-") ==0)
			{printf(" = %.5f", digit1 - digit2);}		
		}

		if( mode == 2)
		{
		printf("Mode: Multiplication and Division\n\n");
		printf("Maximum Operands: 2 (Decimals are allowed)\n");
		printf("Input Format Example: '5.67 / 8.98'\n");
		scanf("%f %s %f", &digit3, &mode2, &digit4);
			if(strcmp(mode2,"*") ==0)
			{printf(" = %.5f", digit3 * digit4);}
			if(strcmp(mode2,"/") ==0)
			{printf(" = %.5f", digit3 / digit4);}
		}

		if( mode == 3)
		{
		printf("Mode: Trigonometry\n\n");
		printf("(Decimals are allowed)\n");
		printf("Input Command:\nCos:cos\t\t|Arc Cos:acos\nSin:sin\t\t|Arc Sin:asin\nTan:tan\t\t|Arc Tan:atan\n");
		printf("Input Format Example: 'sin (98)'\n");
		scanf("%s (%f)", &mode3, &digit5);
			if(strcmp(mode3,"cos") ==0)
			{printf(" = %.5f", cos(digit5*PI/180.00));}
			if(strcmp(mode3,"sin") ==0)
			{printf(" = %.5f", sin(digit5*PI/180.00));}
			if(strcmp(mode3,"tan") ==0)
			{printf(" = %.5f", tan(digit5*PI/180.00));}
			if(strcmp(mode3,"acos") ==0)
			{printf(" = %.5f", acos(digit5*PI/180.00));}
			if(strcmp(mode3,"asin") ==0)
			{printf(" = %.5f", asin(digit5*PI/180.00));}
			if(strcmp(mode3,"atan") ==0)
			{printf(" = %.5f", atan(digit5*PI/180.00));}
		}

		if( mode == 4)
		{
		printf("Mode: Logarithmic\n\n");
		printf("(Decimals are allowed)\n");
		printf("Input Format Example: 'log (5)'\n");
		scanf("%s (%f)", &mode4, &digit6);
			if(strcmp(mode4,"log") ==0)
			{printf(" = %.5f", log10 (digit6));}
		}

	return 0;
	}