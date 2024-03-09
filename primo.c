#include<stdio.h>

int main () {


    int p, i;
    int primo[0];

    printf("Digite um numero: ");
    scanf("%d", &p);

    for (i = 1; i <= p; i++) {
        if(p % i == 0 ) {
            primo[i];
            printf("O num")
        } else {
            printf("O numero %d não é primo!\n", p);
        }

    }




    return 0;
}