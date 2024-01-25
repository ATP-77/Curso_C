/* Faça um programa que leia 10 números e escreva o maior e o menor valor lido.*/

#include<stdio.h>

int main () {

    int numero, maior, menor = 0;

    for (int i =0; i <10; i++) {
        
        printf("Informe o valor %d de 10: ", i + 1);
        scanf("%d", &numero);
        

        // No primeiro Loop:
        if (i == 0){
            maior = numero;
            menor = numero;
        }

        // Loops seguintes...
        // Maior:
        if (numero > maior){
            maior =numero;
        }
        // Menor:
        if (numero < menor) {
            menor = numero;
        }

    }

    printf("O maior valor é %d e o menor é %d", maior, menor);

    return 0;
}