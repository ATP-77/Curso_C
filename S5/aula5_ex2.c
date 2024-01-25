/* Escreva um programa que declare um inteiro, inicialize-o com 0, incremente-o de 100 em 100, imprimindo
seu valor na tela, até que seu valor seja 100000 (cem mil). */

#include<stdio.h>

int main () {



    for (int numero = 0; numero < 100001; numero +=100) {

        
        printf("O valor é numero: %d\n", numero);
       

    }
   
    return 0;
}