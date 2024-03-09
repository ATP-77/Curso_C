#include<stdio.h>

//Enum -> Enumeração

enum dias_da_semana{
    segunda,
    terça,
    quarta,
    quinta,
    sexta,
    sabado,
    domingo
};



int main () {
    enum dias_da_semana d1, d2;

    int numeros[5];

numeros[0] = 3;
numeros[1] = 5;
numeros[2] = 7;
numeros[3] = 9;
numeros[4] =11;

    d1 = quinta;
    d2 = 3;

    if(d1 == d2) {
        printf("Os dias são iguais...\n");
    }else{
        printf("Os dias não são iguais!\n");
    }

    printf ("Numeros 0 = %d\n", numeros[0]);
    printf ("Numeros 4 = %d\n", numeros[4]);
    printf ("Numeros 14 = %d\n", numeros[14]);

    return 0;
}