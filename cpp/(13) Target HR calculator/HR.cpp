#include "HR.h"
#include <stdio.h>

int age, max;
int target1, target2;
char a[15], b[15];

void HR::setValueAge(int x){				
	
	 age = x;
}

void HR::setValueName(char first[15], char last[15]){
	printf("Patient: %s %s\n", first, last);
}

int HR::getValueMaxHR(){						
	max = 220-age;
	printf("Your Max Heart Rate: %i\n", max);
	return 0;
}

int HR::getValueTargetHR(){
	target1 = 0.5*max;
	target2 = 0.85*max;

	printf("Your Target Heart Rate: %i - %i\n", target1, target2);

	return 0;
}





