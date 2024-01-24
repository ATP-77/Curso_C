#include<stdio.h>

/* Estrutura de repetição:
do while: faça enquanto...
Utilizando quando se precisa de um loop  onde não se tenha um numero fixo de elementos 
mas tenha um critério de parada e a condição de parada é checada após a primeira execução 

Problema:
Faça uma programa no qual receba e some numeros  inteiros 
até que a entrada seja 0 e apresente a soma no final*/

int main(){

    int numero, soma =0;

    do {
        // entrada:
        printf("Informe um numero: \n");
        scanf("%d", &numero);

        // Processamento:
        soma = soma + numero;

    }
    while (numero !=0);

        printf("A soma é %d\n", soma);


    return 0;
}