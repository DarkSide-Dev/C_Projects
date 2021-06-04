#include <stdlib.h>
#include <stdio.h>

int main(){

    int idade = 0;
    int sexo = 0;
    float salario = 0;

    int menorIdade = 0;
    int maiorIdade = 0;
    int quantMulheres = 0;
    int contador = 0;
    float media = 0;

     while (idade >= 0){
        
        printf("Idade: ");
        scanf("%d", &idade);

        if (idade < 0)
        {
            break;
        }

        printf("Sexo (1=F 2=M): ");
        scanf("%d", &sexo);

        printf("Salario:\n");
        scanf("%f", &salario);

        media += salario;

        if(contador == 0){
            menorIdade = idade;
            maiorIdade = idade;
        }

        if (idade > maiorIdade){
            maiorIdade = idade;
        }
        
        if(idade < menorIdade){
            menorIdade = idade;
        }

        if(sexo == 1 && salario <= 1000){
            quantMulheres++;
        }
        
        contador++;

    }

    printf("Media salarial = %g\n", media/contador);
    printf("Maior idade = %d", maiorIdade);
    printf(" Menor idade = %d\n", menorIdade);
    printf("Mulheres baixa renda = %d", quantMulheres);
    

}