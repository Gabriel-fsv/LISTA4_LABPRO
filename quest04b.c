#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 50

    int main(void){

        char frase1[TAM], frase2[TAM];

        puts("Digite a primeira frase");
        fgets(frase1, sizeof(frase1), stdin);

        puts("Digite a segunda frase");
        fgets(frase2, sizeof(frase2), stdin);

        if(strcmp(frase1, frase2) == 0){
            puts("Frases iguais");
        }
        else{
            puts("Frases diferentes");
        }

        return 0;
    }