#include <stdio.h>


void incrementa(int valor){
    printf("Antes de incrementar. \n");
    printf("O Contador vale %d \n", valor);

    printf("Depois de incrementar. \n");
    printf("O Contador vale %d \n", ++valor);
}

int main () {

    //Variavel aloca espaço em memoria para o valor.
    int contador = 10;

    printf("O contador vale %d \n", contador);

    // Copia por valor:
    incrementa(contador);

    printf("Depois de incrementar. \n");
    printf("O Contador vale %d \n", contador);

   

    return 0;
}