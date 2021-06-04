#include <stdio.h>
#include <stdlib.h>

int main(){

    float media = 0;
    float alturas;
    int i = 0;

    do{
    
        printf("\n\nDigite a altura do %d jogador: ", i+1);
        scanf("%f", &alturas);

        media += alturas;

        i++;

    } while (i < 6);

    printf("\n\nA media de alturas no time de volei equivale a: %.2f metros", media/6);

}