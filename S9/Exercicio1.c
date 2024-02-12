/*Faça um programa que tenha uma função que receba um vetor de inteiros como parametro
e retorne o maior valor.*/

#include<stdio.h>

void imprime (int n[], int m){      //Declaração do vetor de inteiros
    int i;
    for (i=0; i<m; i++)
        printf("%d \n", n[i]);
}

int main () {
    
    int v[] = {118,250,3544,4555,58};
    imprime(v,5);

    int i, maior;
    maior = v[0];
    for (i=1; i<5; i++) {
        if(maior < v[i])
            maior = v[i];
    }
    printf("maior = %d\n", maior);

   // printf("Imprimir o vetor: ", imprime);
    return 0;
}

