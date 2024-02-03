/* Vetores parte 2:*/

#include <stdio.h>

int main () {
     int numeros [6];

     numeros[0] = 1;
     numeros[1] = 3;
     numeros[2] = 8;
     numeros[3] = 7;
     numeros[4] = 9;
     numeros[5] = 4;

    //vetores e reais:

    float valores [6];

    for (int i =0; i < 5; i++) {
        valores [i] = (float)numeros[i] /(float)2;
    }

    for (int i = 5; i >= 0; i--) {
        printf("%.2f\n", valores [i] );

    }

    return 0;

}