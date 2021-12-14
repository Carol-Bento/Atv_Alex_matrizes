/*2) Escreva um programa que recebe uma matriz 2x3 do usuário e diga qual o maior número 
e qual o menor número da matriz.*/

#include <stdio.h>
#define TAM_L 2
#define TAM_C 3
int main()
{
    int mat[TAM_L][TAM_C], maior, menor;
    
    printf("Preencha abaixo a matriz %dx%d: \n", TAM_L, TAM_C);
    for (int i = 0; i < TAM_L; i++){
        for(int j = 0; j < TAM_C; j++){
            scanf("%d", &mat[i][j]);
        }
    }
    
    for (int i = 0; i < TAM_L; i++){
        for(int j = 0; j < TAM_C; j++){
            scanf("%d", &mat[i][j]);
            
            if(maior == 0 && menor == 0){
                maior = mat[i][j];
                menor = mat[i][j];
            } else if (maior < mat[i][j]){
                maior = mat[i][j];
            } else if (menor > mat[i][j]){
                menor = mat[i][j];
            }
        }
    }
    
    printf("O maior número digitado foi %d, e o menor foi %d.", maior, menor);
}
