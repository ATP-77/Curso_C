/* Faça um programa que contenha duas variáveis inteiras. Leia estas varáveis do teclado.
Em seguida, compare seus endereços e exiba o conteúdo do maior endereço.*/

#include<stdio.h>

int main () {

    int n, m;

    int* pn;
    int* pm;

    printf("Insira dois numeros reais: \n");
    scanf("%d%d",&n,&m);

    printf("Numeros inteiros %d e %d  e seus endereços de memoria %p e %p \n", n, m, n, m);
    
    pn = &n;
    pm = &m;

    printf("Numeros inteiros %d e %d  e seus endereços de memoria %p e %p \n\n", n, m, n, m);


    if (&n > &m) {
        

        printf("O Primeiro é maior! %p\n\n", n);
    }

        else{

            printf("O segundo é maior! %p\n\n", m);
    }
    

    

    return 0;
}