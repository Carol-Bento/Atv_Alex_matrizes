/*1) Escreva um programa que recebe um matriz 3x4 do usuário e escreve a média dos valores na matriz.*/

#include <stdio.h>
#define TAM_L 3
#define TAM_C 4 
int main()
{
    int mat[TAM_L][TAM_C], soma, divi;
    divi = TAM_L * TAM_C;
    float media;
    printf("Preencha abaixo a matriz %dx%d: \n", TAM_L, TAM_C);

    for (int i = 0; i < TAM_L; i++){
        for(int j = 0; j < TAM_C; j++){
            scanf("%d", &mat[i][j]);
            soma = soma + mat[i][j];
        }
    }
    
   media = (soma/divi);
   
   printf("A média de todos os valores da matriz é %0.2f", media);
    return 0;
}
