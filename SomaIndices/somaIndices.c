#include <stdio.h>
#include <stdlib.h>

int main(){

    int num[12];
    int i = 0;
    int index1 = 0;
    int index2 = 0;

    int result = 0;

    for(i = 0; i < 12; i++){

        printf("\nEscreva um numero: ");
        scanf("%d", &num[i]);

    }

    printf("\nDigite o primeiro indice: ");
    scanf("%d", &index1);

    printf("\n Digite o segundo indice: ");
    scanf("%d", &index1);

    result = num[index1-1] + num[index2-1];

    printf("\n O valor da soma e: %d", result);

}