#include<stdio.h>
#include<ctype.h>
/* Esta biblioteca testa tipo de carcteres:
isalnum()-> testa se o numero é alpha numerico (abcd,0123)
isalpha() -> verifica se o carater pertence ao alfabeto(abcde)
isdigit() -> verifica se o caracter é um decimal(01236...)
ispunct() -> verifica se o caracter é uma pontuação(?!,.;)
isspace() -> verifica se é um espaço em branco( )
isupper() -> verifica se é maiuscula
tolower() -> converte se é minusculo
toupper() - converte para maiuscula*/


int main () {

    for(;;){

    char  teste;
    
    printf("Digite um caracter: ");
    scanf("%c", &teste);
    getchar();

    if (isalnum(teste)){
        printf("É alfanumérico!\n");
    }else{
        printf("Não é alfanumérico!\n");
    }
    if (isalpha(teste)) {
        printf("É alfabetico!\n");
    }else { 
        printf("não é alfabético!\n");

    }
    if (isdigit(teste)) {
        printf("É Digito!\n");
    }else { 
        printf("Não é Digito!\n");

    }

    if (ispunct(teste)) {
        printf("É Pontuação!\n");
    }else { 
        printf("Não é Pontuação!\n");

    }

    if (islower(teste)) {
        printf("É minuscula!\n");
    }else { 
        printf("Não é minuscula!\n");

    }

    if (isupper(teste)) {
        printf("É maiuscula!\n");
    }else { 
        printf("Não é maiuscula!\n");

    }

    if (isspace(teste)) {
        printf("É um espaço!\n");
    }else { 
        printf("Não é espaço!\n");

    }

    printf("A letra %c é em maiuscula é %c \n",teste, toupper(teste));
    printf("A letra %c é em minuscula é %c \n",teste, tolower(teste));

    }

    return 0;
}

