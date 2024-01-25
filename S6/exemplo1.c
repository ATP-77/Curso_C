// Tipos de dados em C:  -> Numéricos: Inteiros e reais:

#include <stdio.h>

int main () {

    // Inteiro:
    double nota1, nota2;  // 1, 2, 3, 1245....

    // Reais:
    float media;  // 1.23, 1.45 ...

    printf("Qual a primeira nota?\n");
    scanf("%lf", &nota1); // %lf -> tipo de dado double

    printf("Qual a segunda nota?\n");
    scanf("%lf", &nota2);  // %lf -> tipo de dado double

    media = (nota1 + nota2) * 0.5;

    printf("Sua media é %.1lf\n", media);  // %lf -> tipo de dado double

    return 0;
}
