#include <stdio.h>
#include <stdlib.h>

int main(){

    float custo = 0;
    float valorfinal = 0;

    printf("Custo de fabrica: ");
    scanf("%f", &custo);

    valorfinal = ((custo + (custo * 0.28) + (custo * 0.45)));

    printf("%g", valorfinal);

}