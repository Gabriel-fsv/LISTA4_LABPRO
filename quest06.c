#include <stdio.h>
#include <string.h>
#define TAM 50

    int main(void){

        char frase[TAM], aux;
        int i, tamanho;

        puts("Digite uma frase: ");
        fgets(frase, sizeof(frase), stdin);
        frase[strcspn(frase, "\n")] = '\0';

        for(tamanho = 0; frase[tamanho] != '\0'; tamanho++);
        for(i = 0; i < tamanho/2; i++){
            aux = frase[i];
            frase[i] = frase[tamanho - 1 - i];
            frase[tamanho - 1 - i] = aux;
        }

        printf("Frase Invertida: %s", frase);
        
        return 0;
    }