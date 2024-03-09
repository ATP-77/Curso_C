#include<stdio.h>
#include<time.h>  //Funçoes de data e hora;

/*
clock() -> retorna o numero de pulsos, clock desde que o programa foi iniciado.*/


int main () {

long int clock_t, inicio_t, fim_t, total_t;

inicio_t = clock();
printf("Iniciando o programa, inicio t = %ld\n", inicio_t);

printf("Iniciar loop grande, inicio_t = %ld\n", inicio_t);
for (long int i =0; i < 1000000000; i++) {}

fim_t = clock();
printf("Fim do loop grande , fim_t = %ld\n", fim_t);

total_t = (double) (fim_t - inicio_t) / (CLOCKS_PER_SEC); //função que conta a quantidade de clocks que o processador usar para realizar a tarefa.

printf("Clocks por segundo: %ld\n", CLOCKS_PER_SEC);

printf("Tempo total usado pela CPU: %lf\n", (double) total_t);
printf("Finalizando o programa!\n");

    return 0;
}