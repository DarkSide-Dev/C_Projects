#include <stdio.h>
#include <stdlib.h>

int main(){

    int idade = 0;
    int dias = 0;
    int meses = 0;

    int total = 0;

    printf("Anos de idade: ");
    scanf("%d", &idade);

    printf("Meses: ");
    scanf("%d", &meses);

    printf("Dias: ");
    scanf("%d", &dias);

    total = ((idade * 365) + (meses * 30) + dias);

    printf("%d", total);

}