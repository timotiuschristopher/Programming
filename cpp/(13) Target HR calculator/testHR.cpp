#include <stdio.h>
#include "HR.h"

int main (){
	int umur;
	char first [15], last [15];
				//create an obj

	printf("Enter your First Name: ");
	scanf("%14s", first);
	printf("Enter your Last Name: ");
	scanf("%14s", last);
	printf("Enter your Age: ");
	scanf("%d", &umur);
	
	HR age1;
	age1.setValueAge (umur); 				//constructor
	age1.setValueName(first, last);
	printf("", age1.getValueMaxHR());
	printf("", age1.getValueTargetHR());

	return 0;      

}