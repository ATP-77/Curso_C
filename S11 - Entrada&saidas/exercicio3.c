/*Fça um programa que receba do usuário  o nome de um arquivo texto e um caractere.  Mostre a tela
quantas vezes aquele caractere aparece dentro do arquivo.*/

#include<stdio.h>

int main (){

    FILE *arq;
    char nome_arquivo[12]; //exemplo.txt
    char caractere = 0;
    int conta_caractere = 0;

    printf("Informe o nome do arquivo: ");
    fgets(nome_arquivo, 12, stdin);

    printf("Informe o caracter a ser pesquisado: ");
    getchar();
    caractere = getchar ();
    
   //scanf(" %c", &caractere);



    arq = fopen(nome_arquivo, "r");

    if (arq) {
        for (char c =getc(arq); c != EOF; c = getc(arq)){
            if(c== caractere){
                conta_caractere = conta_caractere + 1;
            }
        }
        printf("Existem %d caractere %c no arquivo %s\n", conta_caractere, caractere, nome_arquivo);


    }else {
        printf("Não foi possível abrir o arquivo!\n");
    }


    fclose(arq);
    arq = NULL;
    return 0;
}