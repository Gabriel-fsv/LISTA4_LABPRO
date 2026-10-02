#include <stdio.h>
#include <string.h>
#define TAM 20

    int main(void){

        char str[TAM];
        char caractere;
        int somador = 0;

        puts("Digite seu nome: ");
        fgets(str, sizeof(str), stdin);

        str[strcspn(str, "\n")] = '\0';

        puts("Digite um caractere: ");

        caractere = getchar();

        for(int i = 0; str[i] != '\0' ; i++){
            if(caractere == str[i]){
                somador++;
            }
        }

        printf("A letra %c se repete %d vezes\n", caractere, somador);

        return 0;
    }