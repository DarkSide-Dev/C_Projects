// Sistema

// system() -> cmd [X]

// Vetores

// strcpy (string, "") -> Atribui outro valor para a string [X]
// syzeof() -> Tamanho do vetor [X]

// String

// fgets(vetor, tamanho, stdin) [X]
// atof() -> String em float
// atoi() -> String em Int
// atol() -> String em longint

// ctype.h
// tolower() -> Converte o caracter em minúsculo
// toupper() -> Converte caracter minúsculo em maiúsculo.

// strncmp -> Comparar duas strings

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>
#include <ctype.h>

int main(){

    // COMANDO SYSTEM

    // char pasta[30];
    
    //     printf("Digite o sim caso queira criar uma pasta: ");
    //     fgets(pasta, 30, stdin);

    //     if(strncmp("sim", pasta, 3) == 0){
        //     system("md deco");
        //     system("dir");
    //     }

    // COMANDO SYSTEM

    // COMANDO STRCPY

        // char nome[30];
        // char segundoNome[30];

        // printf("Digite seu nome: ");
        // fgets(nome, 30, stdin);
        
        // printf("Digite o novo nome: ");
        // fgets(segundoNome, 30, stdin);

        // printf("\nNome antigo: %s, nome atual: %s", nome, segundoNome);

        // strcpy(nome, segundoNome);

        // printf("\n\nNome antigo: %s, nome atual: %s", nome, segundoNome);

    // COMANDO STRCPY

    // COMANDO SYZEOF/STRLEN

        // char nome[30];
        // char validador[100];
        
        // a:

        // printf("Digite seu nome: ");
        // fgets(validador, 100, stdin);

        // if(strlen(validador) > 31){
        //     printf("\nDigite um nome menor...");
        //     goto a;
        // }
        // else{
        //     printf("Parabens, voce digitou um nome cabivel !!");
        //     strcpy(nome, validador);
        // }

        // printf("\n\n%s", nome);

        // int tamanho = 0;

        // printf("Digite seu nome: ");
        // fgets(nome, 30, stdin);

        // tamanho = strlen(nome); // tamanho = sizeof(nome);
        // tamanho -= 1;

        // printf("\n Tamanho: %d", tamanho);


    // COMANDO SYZEOF/STRLEN

    // COMANDO ATOF

    // float x = 0;
    // char valor[10];

    // printf("Digite um valor: ");
    // fgets(valor, 10, stdin);

    // printf("%s\n\n", valor);

    // x = atof(valor); // -> Float
    // // atoi() -> Int
    // // atol() -> Double

    // printf("%f", x);

    // COMANDO ATOF

}