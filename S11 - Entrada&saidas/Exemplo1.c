/*Manipulação de entrada e saídas:*/

#include<stdio.h>

// FILE -> aponta para arquivo (é um ponteiro!)

int main () {

    FILE *arq;

    arq = fopen("exemplo.txt", "w"); 
    // fope("nome do arquivo, forma de abertura do arquivo")
    //w - escrita (sobescreve o existente!)
    //r - leitura do arquivo.
    //wa - adição de conteúdo, adiciona na proxima linha!
    //O arquivo deve ser fechado no fim da manipulação - fclose(arq);

    fclose(arq);


    return 0;
}