#include<stdio.h>

#ifndef PI
// constantes:
#define PI  3.14567

#endif

//ifndef - diretiva de compilação


int main () {

    int valor = 5;

    printf("O valor é %d\n", valor);

    printf("PI vale %f\n",( 2* PI));

    #ifdef PI
        printf("O valor de Pi é %f\n", PI);
        #endif



    return 0;
}