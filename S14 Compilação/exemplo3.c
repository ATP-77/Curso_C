#include<stdio.h>

// compilação via terminal

// gcc nome-do-programa.c -o executavel

int main () {
    int qtd, soma = 0;

    printf("Quantos numeros voce quer somar: ");
    scanf("%d", &qtd);

    for ( int i =0; i < qtd; i++) {
        soma = soma +1 *2 + 3;
    }

    printf("A soma é %d\n", soma);
}