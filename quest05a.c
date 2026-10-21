#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 50

    int main(void){
    
    char frase1[TAM], frase2[TAM];
    int i, j;

        puts("Digite uma frase");
        fgets(frase1, sizeof(frase1), stdin);
        frase1[strcspn(frase1, "\n")] = '\0';

        puts("Digite outra frase");
        fgets(frase2, sizeof(frase2), stdin);
        frase2[strcspn(frase2, "\n")] = '\0';

        for(i = 0; frase1[i] != '\0'; i++);

        for(j = 0; frase2[j] != '\0'; j++){
            frase1[i + j] = frase2[j];
        }

        frase1[i + j] = '\0';

        printf("A frase concatenada: %s", frase1);
       
        return 0;
    }