#include <stdio.h>
#include <stdlib.h>

int main(void){

    int n1 = 0;
    int n2 = 0;
    int total = 0;

    printf_s("Digite o primeiro numero: ");
    scanf("%d", &n1);

    printf_s("Digite o segundo numero: ");
    scanf("%d", &n2);

    total = n1 + n2;

    printf_s("\n %d + %d = %d\n", n1, n2, total);

    return 0;

}