#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 50

int main(void){
    char frase1[TAM], frase2[TAM];

    puts("Digite uma frase: ");
    fgets(frase1, sizeof(frase1), stdin);
    frase1[strcspn(frase1, "\n")] = '\0';

    puts("Digite outra frase: ");
    fgets(frase2, sizeof(frase2), stdin);
    frase2[strcspn(frase2, "\n")] = '\0';

    for(int i = 0; i < TAM; i++){
        if(frase1[i] != frase2[i]){
            puts("As frases são diferentes");
            return 0;
        }
        if(frase1[i] == '\0'){
            break;
        }
    }

    puts("As frases sao iguais");

    return 0;
}