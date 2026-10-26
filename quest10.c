#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 3

int main(void){
    int matriz[TAM][TAM];
    int num, contador = 0;

    srand(time(NULL));
    
    puts("Digite um numero entre 0 e 9");
    scanf("%d", &num);

    puts("\nMATRIZ 3X3 ENTRE 0 E 9");

    for(int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            matriz[i][j] = rand() % 10;
            printf("%d ", matriz[i][j]);
            if(matriz[i][j] == num){
                contador++;
            }
        }
    printf("\n");
    }

    printf("O numero %d se repete %d vez(es)\n", num, contador);

    return 0;
}