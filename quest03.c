#include <stdio.h>
#include <string.h>
#define TAM 30

    int main(void){
    char str[TAM];    
    int somador = 0;

    puts("Digite seu nome completo: ");
    fgets(str, sizeof(str), stdin);
    
    str[strcspn(str, "\n")] = '\0';

    for(int i = 0; str[i] != '\0'; i++){
        somador++;
    }

    printf("A quantidade de caracteres: %d", somador);

    return 0;
}
