#include <stdio.h>
#include <cstdlib>
#include <iostream>
using namespace std;

int *x;
int *y;

int main (){
	x=new int;

	*x = 42;
	cout<<"Address x = "<< x << endl;
	cout<<"value x = "<< *x << endl;

	y=x;
	*y=13;
	cout<<"Address y = "<< y << endl;
	cout<<"value y = "<< *y << endl;
}






/*int main (){
	
	x=new int;

	*x = 42;

		printf("The address of x is: %d\n", x);
		printf("The value of x pointer: %i\n", *x);

	y=x;
	*y = 13;
		printf("The address of y is: %d\n", y);
		printf("The value of y pointer is: %i\n", *y);

}*/