#include<stdio.h>

/*Estrutura de repetição, While -> Utilizando quando se precisa de um loop 
onde não se tenha um numero fixo de elementos 
mas tenha um critério de parada e antes de iniciar o loop a condição é checada.

Problema:
Faça uma programa no qual receba e some numeros  inteiros 
até que a entrada seja 0 e apresente a soma no final

*/

int main () {

    int numero, soma =0;

    printf("Informe um numero: \n");
    scanf("%d", &numero);

    while (numero !=0){
        soma = soma + numero;
        // entrada:
        printf("Informe um numero: \n");
        scanf("%d", &numero);

    }
        printf("A soma é %d", soma);

        return 0;

}