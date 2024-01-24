/*Três amigos jogaram na loteria. Caso eles ganhem, o prêmio deve ser repartido proporcionalmente ao
valor que cada um deu para a realização da aposta. Faça um programa que leia quanto cada apostador
apostou, o valor do prêmio e imprima quanto cada um ganharia do prêmio com base no valor investido.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {

    float valor1, valor2, valor3, total =0;
    float premio =0;
    float porcentagem1, porcentagem2, porcentagem3, porcentagem_total =0;
    float premio1, premio2, premio3, total_premios=0;

    printf("Valor apostado pelo primeiro jogador: ");
    scanf("%f", &valor1);

    printf("Valor apostado pelo segundo jogador: ");
    scanf("%f", &valor2);

    printf("Valor apostado pelo terceiro jogador: ");
    scanf("%f", &valor3);

    total = (float)(valor1 + valor2 + valor3);
    printf("somatória das apostas dos jogadores %.2f\n", total);

    printf("Insira o valor do Prêmio do jogo: ");
    scanf("%f", &premio);

    porcentagem1 = (float)(valor1 / total);
    printf("Porcentual do apostador 01: %.3f\n", porcentagem1);

    porcentagem2 = (float)(valor2 / total);
    printf("Porcentual do apostador 01: %.3f\n", porcentagem2);

    porcentagem3 = (float)(valor3 / total);
    printf("Porcentual do apostador 01: %.3f\n", porcentagem3);

    premio1 =(float)(premio * porcentagem1);
    printf("Parte do premio apostador 01: %.2f\n", premio1);

    premio2 =(float)(premio * porcentagem2);
    printf("Parte do premio apostador 01: %.2f\n", premio2);

    premio3 =(float)(premio * porcentagem3);
    printf("Parte do premio apostador 01: %.2f\n", premio3);

    total_premios = (float)(premio1 + premio2 + premio3);
    printf("Somatório após partilha: %.3f \n", total_premios);

    return 0;
}
