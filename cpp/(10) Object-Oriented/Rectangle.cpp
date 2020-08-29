#include "Rectangle.h"		//linkage
int width, height;			//states

void Rectangle::setValues(int x, int y){		//setValues = behaviour
	
	width = x;
	height = y;
	
}

int Rectangle::getArea(){						//getArea = behaviour
	
	return width*height;
}
