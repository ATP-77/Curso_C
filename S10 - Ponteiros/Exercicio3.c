/*Faça um programa que contenha um array de inteiros contendo 5 elementos.  Utilizando apenas
aritimética de ponteiros, leia este array do teclado e imprima o dobro de cada valor lido.*/

#include <stdio.h>

int main () {

    int vetor[5]; // Cada posição do vetor é um ponteiro!

    for (int i =0; i < 5; i++){
        printf("Informe o valor %d/5 de 5:\n", i+1);
        scanf("%d", &vetor[i]);
    }

    for (int i = 0; i < 5; i++) {
        printf("O dobro de %d é %d\n", *(vetor + i), *(vetor + i)**(vetor +i));
    }


    return 0;
}