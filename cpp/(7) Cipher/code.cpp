#include <stdio.h>

	

int main(void){

	char c = 'Z';
	char y = ((c - 65) + 16) + 65; 	//mod is % in c++
//			 char - 	+shift/key %

	/*printf("Orginal: %c %d\n", c, c);
	printf("Encrypted: %c %d\n", y, y);*/

	/*printf("first is %c %d \n", c, c);
	printf("(c-65) = %c %d \n", c-65, c-65);
	printf("(shifted by 1) = %c %d \n", (c-65)+1, (c-65)+1);			//to shift or key
	printf("(Mod by 26) = %c %d \n", ((c-65)+1)%25, ((c-65)+1)%25);		//mod 26
	printf("(add by 65) = %c %d \n", ((c-65+1)%25)+65, ((c-65+1)%25)+65); */	//to make go back to char
	printf("Original: %c %d\n", c, c);
	printf("Encrypted: %c %d\n", y, y);

return 0;
}