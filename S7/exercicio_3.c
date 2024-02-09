/*3. Faça um programa que leia um vetor de 10 posições e atribua valor 0 para todos os elementos que
possuírem valores negativos*/

#include<stdio.h>
#include<stdlib.h>

int main () {
    int vetorF[10];
    
    for (int i =0; i < 10; i++){
        printf("Favor inserir os valores do vetor: %d ", i + 1);
        scanf("%d", &vetorF[i]);
        
        
    }
    for (int i =0; i <10; i++) {
        if (vetorF[i] < 0) {
            vetorF[i] = 0;
        }
    }
    for (int i= 0; i < 10; i++) {
    printf ("Vetor na posição %d vale %d \n", i, vetorF[i]);
    }

    return 0;
}