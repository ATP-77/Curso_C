/* Crie um programa que leia o  nome , a idade e o endereço de uma pessoa e armazena os dados em uma
struct*/

#include<stdio.h>
#include<string.h>

struct st_agenda{
    char nome[50];
    int idade;
    char endereco [100];
  
}agenda1;

int main () {

    printf("Insira o seu nome: ");
    fgets(agenda1.nome, 50, stdin);
    printf("insira sua idade:");
    scanf("%d", &agenda1.idade);
    printf("insira seu endereço: ");
    getchar();
    fgets(agenda1.endereco, 100, stdin);

    printf("\nNome: %s", agenda1.nome);
    printf("idade: %d\n", agenda1.idade);
    printf("Endereço: %s\n", agenda1.endereco);

    return 0;
}