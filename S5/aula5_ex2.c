/* Escreva um programa que declare um inteiro, inicialize-o com 0, incremente-o de 100 em 100, imprimindo
seu valor na tela, até que seu valor seja 100000 (cem mil). */

#include<stdio.h>

int main () {

    int somatorio =0;
    int numero =0;
    printf("Informe um numero: ");
    scanf("%d", &numero);

    for (int i = 0; i < 100001; i+=100) {

        somatorio = i + numero;
        printf("Somatório: %d\n", somatorio);
        



    }
    

    return 0;



}