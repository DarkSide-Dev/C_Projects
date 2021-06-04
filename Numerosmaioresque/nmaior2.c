#include <stdio.h>
#include <stdlib.h>

int main(){

    int quant = 50;
    int numero = 0;
    int i = 0;
    int numero_maior = 0;
    int numero_menor = 0;

    do{ 

        printf("\n\n%d - Digite um numero: ", i+1);
        scanf("%d", &numero);

        if (i == 0){
            numero_maior = numero;
            numero_menor = numero;
        }
        

        if (numero > numero_maior){
            numero_maior = numero;
        }

        if (numero < numero_menor){
            numero_menor = numero;
        }

        i++;
        

    } while (i < quant);
    
    printf("\n\nNumero maior: %d\nNumero menor: %d", numero_maior, numero_menor);

}