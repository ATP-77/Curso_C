/*2. Faça um programa que leia um vetor de 10 posições. 
Conte e mostre quantos valores pares ele possui
*/

#include<stdio.h>
#include<stdlib.h>

int main () {

    int v[10];
    int Pares = 0;
    for (int i = 0; i < 10; i++) {
        printf("Digite dez numeros para verificação: %d\n", i + 1);
        scanf("%d", &v[i]);
 
       
    }
           for (int i= 0; i <10; i++) {
            if (v[i] % 2 == 0) {
                Pares = Pares +1;
                printf("Numeros pares = %d \n", v[i]);

            }
           
        }
    printf("Temos um total de %d valores pares no vetor! \n", Pares);




    return 0;
}