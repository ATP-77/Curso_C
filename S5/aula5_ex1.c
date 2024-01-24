/* Faça um programa que determine e mostre os cinco primeiros múltiplos de 3, considerando números
maiores que 0.
*/

#include <stdio.h>

int main() {

    int numero = 3;
    int multiplos = 1;

    for (int i = 1; i< 6; i++) {

        multiplos = numero * i;
        printf("Os multiplos de tres são: %d\n", multiplos);

    }

    





    return 0;
}