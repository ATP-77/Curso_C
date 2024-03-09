/* Considerando a estrutura que representa um vetor no R3:

struct Vetor{
    float x;
    float y;
    float z;
};
Implemente um programa que receba, calcule  e apresente a soma de dois vetores.*/

#include<stdio.h>

struct st_vetor {
    float x;
    float y;
    float z;
  
};
    struct st_vetor vetorA;
    struct st_vetor vetorB;
   


int main () {

    float x, y, z;

    printf("Digite o primeiro vetor: ");

    
    scanf("%f%f%f", &vetorA.x,&vetorA.y,&vetorA.z);
    printf("O primeiro vetor é %.2fx  %.2fy  %.2fz\n",vetorA.x,vetorA.y, vetorA.z);

    printf("Digite o segundo vetor: ");
    scanf("%f%f%f", &vetorB.x,&vetorB.y,&vetorB.z);
    printf("O segundo vetor é %.2fx  %.2fy  %.2fz\n",vetorB.x,vetorB.y, vetorB.z);

    x = (vetorA.x + vetorB.x);
    y = (vetorA.y + vetorB.y);
    z = (vetorA.z + vetorB.z);




    printf("O resultado é : %.2fx  %.2fy  %.2fz\n",x, y, z );
   








    return 0;
}