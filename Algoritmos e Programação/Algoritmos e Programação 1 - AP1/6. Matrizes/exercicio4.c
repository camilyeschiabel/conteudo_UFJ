/******************************************************************************
EXERCÍCIO 04 - Escreva um programa em C que leia uma matriz quadrada A de ordem 
N x N e verifique se ela é simétrica. Uma matriz é considerada simétrica se, 
para todo par de índices i e j, o elemento A[i][j] é igual ao elemento A[j][i]. 
O programa deve exibir uma mensagem indicando se a matriz é ou não simétrica.
*******************************************************************************/

#include <stdio.h>

int main()
{
    int n = 0;
    int m = 0;
    int i, j;
    int ref = 0;
    
    printf("Insira a dimensão da matriz quadrada de entrada:\n");
    scanf("%d", &n);
    
    int a[n][n];
    
    printf("\nInsira os elementos da matriz:\n");
    
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("Elemento da linha %d, coluna %d: ", i+1, j+1);
            scanf("%d", &a[i][j]);
        }
    }
    
    // Loop para verificar índices
    for(i=0;i<n;i++){
        for(j=0;j<i;j++){
            if (a[i][j] != a[j][i]){
                ref = 1;
                break;
            }
        }
    }
    
    if(ref==1){
        printf("\nA matriz não é simétrica.\n");
    } else{
        printf("\nA matriz é simétrica.\n");
    }
    
    return 0;
    
}