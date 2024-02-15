#include<stdio.h>

/*Escrevendo Funções:

main -> Principal

Estrutura das funões:

Tipo de retorno;
Nome;
Parametros de entrada (opcional)
Implementação;
retorno;*/

// Função do tipo void, não tem retorno:
void mensagem() {
    printf("Bem-vindo!!\n");
}

// Função com variavel definida e com retorno:
int soma(int num1, int num2) {
    int resultado = num1 + num2;
    return resultado;
}

// Função void sem retorno, apenas imprime o caracter + 1;
void retorna_char(char caractere) {
    printf("%c", caractere + 1);
    
}

// Função Principal:

int main () {
    printf("Olá!\n");

    return 0;
}