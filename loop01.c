#include <stdio.h>

int main (void){

    int n;

    printf("ola amigo!~\n");
    printf("n = ");
    scanf("%i", &n);

    printf("here's yo %i n\n", n);

    for (int z = 0; z < n; z++){
        
        for (int x = z; x < n; x++)
            printf(" ");
        
        for (int c = 0; c <= z; c++)
            printf("*");
        
        for (int v = 1; v <= z; v++)
            printf("*");

        printf("\n");
    }

}