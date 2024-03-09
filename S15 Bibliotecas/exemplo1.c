#include<stdio.h>  // biblioteca de entrada e saída

//scanf, printf, fopen, fclose, fscanf, gets(), fputs, fgets, getchar

// Tratamento de erros:  feof

#include<stdlib.h> /*
atof() -> converte string para double
atoi() -> converte string para int;
atol() -> converte string para inteiro longo;

Geração de sequencia  pseudo aleatória:
rand() -> gera numeros aleatórios
srand()

Gerenciamento de memoria dinamica:
//malloc(), calloc(), free, realoc()

Pesquisa e ordenação:
Ordena os elementos de um array

*/

#include<string.h>  // biblioteca para trabalhos com string



int main () {

    __time_t  t;

    srand((unsigned) time(&t)); // gera numeros aleatórios em função do tempo

    for (int i = 0; i < 6; i++) {
        printf("%d\n", rand() % 61);  // Gera numeros aleatórios até o 60;
    }

    /*char valor_s[5];
    double valor_d;

    strcpy(valor_s, "4.5");

   

    valor_d = atof(valor_s);
    printf("o valor é  %.2f\n", valor_d);


   // int num1, num2, soma;

    /*printf("Informe o primeiro numero: ");
    fflush(stdout); // limpa o buffer de memoria
    scanf("%d", &num1);
    printf("Insira o segundo numero: ");
    fflush(stdout);
    scanf("%d", &num2);
    

    soma = num1 + num2;

    printf("o Valor da soma é: %d \n", soma);*/



    return 0;
}


