#include <stdio.h>

int main(void){

    /*for (int i = 1; i < 7; i++){

        for(int k = 7; k > i; k--){
            printf(" ");
        }

        printf("*");


        for(int j = 1; j < 2*i-1; j++){
            printf("*");
        }
        

        /*for(int k = 0; k < i; k++){
        printf("*");
        }*/

        
    //Inverted pyramid
        for (int i = 0; i<7; i++){

        for(int j = 0; j < i; j++){
            printf(" ");
        }

        //printf("*");

        for(int j = 12; j > 2*i-1; j--){
            printf("*");
        }

        printf("\n");
    }
    
       


return 0;
}