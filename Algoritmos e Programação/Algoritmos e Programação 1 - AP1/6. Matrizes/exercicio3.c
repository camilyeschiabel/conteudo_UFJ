/******************************************************************************
EXERCÍCIO 03 - Desenvolva um programa em C que leia uma matriz A de dimensoes N x M,
calcule a matriz transposta AT e exiba o resultado. A matriz transposta é formada
invertendo-se as linhas e colunas de A.
*******************************************************************************/

#include <stdio.h>

int main()
{
    int n = 0;
    int m = 0;
    int i, j;
    
    printf("Insira a dimensão da matriz de entrada:\n");
    scanf("%d", &n);
    scanf("%d", &m);
    
    int a[n][m];
    int aT[m][n];
    
    printf("Insira os elementos da matriz:\n");
    
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("Elemento da coluna %d, linha %d: ", j+1, i+1);
            scanf("%d", &a[i][j]);
        }
    }
    
    // Loop para calcular a matriz transposta
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            aT[j][i] = a[i][j];
        }
    }
    
    printf("A matriz transposta é:\n");
    
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d", aT[i][j]);
            printf("\t");
        }
        
        printf("\n");
    }
    
    return 0;
    
}