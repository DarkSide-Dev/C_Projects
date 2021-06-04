#include <stdlib.h>
#include <stdio.h>

int main(){

    float graus = 0;
    float conversao = 0;

    while (graus >= -459.67)
    {
        printf("Graus F: ");
        scanf("%f", &graus);

        if (graus >= -459.67)
        {
            conversao = ((graus - 32) *5/9);
            printf("%0.f\n", conversao);
        }
    }
    

}