#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    int num = 0;
    int result = 1;

    while(num != 999){

        printf("Digite um numero (ou 999 para sair): ");

        scanf("%d", &num);
        printf('%d ao quadrado e: %d', num, pow(num, 2));
        

    }

}