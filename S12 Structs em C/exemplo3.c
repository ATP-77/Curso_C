#include<stdio.h>
#include<string.h>

// Struct => estrutura

struct st_aluno{
    char matricula[10];
    char nome[100];
    char curso [50];
    int ano_nascimento;
}alunos[5];


int main () {

    //struct st_aluno alunos[5];
    
    for (int i =0; i < 5; i++){


    printf("Informe a matricula do aluno: ");
    fgets(alunos[i].matricula, 10, stdin);

    printf("Informe a nome do aluno: ");
    fgets(alunos[i].nome, 100, stdin);

    printf("Informe o curso do aluno: ");
    fgets(alunos[i].curso, 50, stdin);

    printf("Informe a data de nascimento do aluno: ");
    scanf("%d", &alunos[i].ano_nascimento);
    //fgets(aluno1.ano_nascimento, 5, stdin);
    getchar();
    }

    for (int i = 0; i < 5; i++){

    
    printf("================ Dados do Aluno===============\n"), (i + 1);
    printf("Matricula: %s", alunos[i].matricula);
    printf("Nome: %s", alunos[i].nome);
    printf("Curso: %s", alunos[i].curso);
    printf("Ano de nascimento: %d\n", alunos[i].ano_nascimento);
    }

    return 0;
}