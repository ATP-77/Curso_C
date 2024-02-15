#include<stdio.h>

int main () {

    int valorInteiro =1;
    float valorReal = 1.2;
    char valorChar = 103;

    int* ponteiro_int;
    float* ponteiro_float;
    char* ponteiro_char;

    printf("Valor inteiro - antes %d\n", valorInteiro);
    printf("Valor Real - antes %.2f\n", valorReal);
    printf("Valor caracter - antes %c ou %d\n", valorChar, valorChar);

    ponteiro_int = &valorInteiro;
    ponteiro_float = &valorReal;
    ponteiro_char = &valorChar;

    printf("Valor inteiro - após %d\n", valorInteiro);
    printf("Valor Real - após %.2f\n", valorReal);
    printf("Valor caracter - após %c ou %d\n", valorChar, valorChar);
}