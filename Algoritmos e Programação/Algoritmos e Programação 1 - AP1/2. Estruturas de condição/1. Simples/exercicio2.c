/*
EXERCÍCIO 2: Faça um algoritmo que leia dois valores e identifique o maior deles..
*/

#include <stdio.h>

int main()
{
    // DECLARAÇÃO DE VARIÁVEIS
    int N1 = 0; 
    int N2 = 0;
    
    printf("Digite o primeiro número:\n");
    scanf("%d", &N1);
    printf("Digite o segundo número:\n");
    scanf("%d", &N2);
    
    // VERIFICANDO QUEM É O MAIOR NÚMERO
    if(N1>N2){
        printf("O primeiro número, que é %d, é maior que o segundo, que é %d.\n", N1, N2);
    } else {
        printf("O segundo número, que é %d, é maior que o primeiro, que é %d.\n", N2, N1);
    }
    return 0;
}
