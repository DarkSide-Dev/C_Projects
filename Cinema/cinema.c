#include <stdlib.h>
#include <stdio.h>

int main(){

    int idade = 0;
    int v1 = 0;
    int v2 = 0;
    int v3 = 0;
    float total = 0;

    while(idade >= 0){

        printf("Idade: ");
        scanf("%d", &idade);

        if (idade < 3 && idade >= 0)
        {
            printf("Preco=0\n");
            v1++;
        }
        else if (idade >= 3 && idade <= 12)
        {
            printf("Preco=10\n");
            total += 10;
            v2++;
        }
        else if (idade > 12){
            printf("Preco=15\n");
            total += 15;
            v3++;
        }
        else{

        }

    }

    printf("Total arrecadado = %g\n", total);
    printf("N 0 a 2 = %d\n", v1);
    printf("N 3 a 12 = %d\n", v2);
    printf("N 13 ou mais = %d", v3);

}