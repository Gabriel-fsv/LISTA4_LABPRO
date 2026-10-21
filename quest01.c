#include <stdio.h>
#define TAM 15

    int main(void){
        float maior, menor, vetor[TAM];

        printf("Digite o valor do elemento 1: ");
        scanf("%f", &vetor[0]);

        maior = vetor[0];
        menor = vetor[0];

        for(int i = 1; i < 15; i++){
            printf("Digite o valor do elemento %d:", i + 1);
            scanf("%f", &vetor[i]);
                if(vetor[i] < menor){
                    menor = vetor[i];
                }
                else if(vetor [i] > maior){
                    maior = vetor[i];
                }
        }
        
        printf("A soma do maior e do menor elemento: %.2f", maior + menor);
        
    return 0;

    }