#include <stdio.h>
#include <string.h>
#define TAM 30

    int main(void){
        char letra, palavra[TAM];
        int somador = 0;

        puts("Digite seu nome: ");
        fgets(palavra, sizeof(palavra), stdin);

        palavra[strcspn(palavra, "\n")] = '\0';

        puts("Digite uma letra: ");
        letra = getchar();

        for(int i = 0; i < 30; i++){
            if(letra == '\n'){
                puts("Invalido");
                return 0;
            }

            if(palavra[i] == letra){
                somador++;
            }
        }
    
    printf("A letra '%c' se repete %d vezes", letra, somador);

    return 0;

    }


