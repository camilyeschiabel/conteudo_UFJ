/*
EXERCÍCIO 2: Faça um algoritmo que leia dois valores e identifique o maior deles..
*/

#include <stdio.h>

int main()
{
    // DECLARAÇÃO DE VARIÁVEIS
    int N1 = 0;
    int N2 = 0;
    int N3 = 0;
    
    printf("Digite o primeiro número:\n");
    scanf("%d", &N1);
    printf("Digite o segundo número:\n");
    scanf("%d", &N2);
    printf("Digite o terceiro número:\n");
    scanf("%d", &N3);
    
    // VERIFICANDO QUEM É O MAIOR NÚMERO
    if(N1>N2 && N1>N3){
        printf("O primeiro número, que é %d, é o maior.\n", N1);
    } else if (N2>N1 && N2>N3){
        printf("O segundo número, que é %d, é o maior.\n", N2);
    } else {
        printf("O terceiro número, que é %d, é o maior.\n", N3);
    }
    
    return 0;
}
