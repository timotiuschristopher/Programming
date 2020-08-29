#include <stdio.h>
#include <math.h>

int main ()
{
	char c[7];
	int key=4;
	char y[7];

	printf("Enter 6 characters: ");
	scanf("%6s", c);


	for(int i = 0; i < 6; i++){
	y[i] = (((c[i]-65) + key) % 26) + 65;
	printf("%c", y[i]);
	}

	printf("\n");

	return 0;
}