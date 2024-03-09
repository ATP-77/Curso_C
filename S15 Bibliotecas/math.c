#include<stdio.h>
#include<math.h> 
#define M_Pi  3.14159265358979323846



/* Para utilizar a biblioteca math
Funções trigonometricas: cos()


*/



int main () {

    int valor;
    printf("digite um valor: ");
    
    scanf("%d", &valor);

    double rad_valor = valor*(M_Pi/180);

    float res = cos(rad_valor);
    printf("O Cosseno do angulo %d é %f \n", valor, res);

    res = sin(rad_valor);
    printf("O seno do angulo %d é %f \n", valor, res);

    res = tan(rad_valor);
    printf("A tangente do angulo %d é %f \n", valor, res);

    res = sqrt(valor);  // -> Raiz quadrada
    printf("A raiz quadrada de %d é %f \n", valor, res);

    // Logaritimos:

    res = log(valor);
    printf("O valor do log de %d  é %lf\n", valor, res);

    res = log10(valor);
    printf("O valor do log na base 10 de %d  é %lf\n", valor, res);

    
    double a = 0;
    double b = 1;
    double c = 2;
    int d = 3;
    int e = 4;

    //Função exponencial:

    printf("O exponencial de %lf é %lf\n", a, exp(a));
    printf("O exponencial de %lf é %lf\n", b, exp(b));
    printf("O exponencial de %lf é %lf\n", c, exp(c));

    // Expoentes:

    printf("O valor de %d elevado a %d  é:  %lf \n", d, e, pow(d, e));

    // Arredondamento para cima:

   // arredonta para cima
    printf("O valor de Pi arredondado para cima é %lf\n ", ceil(M_Pi));

    // arredondamento para baixo:
    printf("O valor de Pi arredondado para baixo é %lf\n ", floor(M_Pi));


    


    return 0;



}