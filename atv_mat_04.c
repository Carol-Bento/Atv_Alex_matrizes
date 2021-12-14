/*4) Faça um programa que preencha uma matriz 4x2 com valores inteiros, calcule e mostre dois vetores resultantes. 
O primeiro vetor resultante deve conter os números positivos; o segundo deve conter os números negativos. 
Cada vetor resultante vai ter, no máximo, oito posições, que poderão não ser completamente utilizadas.*/

#include <stdio.h>
#define TAM_L 4
#define TAM_C 2 
#define TAM_V 8
int main()
{
    int mat[TAM_L][TAM_C], positivo[TAM_V], negativo[TAM_V];
    
    printf("Preencha abaixo a matriz %dx%d: \n", TAM_L, TAM_C);

    for (int i = 0; i < TAM_L; i++){
        for(int j = 0; j < TAM_C; j++){
            scanf("%d", &mat[i][j]);
        }
    }

    for(int v = 0; v < TAM_V; v++){
        for (int i = 0; i < TAM_L; i++){
            for(int j = 0; j < TAM_C; j++){
                if(mat[i][j] > 0){
                    positivo[v] = mat[i][j];
                } else if (mat[i][j] < 0){
                    negativo[v] = mat[i][j];
                }
            }
        }
    }
    
    printf("Positivos: \n");
    for(int i = 0; i < TAM_V; i++){
        printf("%d\t", positivo[i]);
    }
    
    printf("Negativos: \n");
    for(int i = 0; i < TAM_V; i++){
        printf("%d\t", negativo[i]);
    }
    return 0;
}
