#include<stdio.h>
#include<stdlib.h>

int compara(int *x, int *y){
    if(*x > *y){
        return 1;
    } else if(*y == *x) {
        return 0;

    } else{
        return -1;
    }
}

int main () {

    int numero[] = {4, 6, 3, 8, 1, 7, 9};

    qsort (numero, 7, sizeof(int),(void*)compara);  // qsort -> ordena elementos de um array/vetor

    for (int i =0; i < 7; i++) {

        printf("%d\t", numero[i]);
    }



    return 0;
}