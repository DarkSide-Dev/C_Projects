#include <stdio.h>
#include <stdlib.h>

int main(){
    int x = 0;
    int j = 0;

    for(x = 1; x <= 10; x++){

        printf("\n\nTabuada do %d:", x);

        for(j = 1; j <= 10; j++){

            printf("\n%d x %d = %d", x, j, x*j);

        }

    }
}