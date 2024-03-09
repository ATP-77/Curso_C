#include <stdio.h>
#include <time.h>

/* time -> retorna o tempo atual do calendário
 localtime() -> converte o valor time para hora local.
 https://pt.wikipedia.org/wiki/Era_Unix */

int main () {
    time_t segundos;
    time_t tempobruto;

    struct tm *info;
    {
        
    };

    time(&tempobruto);

    info = localtime(&tempobruto);
    printf("Data e hora local = %s\n", asctime(info));
    
    segundos = time(NULL);
    printf("Hora Unix desde 01/01/1970! = %ld\n", segundos/3600);





    return 0;
}