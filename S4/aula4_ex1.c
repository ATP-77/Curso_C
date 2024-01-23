//Faça um programa que leia três valores e apresente como resultado a soma dos quadrados dos valores
//lidos.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    int y;
    int z;

    printf("Digite um numero inteiro: \n");
    scanf("%d%d%d", &x,&y,&z);
 
    int resultado;

    resultado = (x*x) + (y*y) + (z*z);

    printf("O resultado é: %d \n", resultado);

    return 0;
}