#include <stdio.h>
#include <stdlib.h>

int main(){

    int quant = 0;
    int numero = 0;
    int i = 0;
    int numeros_maiores = 0;

    printf("\n\nDigite a quantidade: ");
    scanf("%d", &quant);

    do{ 

        printf("\n\n%d - Digite um numero: ", i+1);
        scanf("%d", &numero);

        if (numero > 8){
            numeros_maiores++;
        }

        i++;
        

    } while (i < quant);
    
    printf("\n\n%d numeros digitados sao maiores que 8", numeros_maiores);

}