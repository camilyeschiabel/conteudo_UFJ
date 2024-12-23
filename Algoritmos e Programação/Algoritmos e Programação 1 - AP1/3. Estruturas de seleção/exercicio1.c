/*
EXERCÍCIO 1: Faça um algoritmo que simula uma calculadora, usando escolha caso. 
O pseudocódigo terá como entrada dois valores do tipo inteiro e o tipo de operação: 
“+”, “-“, “/” e “*”.
*/

#include <stdio.h>

int main()
{
    // DECLARAÇÃO DE VARIÁVEIS
    int N1 = 0;
    int N2 = 0;
    char escolha;
    
    printf("Digite o primeiro número: ");
    scanf("%d", &N1);
    printf("Digite o segundo número: ");
    scanf("%d", &N2);
    printf("Agora, escolha uma operação:\n“+”, “-“, “/” e “*”\nR: ");
    scanf(" %c", &escolha);
    
    // ESCOLHA-CASO PARA A SELEÇÃO DA OPERAÇÃO
    switch(escolha){
        
        case '-':
        printf("Você selecionou a opção subtração...\n");
        printf("%d - %d = %d", N1, N2, (N1-N2));
        break;
        
        case '+':
        printf("Você selecionou a opção adição...\n");
        printf("%d + %d = %d", N1, N2, (N1+N2));
        break;
        
        case '*':
        printf("Você selecionou a opção multiplicação...\n");
        printf("%d * %d = %d", N1, N2, (N1*N2));
        break;
        
        case '/':
        printf("Você selecionou a opção divisão...\n");
        printf("%d / %d = %d", N1, N2, (N1/N2));
        break;
        
        default:
        printf("OPERAÇÃO SELECIONADA INVÁLIDA.\n");
        break;
        
    }

    return 0;
}
