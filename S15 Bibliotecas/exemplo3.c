#include<stdio.h>
#include<stdlib.h>

int main () {

    div_t saida;  // divisão com saida do cociente e também do resto
    saida = div(27, 4); // 27/4
    printf("O cociente de (27/4) é %d\n", saida.quot);
    printf("O resto de 27 / 4 é %d\n", saida.rem);

                 
    saida = div(27, 3); // 27/4
    printf("O cociente de (27/3) é %d\n", saida.quot);
    printf("O resto de 27 / 3 é %d\n", saida.rem);


    return 0;
}