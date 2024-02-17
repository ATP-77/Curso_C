/*Faça um programa que:
a) Crie/abra um arquivo texto de nome arq.txt
b) Permita que o usuario grave diversos caracteres neste arquivo,até que o usuário entre com o 
caracter '0';
c) Feche o arquivo
d) Abrir e ler o arquivo, caracter por caracter e escreva na tela todos os armazenados*/

#include<stdio.h>

int main () {

    FILE *registro, *leitura;
    char  tool[15]; 

    registro = fopen("arq.txt", "wa");



        if(registro){
        printf("Informe uma ferramenta, ou 0 para sair!\n");
        fgets( tool, 15, stdin); //stdin = standart input -> entrada padrão
        while (tool[0] != '0'){
            fputs(tool, registro);
            printf("Informe uma ferramenta, ou 0 para sair!\n");
            fgets(tool, 10, stdin); //stdin = standart input -> entrada padrão

            }
        }else {
            printf("Não foi possível criar o arquivo!");
        }

        fclose(registro);
        registro = NULL;

        leitura = fopen("arq.txt", "r");
        
        if (leitura) {
            while ((tool[0] = getc(leitura))!= EOF){
                printf("%c\n", tool[15]);

            }

        }else {
            printf("Não foi possível abrir o arquivo!");
        }
        fclose(leitura);
        leitura = NULL;



    return 0;
}