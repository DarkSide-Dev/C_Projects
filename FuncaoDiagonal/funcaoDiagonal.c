#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double Diagonal(double x, double y){

    double result = sqrt(pow(x, 2) + pow(y,2));

    // printf("\nO valor da diagonal equivale a: %g", result);

    return result;
}

int main(){

    double base = 0;
    double altura = 0;
    double result = 0;

    printf("\nDigite o valor da base do retangulo: ");
    scanf("%lf", &base);

    printf("\nDigite o valor da altura do retangulo: ");
    scanf("%lf", &altura);

    result = Diagonal(base, altura);

    printf("\nO valor da diagonal equivale a: %g\n", result);

    return 0;

}