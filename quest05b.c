#include <stdio.h>
#include <string.h>
#define TAM 50

    int main(void){

        char frase1[TAM], frase2[TAM];

        puts("Digite a primeira frase");
        fgets(frase1, sizeof(frase1), stdin);
        frase1[strcspn(frase1, "\n")] = '\0';

        puts("Digite a segunda frase");
        fgets(frase2, sizeof(frase2), stdin);
        frase2[strcspn(frase2, "\n")] = '\0';

        strcat(frase1, frase2);

        printf("A frase concatenada: %s", frase1);

        return 0;
    }