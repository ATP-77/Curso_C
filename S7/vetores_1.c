// Vetores: Parte 1
//Array unidimensional
//char [50];  -> Array unidimensional ou vetor.

#include <stdio.h>

int main () {
    // Vetores e strings
    char nome [50];

    printf("Qual o seu nome ? ");
    fgets(nome, 49, stdin);
    printf(" Olá %s ", nome);

    //Vetores e caracteres

    char letras [26];
    int contador = 0;
    for (int i = 97; i <= 122; i++) {
        letras[contador] = i;
        contador  = contador + 1;


    }

    // Imprimindo as letras e seus valores em decimal:

    for (int i = 0; i < 26; i++) {
        printf("%d == %c \n", letras[i], letras[i]);
    }




    // vetores de inteiros

    int numeros [10];

    //vetores e reais:

    float valores [5];




    return 0;

}