#include<stdio.h>

int main () {

    FILE *arq;
    char c;

    arq = fopen("arquivo.txt", "r"); //leitura

    if (arq) {
        while ((c = getc(arq))!= EOF) { //getc ->pega todos os caracteres do arquivo
            printf("%c", c);            // EOF - > End of file;

        }
       
        
        printf("\nArquivo localizado!\n");
    }
    else {
        printf("Arquivo não localizado!\n");
    }

    fclose(arq);


    return 0;
}