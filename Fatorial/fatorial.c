#include <stdio.h>
#include <stdlib.h>

int main(){

    int num = 0;
    int result = 1;

    printf("Digite N: ");

    scanf("%d", &num);

    for(int x = num; x > 0; x--){
        result *= x;
    }
    
    
    printf("O fatorial de %d e' %d", num, result);

}