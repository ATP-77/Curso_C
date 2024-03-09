#include<stdio.h>
#include<string.h>  //Manipulação de strings

/*
strcpy() -> copia string
strcat() -> concatena strings
strcmp() -> Compara duas strings
strchr() -> localiza uma string
strtok() -> divide uma string em sbustring, com base em um caracter;
strlen() -> retorna o tamanho da string;
*/



int main () {

    char str1[20], str2[20];

    printf("Digite a primeira string: ");
    
    scanf("%s", &str1);
  

    printf("Digite a segunda string: ");
    
    scanf("%s", &str2);

    printf("O tamanho da string %d, %d\n", strlen(str1), strlen(str2));
    

    //strcpy(str1, "Quinta-"); 
    //strcpy(str2, "feira");



    if (strcmp(str1, str2)) {
        printf("As strings são diferentes!\n");
            
        }else {
            printf("As strings são iguais!\n");
        }
    
    strcat(str1, str2); // concatena strings
    printf("%s\n", str1);

    char str3[] = "anyone@anywhere.com";
    char car = '@';
    char *ret = strchr(str3, car);

    printf("A partir do %c esta %s\n",car, ret);

    char str4[] = "anyone@anywhere.com";
    printf("Usuário %s\n",strtok(str4, "@"));

   





    

    return 0;
}