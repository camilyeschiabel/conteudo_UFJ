/*
EXERCÍCIO O2: Considerando o seguinte trecho do algoritmo:
A, B, C: inteiro;
A <- 1
B <- 2
C <- 3

a) Complete-o de modo que, ao final do algoritmo, o conteúdo de A seja 3, de B seja 1 e de C seja 2. 
Use apenas atribuições entre variáveis. Ao final escreva na tela os valores de A, B e C (nesta ordem), 
para verificar se está correto.
b) Modifique o programa anterior de modo que você consiga o mesmo resultado sem usar uma variável 
auxiliar.
*/

#include <stdio.h>

int main (){

    // DECLARAÇÃO DAS VARIÁVEIS SIMPLES
    int A, B, C;
    A = 1;
    B = 2;
    C = 3;
    int aux = 0;  // variável auxiliar

    printf("Valores iniciais das variáveis: A = %d, B = %d e C = %d.\n\n", A, B, C);

    // PROCEDIMENTO DE TROCA SOLICITADO NA LETRA A: 
    aux = A;
    A = C;
    C = B;
    B = aux;
    printf("-> O procedimento solicitado na letra A foi realizado.\n");
    printf("Os valores das variáveis foram atualizados para: A = %d, B = %d e C = %d.\n\n", A, B, C);
    
    // P.S. Antes de fazer a letra B, voltei os valores anteriores das variáveis.
    A = 1;
    B = 2;
    C = 3;
    
    // PROCEDIMENTO DE TROCA SOLICITADO NA LETRA B 
    A = C;
    C = B;
    B = A - C;
    printf("-> O procedimento solicitado na letra B foi realizado.\n");
    printf("Os valores das variáveis foram atualizados para: A = %d, B = %d e C = %d.\n", A, B, C);
}