/*Crie um programa que tenha uma função recursiva que calcule e retorne o fatorial de um numero inteiro
N:*/

#include<stdio.h>

int fatorial(int n) {
    if(n >= 1) {
        return n * fatorial(n - 1);
    } else {
        return 1;
    }
}


int main () {
     int n = 10;
    printf("O fatorial de %d é %d\n", n, fatorial(n));

    return 0;
}