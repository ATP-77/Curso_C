// Tipos de dados em C:  -> Numéricos: Inteiros e reais:

#include <stdio.h>

int main () {

    // Inteiro:
    float nota1, nota2;  // 1, 2, 3, 1245....

    // Reais:
    float media;  // 1.23, 1.45 ...

    printf("Qual a primeira nota?\n");
    scanf("%f", &nota1);

    printf("Qual a segunda nota?\n");
    scanf("%f", &nota2);

    media = (nota1 + nota2) * 0.5;

    printf("Sua media é %.1f\n", media);

    return 0;
}
