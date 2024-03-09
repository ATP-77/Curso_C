/* Crie um progrma que tenha uma função recursiva que receba um numero inteiro positio N e calcula
e apresente o somatorio dos numeros de 1 a N:*/

#include<stdio.h>

int somatorio(int n){
    if(n < 0){
        printf("O valor precisa ser positivo!\n");
        return 0;
    } else if(n <=1) {
       return n; 

    }
    return n + somatorio(n -1);
    
}

int main () {

    int n = - 5;  // 5 + 4 +3 + 2 + 1= 15
    
    printf("A soma dos %d primeiros numeros é %d\n", n, somatorio(n));

    return 0;
}