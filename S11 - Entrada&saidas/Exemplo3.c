#include<stdio.h>

int main () {

    FILE *arq;

    char nome[100], *resultado;

    arq = fopen("arquivo.txt", "r"); //leitura

    if (arq) {
        while(!feof(arq)){  //FEOF - Find end o file
            resultado = fgets(nome, 100, arq); //File gets
            printf("Resultado: %d\n", resultado);
            if(resultado) {
                printf("%s", nome);

            }
            

        }
  
    }
    else{
        printf("Arquivo não localizado\n");
    }
    fclose(arq);
    return 0;
}