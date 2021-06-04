#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    int n1 = 0;
    int n2 = 0;
    float tot[4];
    char operation[5][15] = {"Soma", "Subtracao", "Multiplicacao", "Divisao"};

    printf_s("Digite o primeiro numero: ");
    scanf("%d", &n1);

    printf_s("Digite o segundo numero: ");
    scanf("%d", &n2);

    tot[0] = (n1 + n2);
    tot[1] = (n1 - n2);
    tot[2] = (n1 * n2);
    tot[3] = (n1 / n2);

    for(int x = 0; x <4; x++){
        printf("\n%s: %.1f", operation[x], tot[x]);
    }

    return 0;

}