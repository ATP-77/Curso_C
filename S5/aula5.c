/* Estruturas de reptição: For, While, do while
Faça uma programa no qual receba 5 (for) numeros  inteiros 
até que a entrada seja 0

*/

#include <stdio.h>

int main () {

    //Variaveis de entrada:

    int numero, soma =0;

// Para o int i iniciando em 0; enquanto i < 5; incrementa o i em 1;
// inicialização, critério de parada, forma de incremento;

    for (int i =0; i< 5; i++) {
   
        printf("informe um numero: ");
        scanf("%d", &numero);

        // Processamento:

        soma = soma + numero;
     }



    //Saída:

    printf("A Soma é: %d\n", soma);



    return 0;
}
