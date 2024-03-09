#include<stdio.h>
#include<string.h>

// Struct => estrutura

struct st_contato{
    char nome[100];
    int ano_nascimento;
    char telefone [20];
    char email[100];
    
};

// Struct de Struct

struct st_agenda{
    struct st_contato contatos[100];
}agenda;



int main () {

        
    for (int i =0; i <3; i++){

    printf("Insira o novo contato:\n ");
    printf("Informe a nome: ");
    fgets(agenda.contatos[i].nome, 100, stdin);

    printf("Informe ano de nascimento: ");
    scanf("%d", &agenda.contatos[i].ano_nascimento);
    getchar();

    printf("Informe o telefone: ");
    fgets(agenda.contatos[i].telefone, 20, stdin);

    printf("Informe o e-mail: ");
    fgets(agenda.contatos[i].email, 100, stdin);
    }

    for (int i = 0; i < 3; i++){

    
    printf("================ Dados Agenda de Contato ===============\n");
    printf("======================Contato %d ==============\n", (i + 1));
    printf("Nome: %s\n", strtok (agenda.contatos[i].nome, "\n"));
    printf("Ano de Nascimento: %d\n", agenda.contatos[i].ano_nascimento);
    printf("telefone: %s\n", strtok (agenda.contatos[i].telefone, "\n"));
    printf("e-mail: %s\n", strtok (agenda.contatos[i].email, "\n"));
    }

    return 0;
}