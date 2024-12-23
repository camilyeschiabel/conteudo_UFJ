/******************************************************************************
EXERCÍCIO 01 - Escreva um programa em C que solicite ao usuario as dimensoes N x M
de duas matrizes A e B, leia os valores das matrizes do teclado e, em seguida, 
calcule e exiba a matriz C, onde cada elemento de C e a soma dos elementos 
correspondentes de A e B.
*******************************************************************************/

#include <stdio.h>

int main()
{
    int n = 0;
    int m = 0;
    int i, j;
    
    printf("Insira a dimensão das matrizes de entrada:\n");
    scanf("%d", &n);
    scanf("%d", &m);
    
    int m1[n][m];
    int m2[n][m];
    
    printf("Insira os elementos da primeira matriz:\n");
    
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%d", &m1[n][m]);
        }
    }
    
    i = 0;
    j = 0;
    
    printf("Agora, insira os elementos da segunda matriz:\n");
    
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%d", &m2[n][m]);
        }
    }
    
    i = 0;
    j = 0;
    
    printf("A soma dessas matrizes é igual à matriz:\n");
    
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("%d", m1[n][m]+m2[n][m]);
            printf("\t");
        }
        
        printf("\n");
    }
    
    
    return 0;
}