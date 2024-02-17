#include<stdio.h>

int main() {
    FILE *arq;
    char fruta[10];

    arq = fopen("exemplo.txt", "a"); // w - cria ou sobrescreve o arquivo.| a - append

    if(arq){
        printf("Informe uma fruta, ou 0 para sair!\n");
        fgets(fruta, 10, stdin); //stdin = standart input -> entrada padrão
        while (fruta[0] != '0'){
            fputs(fruta, arq);
            printf("Informe uma fruta, ou 0 para sair!\n");
            fgets(fruta, 10, stdin); //stdin = standart input -> entrada padrão

        }

    }else{
        printf("Nao foi possivel criar o arquivo!");
    }
    fclose(arq);
    return 0;
}