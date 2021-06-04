#include <stdio.h>
#include <stdlib.h>

int main(){

    int num[15];
    int i = 0;
    int count = 0;

    for(i = 0; i < 15; i++){

        printf("\nEscreva um numero: ");
        scanf("%d", &num[i]);

    }

    for(i = 0; i < 15; i++){

        if(num[i] % 2 == 0){

            count++;

        }

    }

    printf("Foram digitados %d numeros pares", count);

}