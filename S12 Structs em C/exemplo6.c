#include<stdio.h>
#include<string.h>


// A union, separa e utiliza apenas o espaço da maior variável. Util para economizar memoria.
union pessoa{
    char nome[100]; // 1 char = 1 byte -> 1 * 100 = 100 bytes
    int idade; // 4 bytes -> total de 104 bytes
};


int main () {

    union pessoa pes;

    strcpy(pes.nome, "Andre Thiago");  //strcpy -> string copy
    printf("Dados de %s\n", pes.nome);

    pes.idade = 47;
    printf("Idade igual %d anos\n", pes.idade);

    printf("A variável 'pes' está ocupando %ld bytes em memória\n", sizeof(pes));
    

   /* int numero = 42;  //sizeof - tamanho de:
    float nota = 7.9;
    char letra = 'd';
    double outraNota = 10.4;
    
    printf("A variavel 'numero' tem valor %d e ocupa %ld bytes em memoria\n", numero, sizeof(numero));
    printf("A variavel 'nota' tem valor %.2f e ocupa %ld bytes em memoria\n", nota, sizeof(nota));
    printf("A variavel 'letra' tem valor %c e ocupa %ld bytes em memoria\n", letra, sizeof(letra));
    printf("A variavel 'outraNota' tem valor %.2f e ocupa %ld bytes em memoria\n", outraNota, sizeof(outraNota));

    // %ld  -> long int*/

    return 0;

}