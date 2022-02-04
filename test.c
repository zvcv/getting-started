#include <stdio.h>

int main (void){

    for (int z = 0; z < 3; z++){

        for (int x = z; x < 3; x++)
            printf("x = %i ", x);

        printf("z = %i ", z);
    }
    
}