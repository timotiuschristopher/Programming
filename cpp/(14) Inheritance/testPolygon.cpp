#include <stdio.h>
#include "Trapezium.h"
#include "Rhombus.h"
#include "Rectangle.h"
#include "Triangle.h"
#include "Polygon.h"

int a,b,c,d,e,f;

int main () {

	printf("Enter the value:\n\n");
	printf("For rectangle & triangle\n");
	printf("Width:");
	scanf("%i",&a);
	printf("Height:");
	scanf("%i",&b);

	printf("\nFor Rhombus\n");
	printf("Diagonal 1:");
	scanf("%i",&c);
	printf("Diagonal 2:");
	scanf("%i",&d);

	printf("\nFor Trapezium\n");
	printf("Lower base:");
	scanf("%i",&e);
	printf("Upper base:");
	scanf("%i",&f);
	printf("Height:%i", b);


	printf("\n\n");

	Rectangle rect;
	Triangle trgl;
	Trapezium trpz;
	Rhombus rhbs;
	trgl.setValues(a,b,c,d,e,f);
	rect.setValues(a,b,c,d,e,f);
	trpz.setValues(a,b,c,d,e,f);
	rhbs.setValues(a,b,c,d,e,f);
	printf("Area rect= %.2f\n", rect.Area());
	printf("Area trgl= %.2f\n", trgl.Area());
	printf("Area trpz= %.2f\n", trpz.Area());
	printf("Area rhbs= %.2f\n", rhbs.Area());
	return 0;
}