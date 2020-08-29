#include <stdio.h>
#include <math.h>

int main (void){
	 char c[7];
	 char a[7];
	 char y[7];
	 

	 printf("CODE: ");
	 scanf("%6s",c);

	 for(int key=1; key < 26; key++){
	 	for(int i=0; i<6; i++){

	 		if((c[i]-key)<65){
	 		y[i]= 26 - (key - (c[i] - 65)) + 65;	 		
	 		}

	 		else if((c[i]-key)>=65){
	 		y[i]=(((c[i]-65)-key)%26)+65;
	 		}
	 	}

	 	for(int i=0; i < 6; i++){
	 		printf("%c", y[i]);
	 	}
	 	
	 	printf("\n");
	}	
	 
return 0;
}


