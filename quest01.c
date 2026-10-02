#include <stdio.h>
    int main(void){

        float maior, menor, vetor[15];

        printf("Digite o valor do Vetor 1: \n");
        scanf("%f", &vetor[0]);

        maior = vetor[0];
        menor = vetor[0];

        for(int i = 1; i < 15; i++){
            printf("Digite o valor do Vetor %d\n", i + 1);
            scanf("%f", &vetor[i]);
                if(vetor[i] > maior){
                    maior = vetor[i];
                }
                if(vetor[i] < menor){
                    menor = vetor[i];
            }
        }

        printf("A Soma do Maior e do Menor: %f", maior + menor);

        return 0;
    }