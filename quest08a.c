#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 100

    int main(void){
        int a, b, menor;
        int num[100];

        srand(time(NULL));

        puts("Digite um intervalo A: ");
        scanf("%d", &a);

        puts("Digite um intervalo B: ");
        scanf("%d", &b);

        if(a > b){
            puts("Erro! O intervalo B tem que ser maior que A");
            return 0;
        }

        printf("Gerar entre %d e %d\n", a, b);

        for(int i = 0; i < TAM; i++){
            num[i] = (rand() % (b - a + 1)) + a;
            printf("Numero %d: %d\n", i + 1, num[i]);
        }

        // Bubble Sort

        for(int i = 0; i < TAM - 1; i++){
            for(int j = 0; j < TAM - 1 - i; j++){
                if(num[j] > num[j + 1]){
                    menor = num[j + 1];
                    num[j + 1] = num[j];
                    num[j] = menor;
                }
            }
        }

        puts("\n----------ORDEM CRESCENTE-----------");
        for(int i = 0; i < TAM; i++){
            printf("Numero %d: %d\n", i + 1, num[i]);
        }

        return 0;
    }