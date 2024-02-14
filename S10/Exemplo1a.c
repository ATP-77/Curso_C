#include <stdio.h>

// endereço de memoria como parametro de entrada
// Acesso ao hardware/logico/memoria.
void incrementa(int* contador){
    printf("Antes de incrementar. \n");
    printf("O Contador vale %d \n", (*contador));
    printf("O endereço de memoria é  %d \n", contador);

    printf("Depois de incrementar. \n");
    printf("O Contador vale %d \n", ++(*contador));
    printf("O endereço de memoria é  %d \n", contador);
}

int main () {

    //Variavel aloca espaço em memoria para o valor.
    int contador = 10;

    printf("Antes de incrementar. \n");
    printf("O contador vale %d \n", contador);
    printf("O endereço de memoria é  %d \n", &contador);

    // Copia por valor:
    incrementa(&contador);

    printf("Depois de incrementar. \n");
    printf("O Contador vale %d \n", contador);
    printf("O endereço de memoria é  %d \n", &contador);

   

    return 0;
}