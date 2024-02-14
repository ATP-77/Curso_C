#include<stdio.h>

int main () {
    int n;  //variável que guarda seu valor na memória

    int* p; //Ponteiro: Aponta para um endereço de memória

    printf("Informe um numero: \n");
    scanf("%d", &n);

    //Inicializando o ponteiro:
    p = &n;

    printf("O numero informado foi: %d\n", n);

    printf("Endereço de memória: %d\n", &n);

    printf("Endereço do ponteiro: %p\n", p);

    return 0;


}