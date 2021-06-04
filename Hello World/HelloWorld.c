#include <stdlib.h>
#include <stdio.h>

void main(void){

    int v1 = 1, v2 = 1, v3 = 0;

    for(int i = 0; i < 3; i++){
        v3 = v1 + v2;
        v1 = v2;
        v2 = v3;
    }

    printf("%d", v3);

}