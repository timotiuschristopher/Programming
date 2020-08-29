#include <stdio.h>
#include "Mode.h"
#include "Matrices.h"
#include "Polynomials.h"
#include "Complex.h"
#include "Calculator.h"

int mode;
Complex com;
Matrices mat;
Polynomials pol;
Calculator cal;

void Mode::setMode(int m)
	{ mode = m; }

int Mode::getMode(void)
	{	
	if( mode == 1 )
		{
		printf(" ", mat.getMatricesMode());
		}

	if( mode == 2 )
		{
		printf("Mode: Polynomials\n");
		printf(" ", pol.getPolynomials());
		}

	if( mode == 3 )
		{
		printf(" ", com.getComplex());
		}

	if( mode == 4 )
		{
		printf(" ", cal.getCalculator());
		}

	return 0;
	}