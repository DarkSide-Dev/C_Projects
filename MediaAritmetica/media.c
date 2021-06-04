#include <stdio.h>
#include <stdlib.h>

int main(){

    float nota1 = 0;
    float nota2 = 0;
    float nota3 = 0;

    float media = 0;

    printf("\nDigite a primeira nota: ");
    scanf("%f", &nota1);

    printf("\nDigite a segunda nota: ");
    scanf("%f", &nota2);

    printf("\nDigite a terceira nota: ");
    scanf("%f", &nota3);

    media = ((nota1 + nota2 + nota3)/3);

    if (media >= 9){

        printf("\n\n O aluno obteve o conceito A, dado a media %.1f", media);

    }else if(media >= 7.5 && media < 9){

        printf("\n\n O aluno obteve o conceito B, dado a media %.1f", media);

    }else if(media >= 6 && media < 7.5){

        printf("\n\n O aluno obteve o conceito C, dado a media %.1f", media);

    }else{

        printf("\n\n O aluno obteve o conceito D, dado a media %.1f", media);

    }
    
    return 0;

}