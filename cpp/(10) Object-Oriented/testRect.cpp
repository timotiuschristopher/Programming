#include <stdio.h>
#include "Rectangle.h"

int main (){
	
	Rectangle rect; //create an obj
		//Rectangle = name of the class
	 	//rect = name object

	rect.setValues (3,5); //constructor
		//rect = obj
		//setValues = behaviour

	printf("Area= %d\n",rect.getArea());    

	return 0;      

}