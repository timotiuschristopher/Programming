#include<stdio.h>
#include "Polygon.h"
#include "Triangle.h"

int main (void){

   Triangle trgl; //create the objects
   
   trgl.setValues(3,5);
   
   printf("Area= %.2f\n", trgl.area());

return 0;
}

