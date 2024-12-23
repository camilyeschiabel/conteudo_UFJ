/*
EXERCÍCIO 3: Faça um algoritmo que receba 3 números obrigatoriamente em ordem crescente e um
quarto número que não siga essa regra. Mostre, em seguida, os 4 números em ordem decrescente.
Assuma que o usuário digitará 4 números diferentes.

- UTILIZE ESTRUTURAS CONDICIONAIS ANINHADAS
*/

#include <stdio.h>

int main()
{
    // DECLARÇÃO DE VARIÁVEIS
    int N1 = 0;
    int N2 = 0;
    int N3 = 0;
    int N4 = 0;
    
    printf("Digite três números OBRIGATORIAMENTE em ordem crescente:\n");
    scanf("%d %d %d", &N1, &N2, &N3);
    printf("Ok, agora digite um único número fora dessa ordem:\n");
    scanf("%d", &N4);
    printf("Esses são os seus números em ordem decrescente:\n");
    
    // ASSUME-SE QUE OS TRÊS NÚMEROS FORAM REALMENTE DIGITADOS EM SEQUÊNCIA...
    
    // VERIFICANDO EM QUE POSIÇÃO O QUARTO NÚMERO SE ENCONTRA  E PRINTANDO EM ORDEM DECRESCENTE
    if (N4<N1 && N4<N2 && N4<N3){
        
        printf("%d - %d - %d - %d", N3, N2, N1, N4);
        
    } else {
        
        if (N4>N1 && N4<N2 && N4<N3){
            
            printf("%d - %d - %d - %d", N3, N2, N4, N1);
        
        } else {
            
            if (N4>N1 && N4>N2 && N4<N3){
                
                printf("%d - %d - %d - %d", N3, N4, N2, N1);
                
            } else {
               
                if (N4>N1 && N4>N2 && N4>N3){
                    
                    printf("%d - %d - %d - %d", N4, N3, N2, N1);
                    
                }
            }
        }
    } 

    return 0;
}
