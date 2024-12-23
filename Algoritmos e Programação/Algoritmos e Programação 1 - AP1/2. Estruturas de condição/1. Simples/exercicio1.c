/*
EXERCÍCIO 1: Faça um algoritmo que identifique se um valor é par ou ímpar.
*/

#include <stdio.h>

int main()
{
    // DECLARAÇÃO DE VARIÁVEIS
    int N = 0;
    
    printf("Digite um número: ");
    scanf("%d", &N);
    
    // VERIFICANDO SE O NÚMERO É PAR OU ÍMPAR
    if((N%2)==0){
        printf("Este número é par.\n");
    } else {
        printf("Este número é ímpar.\n");
    }

    return 0;
}
