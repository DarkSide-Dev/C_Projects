#include <stdio.h>
#include <stdlib.h>

int main(){

    float nota1 = 0;
    float nota2 = 0;
    float media = 0;

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    media = (nota1 + nota2)/2;

    printf("Media=%g", media);

    return 0;

}