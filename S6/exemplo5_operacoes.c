/* Operações Matemáticas
Soma: +
Subtração: -
multiplicação *
Divisão /
Elevar: ** (x**2)
modulo: resto da divisão de x por y %

*/


#include <stdio.h>

int main () {

    int num1, num2, res;
    float resdiv;

    printf("Informe o primeiro numero:\n");
    scanf("%d", &num1);

    printf("Informe o primeiro numero:\n");
    scanf("%d", &num2);


    //Soma:
    res = num1 + num2;
    printf("O resultado da soma é: %d \n", res);

    // Subtração:
    res = num2 - num1;
    printf("O resultado da subtração é: %d \n", res);

    // multiplicar:
    res = num1 * num2;
    printf("O resultado da multiplicação é: %d \n", res);

    // Divisão: (cast)
    resdiv = (float)num2 / (float)num1;
    printf("O resultado da divsisão é: %.3f \n", resdiv);

    // Exponenciação:
    res = num1 * num1;
    printf("O resultado do expoente é: %d \n", res);

    // Módulo(verificar se par ou impar):
    if (num1 % num2 ==0) {
        printf("%d é par!\n", num1);
    }
    else {
        printf("%d é impar!\n", num1);
    }



}