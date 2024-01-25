/* Tipo de dados:
Booleanos - Verdadeiros/Falsos 
Na linguagem C não existem variaveis boolean, mas reconhece o valor 0 = falso(false) e 
qualquer outro valor como verdadeiro(true)*/

#include <stdio.h>


int main () {

    int booleano = 1;

    if (booleano){
        printf("Verdadeiro!\n");
    }
    else { 
        printf("Falso!\n");
    }

    return 0;
}