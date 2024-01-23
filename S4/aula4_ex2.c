//Leia quatro notas, calcule a média aritmética e imprima o resultado.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float nota1;
    float nota2;
    float nota3;
    float nota4;


    printf("Digite um numero inteiro: ");
    scanf("%f%f%f%f", &nota1,&nota2,&nota3,&nota4);

    float media;
    media = (nota1 + nota2 + nota3 + nota4)/4;

    printf("A média das notas é: %f \n", media);

    return 0;
}