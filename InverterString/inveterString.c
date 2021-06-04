#include <stdio.h>
#include <string.h>
#include <stdio.h>

int main(){
    char str1[10] = "algoritmos";

    int i = 0;
    int j = 0;
    int qtd = 0;

    for(i = 0; str1[i]; i++){

        qtd++;

    }

    printf("A quantidade de caracteres equivale a: %d\n\n", qtd-1);

    printf("Palavra algoritmos invertida: ");


    for(j = qtd-1; j >= 0; j--){
        
        printf("%c", str1[j]);

    }

    return 0;
}