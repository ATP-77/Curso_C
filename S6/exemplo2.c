/*Tipos de dados em C:  -> Alfanuméricos: Caracteres e strings*.
// Na linguagem C não exite o tipo de dado string.  ("dfjsjfslk" -> String), 
('Caracter' -> caracter)
*/

#include <stdio.h>


int main () {

    char opcao;
    printf("informe uma opção: \n");
    printf("A - Saldo da conta\nB - Extrato da conta\nC - Limite da  conta\n");

    scanf("%c", &opcao);

    if ( opcao == 'a' ) {
        printf("Seu sado é igual .....\n");
        
        }
    else if (opcao == 'b') {
        printf("Extrato da conta....\n");
    }
    else if (opcao == 'c') {
        printf("Seu limite é....\n");
    }
    else {
        printf("Opcao incorreta...\n");
    }

    // Geração de alfabeto ASCII completo:
    for (int i = 97; i <= 122; i++){
        printf("%c\n", i);
    }

    return 0;
}