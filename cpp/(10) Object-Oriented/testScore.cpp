#include <stdio.h>
#include "Score.h"

int main (){
	float scr, scr2;

	printf("Enter your Score: ");
	scanf("%f", &scr);

	Score mark1, mark2; 				//create an obj
		
	mark1.setScore (scr); 				//constructor
	printf("", mark1.getGrades());

	printf("Enter your Score2: ");
	scanf("%f", &scr2);

	mark2.setScore(scr2);
	printf("", mark2.getGrades());

	return 0;      

}