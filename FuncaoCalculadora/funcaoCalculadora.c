#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double somar(double x, double y){
    return (x + y);
}

double subtrair(double x, double y){
    return (x - y);
}

double multiplicar(double x, double y){
    return (x * y);
}

double dividir(double x, double y){
    return (x / y);
}

double areacirculo(double r){
    return (3.14 * pow(r,2));
}

void opcaoinvalida(void){
    printf("\n\nOpcao nao encontrada");
}

int main(){

    double num1 = 0;
    double num2 = 0;
    double result = 0;
    int operacao = 0;
    int continuar = 1;

    while(continuar == 1){

        printf("\n\nDigite o primeiro numero (ou zero para sair): ");
        scanf("%lf", &num1);
        
        if(num1 == 0){
            continuar = 0;
            break;
        }

        printf("\nDigite o segundo numero: ");
        scanf("%lf", &num2);

        a:

        printf("\nDigite algum dos seguintes numeros:\n\n[1] soma [2] subtracao [3] multiplicacao [4] divisao [5] area de um circulo \n\nOpcao: ");
        scanf("%d", &operacao);

        if(operacao == 1){
            result = somar(num1, num2);
            printf("\nResultado: %g + %g = %g", num1, num2, result);

        }
        else if(operacao == 2){
            result = subtrair(num1, num2);
            printf("\nResultado: %g - %g = %g", num1, num2, result);
        }
        else if(operacao == 3){
            result = multiplicar(num1, num2);
            printf("\nResultado: %g x %g = %g", num1, num2, result);
        }
        else if(operacao == 4){
            result = dividir(num1, num2);
            printf("\nResultado: %g / %g = %g", num1, num2, result);
        }
        else if(operacao == 5){
            result = areacirculo(num1);
            printf("\nResultado: A area de um circulo com %g de diametro equivale a: %g", num1, result);
        }
        else{
            opcaoinvalida();
            goto a;
        }

    }

}