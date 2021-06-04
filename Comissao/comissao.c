#include <stdio.h>
#include <stdlib.h>

int main(){

    float salario = 0;
    float valorvendas = 0;

    float total = 0;

    printf("Salario fixo: ");
    scanf("%f", &salario);

    printf("Valor das vendas: ");
    scanf("%f", &valorvendas);

    if (valorvendas > 1500)
    {
        total = 1500 * 0.03;
        total += ((valorvendas - 1500) * 0.05);
    }
    else{
        total = valorvendas * 0.03;
    }
    
    total += salario;

    printf("Salario total = %g", total);
    return 0;

}