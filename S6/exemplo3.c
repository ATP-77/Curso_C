/*Tipos de dados em C:  -> Alfanuméricos: Caracteres e strings*.
// Na linguagem C não exite o tipo de dado string.  ("dfjsjfslk" -> String), 
('Caracter' -> caracter)
*/

#include <stdio.h>


int main () {

    char nome[50];

    printf("Qual é o seu nome? \n");
    //gets(nome);  // Funcao insegura  -> fgets
    fgets(nome, 49, stdin);  
    // fgets(variavel, tamanho, origem(stdin -> teclado))

    printf("Seu nome é %s\n", nome);

    return 0;
}