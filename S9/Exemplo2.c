#include<stdio.h>

/*UsandoFunções:

main -> Principal

*/

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
    mensagem();
    int retorno = soma(4, 9);
    printf("Retorno = %d\n", retorno);
    printf("Resultado = %d\n", soma(5,7));

    char cara = 104;
    retorna_char(cara);

    return 0;
}




