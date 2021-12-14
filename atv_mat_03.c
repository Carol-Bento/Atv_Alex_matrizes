/*3) Faça um programa que preencha dois vetores, X e Y, com dez números inteiros cada. 
Mova os valores desses vetores para uma matriz 2x10 e mostre os valores da matriz.*/

#include <stdio.h>
#define TAM 10
int main()
{
   int X[TAM], Y[TAM], mat[2][TAM];
   
   printf("Preencha os 10 valores do vetor X: \n");
   for(int i = 0; i < TAM; i++){
       scanf("%d", &X[i]);
       mat[0][i] = X[i];
   }
   
    printf("Preencha os 10 valores do vetor Y: \n");
    for(int i = 0; i < TAM; i++){
       scanf("%d", &Y[i]);
       mat[1][i] = Y[i];
    }
    
    printf("Matriz resultante: \n");
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < TAM; j++){
            printf("%d\t", mat[i][j]);
        }
        printf("\n");
    }
    return 0;
}
