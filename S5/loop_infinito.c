// Exemplo de loop infinito usando while:

#include<stdio.h>

int main () {

    int valor = 1;

    while (1) {
        printf("Valor %d\n", valor);
        printf("Exemplo de loop infinito!\n");
        valor = valor + 1;
    }

    return 0;
}