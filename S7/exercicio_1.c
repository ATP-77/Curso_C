/*1. Faça um programa que possua um vetor denominado A que armazene 6 números inteiros. O programa
deve executar os seguintes passos:
a) Atribua os seguintes valores a esse vetor: 1, 0, 5, -2, -5, 7;
b) Armazene em uma variável inteira simples a soma entre os valores das posições A[0], A[1] e A[5]
 do vetor e mostre na tela esta soma;
c) Modifique o vetor na posição 4, atribuindo a esta posição o valor 100;
d) Mostre na tela cada valor do vetor A, um em cada linha.
*/

#include<stdio.h>
#include<stdlib.h>

int main () {

    int vetorA [6] = {1, 0, 5, -2, -5, 7};
    int soma = 0;
    soma = vetorA[0] + vetorA[1] + vetorA[5];
    printf("Soma do vetor é: %d + %d + %d é igual a: %d\n",vetorA[0],vetorA[1],vetorA[5], soma);

    vetorA[4] = 100;
    
    for (int i= 0; i <6; i++) {
        printf ("%d \n", vetorA[i]);
    }
    /*
    printf("O Valor do vetor A: %d \n", vetorA[0]);
    printf("O Valor do vetor A: %d \n", vetorA[1]);
    printf("O Valor do vetor A: %d \n", vetorA[2]);
    printf("O Valor do vetor A: %d \n", vetorA[3]);
    printf("O Valor do vetor A: %d \n", vetorA[4]);
    printf("O Valor do vetor A: %d \n", vetorA[5]);

    printf("O vetor A possui os seguintes valores: \n %d \n %d \n %d \n %d \n %d \n %d \n", vetorA[0], vetorA[1], vetorA[2], vetorA[3],vetorA[4],vetorA[5]);

    */




    return 0;
}

