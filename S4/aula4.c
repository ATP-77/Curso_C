//Estruturas de decisão if, else:
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade;
    printf("Qual é a sua idade ?\n");
    scanf("%d", &idade);

    if (idade < 18) {
        printf("Você é menor de idade \n");
    }
    
    else if (idade > 18  && idade < 60){

        printf("Você é adulto!! \n");
    }
    else {
        printf("\nVocê é idoso!\n");
    }
    
    

    printf("Sua idade é %d\n", idade);
    return 0;
}