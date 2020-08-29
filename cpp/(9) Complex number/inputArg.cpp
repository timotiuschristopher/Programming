#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char* argv[]){
    if (argc != 3){
	printf("Usage: ./convertToPol <a> <b>\n");
	return -1;
    }
    int a = atoi(argv[1]);
    int b = atoi(argv[2]);
    
    printf("a = %d \t", a);
    printf("b = %d \n", b);
  
return 0;
}
