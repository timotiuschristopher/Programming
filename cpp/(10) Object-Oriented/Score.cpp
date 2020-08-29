#include "Score.h"
#include <stdio.h>
int score;


void Score::setScore(int x){		//setScore = behaviour (defining)
	
	score = x;
	
}

int Score::getGrades(){						//getGrades = behaviour (processing)
	
	if(score >= 90){
		printf("Your Grade is A\n");
	}

	else if(score >= 75){
		printf("Your Grade is B\n");
	}

	else if(score >= 60){
		printf("Your Grade is C\n");
	}

	else if(score >= 50){
		printf("Your Grade is D\n");
	}

	else{
		printf("Your Grade is F\n");
	}

	return 0;

}
