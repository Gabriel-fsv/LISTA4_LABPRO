#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 100

int main(void){

    int num[TAM];
    int a, b, menor, aux;

    srand(time(NULL));

    puts("Digite um intervalo A");
    scanf("%d", &a);

    puts("Digite um intervalo B");
    scanf("%d", &b);

    if(b < a){
        puts("Erro! Digite um intervalo valido.");
        return 1;
    }

    for(int i = 0; i < TAM; i++){
        num[i] = (rand() % (b - a)) + a;
        printf("Numero %d: %d\n", i + 1, num[i]);
    }

    for(int i = 0; i < TAM - 1; i++){
        menor = i;
        for(int j = i + 1; j < TAM; j++){
            if(num[j] < num[menor]){
                menor = j;
            }
        }
    aux = num[i];
    num[i] = num[menor];
    num[menor] = aux;
    }

    for(int i = 0; i < TAM; i++){
        printf("Numero %d: %d\n", i + 1, num[i]);
    }

    return 0;
}