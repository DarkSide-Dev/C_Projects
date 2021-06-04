#include <stdlib.h>
#include <stdio.h>

int main(){

    float altura = 0;
    int numero = 0;
    float peso = 0;

    float vAltura = 0;
    float vPeso = 0;

    for(int x = 1; x <= 5; x++){

        printf("Altura da pessoa %d: ", x);
        scanf("%f", &altura);

        printf("Peso da pessoa %d:\n", x);
        scanf("%f", &peso);

        if (peso > vPeso){
            
            vPeso = peso;
            vAltura = altura;
            numero = x;

        }
        
    }

    printf("A pessoa mais pesada e' a de numero %d, com altura %.1f", numero, vAltura);

}