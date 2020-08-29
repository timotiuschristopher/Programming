#include <stdio.h>

int main (){
	int R[6] = {353, 520, 690, 859, 1025, 1195};
	int RRint [6];
	float t;
	float HR[5];
	float sumHR;
	float avgHR;

/*		RRint[0] = R[1] - R[0];
		printf("R-R Interval = %d \n", RRint[0]);

		t = RRint [0] / 128.0; 			//.0 because MUST BE FLOAT
		printf("t = %.2f \n", t);

		HR=60/t;
		printf("HR = %.2f bpm", HR);
*/
	//Looping 

	for(int i = 0; i < 5; i++){
		RRint[i] = R[i+1] - R[i];
		printf("R-R Interval = %d \n", RRint[i]);

		t = RRint [i] / 128.0; 			
		printf("t = %.2f \n", t);

		HR[i]=60/t;	
		printf("HR = %.2f bpm \n", HR[i]);

	}
		
	//avg HR => HR += (60/t); [Advance Coding] its mean summing the HR value

	for(int j = 0; j < 5; j++){		//Summing the HR values
		sumHR = sumHR + HR[j];
	//		  HR0+HR2 + HR[2]
	}

	avgHR = sumHR / 5; //average value of the HR
	printf("Average HR = %.2f bpm \n", avgHR);

return 0;

}