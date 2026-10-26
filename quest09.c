#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 3

    int main(void){
        int matriz[TAM][TAM];
        
        srand(time(NULL));

        for(int i = 0; i < 3; i++){
            for(int j = 0; j < 3; j++){
                matriz[i][j] = (rand() % 100) + 1;
            }
        }

        for(int i = 0; i < 3; i++){
            for(int j = 0; j < 3; j++){
                printf(" %d ", matriz[i][j]);
            }
        printf("\n");
        }

        printf("Matriz Diagonal: %d %d %d", matriz[0][0], matriz[1][1], matriz[2][2]);

        return 0;
    }