/*
Exercício 2: Faça um programa que calcule o fatorial de um número. Use o laço while.
*/
#include <stdio.h>

int main()
{
    // DECLARAÇÃO DE VARIÁVEIS
    int n = 0;
    int i = 1;  // Variável utilizada para controle de laço
    int fatorial = 1;   
    
    printf("Digite um número:\n");
    scanf("%d", &n);
    i = n;
    if (n<0){
        printf("ERRO! Não existe fatorial de número negativo.\n");
    } else {
        // CÁLCULO DO FATORIAL
        while(i!=0){
            fatorial *= i;
            i--;
        }
    }

    /*
    P.S. Da forma que o código foi construído, já há um tratamento para o caso
    de o usuário solicitar o fatorial de 0 (que é 1), graças a inicialização
    da variável "fatorial" com 1.
    */
    
    printf("O fatorial de %d é igual a %d.\n", n, fatorial);

    return 0;
}
