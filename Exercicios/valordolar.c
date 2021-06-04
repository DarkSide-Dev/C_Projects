#include <stdio.h>
#include <stdlib.h>

int main(){

    float valordolar = 0;
    float quantdolar = 0;
    float tot = 0;

    printf("Valor do dolar: ");
    scanf("%f", &valordolar);

    printf("Quantidade de dolares: ");
    scanf("%f", &quantdolar);

    tot = valordolar*quantdolar;

    printf("R$ %g", tot);
}