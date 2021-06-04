#include <stdlib.h>
#include <stdio.h>

int main(){

    int num = 1;

    for(num = 1; num <= 9; num++){

        printf("\nO inverso do numero %d equivale a %.0d (0 casas decimais)", num, num * 1);
        printf("\nO inverso do numero %d equivale a %.2d (2 casas decimais)", num, num * 1);
        printf("\nO inverso do numero %d equivale a %.4d (4 casas decimais)", num, num * 1);
        printf("\nO inverso do numero %d equivale a %.7d (7 casas decimais)\n\n", num, num * 1);

    }

}