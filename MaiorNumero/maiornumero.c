#include <stdio.h>
#include <stdlib.h>

int main(){

    int n1 = 0;
    int n2 = 0;
    int n3 = 0;

    int maiorn = 0;

    printf("Digite o 1 valor: ");
    scanf("%d", &n1);

    printf("Digite o 2 valor: ");
    scanf("%d", &n2);

    printf("Digite o 3 valor: ");
    scanf("%d", &n3);

    if(n1 >= n2 && n1 >= n3){
        maiorn = n1;
    }
    else if(n2 >= n1 && n2 >= n3){
        maiorn = n2;
    }
    else{
        maiorn = n3;
    }

    printf("O maior valor e: %d", maiorn);
    return 0;

}