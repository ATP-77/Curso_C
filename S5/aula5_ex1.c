/* Faça um programa que determine e mostre os cinco primeiros múltiplos de 3, considerando números
maiores que 0.
*/

#include <stdio.h>

int main() {

    int numero = 1;
    int contador = 0;

    printf("Apresentando os multiplos de três: \n");
    while (contador < 5) {
        if (numero % 3 == 0){
            printf("O numero %d é multiplo de três!\n", numero);
            contador = contador + 1;
        }
        numero = numero + 1;
    }
    
        return 0;
    }





    
