#include<stdio.h>

// Recursividade;
/* É o ato de uma funçao chamar a si mesma.
OBS: É importante que a função recursiva tenha condição de parada!

Linguagens funcionais: Elixir  -> pesquisar! */

int fib(int n){
    if(n == 0) {
        return 0;
    }

    if (n == 1) {
        return 1;
    }

    return fib(n - 1) + fib(n - 2);
};

int main () {

    int qtd;

    printf("Informe o tamanho da sequencia fibbonaci: ");
    scanf("%d", &qtd);

    for ( int i = 0; i < qtd; i++){
        printf("%d\n", fib(i + 1));
    }

    return 0;
}