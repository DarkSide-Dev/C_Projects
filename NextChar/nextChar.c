#include <stdio.h>
#include <stdlib.h>

int main(){

    char letra;

    printf("Escreva uma letra: ");
    scanf("%c", &letra);

    printf("A proxima letra e: %c", letra+1);
}