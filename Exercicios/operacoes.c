#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    int n1 = 0;
    int n2 = 0;
    float tot[4];
    char operation[5][15] = {"Soma", "sub", "mult", "div"};

    printf("Digite N1: ");
    scanf("%d", &n1);

    printf("Digite N2: ");
    scanf("%d", &n2);

    tot[0] = (n1 + n2);
    tot[1] = (n1 - n2);
    tot[2] = (n1 * n2);
    tot[3] = (n1 / n2);

    for(int x = 0; x <4; x++){
        printf("%s=%g ", operation[x], tot[x]);
    }

    return 0;

}