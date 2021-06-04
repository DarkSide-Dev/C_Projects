#include <stdio.h>
#include <stdlib.h>

int main(){

    float fah = 0;
    float cel = 0;

    printf("Graus F: ");
    scanf("%f", &fah);

    cel = ((fah - 32) * 5 / 9);

    printf("%g", cel);

}