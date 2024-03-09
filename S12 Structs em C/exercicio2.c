/*Crie um programa que tenha uma struct chamada aluno contendo nome, numero de matricula e curso.
Leia do usuário a informação de 5 alunos, armazene em um vetor desta estrutura e imprima os dados na tela
*/
#include<stdio.h>
#include<string.h>

struct st_alunos{
    char nome[50];
    int RU;
    char curso[30];
    
}alunos[];

int main () {

    int i, r;
   

    printf("Digite quantos registros quer incluir: ");
    scanf("%d", &r);

    for (i =0; i < r; i++) {

        printf("cadastro %d de %d\n", (i+1), r);

        printf("Inclusão do RU: ");
        scanf("%d", &alunos[i].RU);
        getchar();

        printf("Inclusão do Nome: ");
        //getchar();
        fgets(alunos[i].nome, 50, stdin);



        printf("Inclusão do curso: ");
        //getchar();
        fgets(alunos[i].curso, 30, stdin);

        printf("\n");

          

    }

    for (int i = 0; i < r; i++){

    
    printf("================ Dados do Aluno===============\n"), (i + 1);
    printf("Matricula: %s", alunos[i].nome);
    printf("Curso: %s", alunos[i].curso);
    printf("Ano de nascimento: %d\n", alunos[i].RU);
    }
    printf("\n");



    return 0;
}