/*
EXERCÍCIO 2: Receber um número do teclado e informar se ele é divisível por 10, 5 e 2
simultaneamente. Caso não seja, informar que não é divisível.

- UTILIZE ESTRUTURAS CONDICIONAIS ANINHADAS
*/

#include <stdio.h>

int main()
{
    // DECLARAÇÃO DE VARIÁVEIS
    int N = 0;
    
    printf("Digite um número: ");
    scanf("%d", &N);
    
    // VERIFICANDO SE É SIMULTANEAMENTE DIVISÍVEL POR 10, 5 E 2
    if ((N%10)==0){
        if((N%5)==0){
            if(N%2==0){
                printf("Este número é simultaneamente divisível por 10, 5 e 2.\n");
            } else {
                printf("Este número NÃO é simultaneamente divisível por 10, 5 e 2.\n");
            }
        } else {
            printf("Este número NÃO é simultaneamente divisível por 10, 5 e 2.\n");
        }
    } else {
        printf("Este número NÃO é simultaneamente divisível por 10, 5 e 2.\n");
    }

    return 0;
}
