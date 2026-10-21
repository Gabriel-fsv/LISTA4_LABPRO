#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 100

    int main(void){
        int num[TAM];
        int maior, menor;
        int a, b;

        srand(time(NULL));

        puts("Defina um intervalo A: ");
        scanf("%d", &a);

        puts("Defina um intervalo B: ");
        scanf("%d", &b);

        if(a > b || b - a + 1 > TAM){
            puts("Erro! Digite um intervalo menor e outro maior (dif 100)");
            return 1;
        }

        num[0] = (rand() % b - a + 1) + a;
        maior = num[0];
        menor = num [0];

        for(int i = 0; i < TAM; i++){
            num[i] = (rand() % b - a + 1) + a;
            printf("Numero %d: %d\n", i, num[i]);
                if(num[i] > maior){
                    maior = num[i];
                }
                if(num[i] < menor){
                    menor = num[i];
                }
        }

        printf("O maior numero: %d\n", maior);
        printf("O menor numero: %d\n", menor);

        return 0;
    }