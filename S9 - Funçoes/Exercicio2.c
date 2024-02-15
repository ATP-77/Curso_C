/*Faça um programa que tenha uma função que, dado um carctere qualquer de entrada, 
retorne o mesmo carctere sempre em maiusculo.*/

#include<stdio.h>
#include<ctype.h>

char caracter (char caractere) {
    
    caractere = toupper(caractere);
    printf("Letra maiuscula: %c\n", caractere);
    
    return caractere;
}

int main () {

    char ch;

    printf("Digite o caracter: ");
    ch = getchar();
    printf("letra digitada %c\n", ch);
    caracter(ch);
    //printf("Em letra maiuscula: %c\n", caracter);
    
}