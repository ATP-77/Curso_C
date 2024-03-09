/*Crie uma função recursiva que converta um inteiro em binário.*/


#include<stdio.h>

int binario(int n){
    if(n ==0){
        return n;
    } else {
        return (n % 2 + 10 * binario(n/2));
    }
}


int main () {

    int n = 500; //101
    printf("O numero %d em binario é %d\n", n, binario(n));



    return 0;
}