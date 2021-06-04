#include <stdio.h>
#include <stdlib.h>

int main(){

    float number = 0;

    while(number != 999){

        printf("Escreva um numero: ");
        scanf("%f", &number);

        printf("%2f, %5f, %10f \n\n", number, number, number);

    }

}