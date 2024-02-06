// Matrizes parte 2:
#include <stdio.h>

int main () {

    // matrizes de inteiros

    int numeros [2][2] = {9,1, 5,6};

    for (int i =0; i < 2; i++) {
        for (int j =0; j < 2; j++) {
            printf("numeros[%d][%d] vale %d \n",i, j,  numeros [i][j]);
        }
    }


    // Numeros inteiros:


    float valores [2][2];

    for (int i =0; i < 2; i++) {           
        for (int j =0; j < 2; j++) {
            

                valores [i][j] = (float)numeros[i][j] / 2;
                printf ("Valores da matriz [%d][%d] é igual  %.2f\n",i,j, valores [i][j]);

        }
        
    }

    return 0;
}