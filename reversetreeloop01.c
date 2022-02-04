#include <stdio.h>

int main (void){

    int n;

    printf("n = ");
    scanf("%i", &n);

    for (int z = 0; z < n; z++){

        for (int x = 0; x < z; x++){
            printf(" ");
        }

        for (int c = z; c < n; c++){
            printf("*");
        }

        for (int v = z; v < n-1; v++){
            printf("*");
        }

        printf("\n");
    }
}