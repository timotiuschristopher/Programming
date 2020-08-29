#include <stdio.h>

int main ()
{
    int A [2][3] = {{1, 2, 3}, {4, 5, 6}};

    printf("Entered Matrix : \n ");
    for (int i = 0; i < 2; i++)
    { 
        for (int j = 0; j < 3; j++)
            printf("%i", A[i][j]);
            printf("\n ");
    }

    printf("Transpose of Matrix : \n ");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
            printf("%i", A[j][i]);
            printf("\n ");
    }
    
    return 0;
}