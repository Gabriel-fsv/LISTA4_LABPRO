#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#define TAM 3

    int main(void){
        int num[TAM];
        int somatorio = 0, produtorio = 1;

        srand(time(NULL));

        for(int i = 0; i < TAM; i++){
            num[i] = rand() % 20;
            printf("Numero %d: %d\n", i + 1, num[i]);
            somatorio += num[i];
            produtorio *= num[i];
        }

    printf("Media Aritmetica: %.2f\n", (float)somatorio/TAM);
    printf("Media Geometrica: %.2f\n", (float)cbrt(produtorio));

        return 0;
    }