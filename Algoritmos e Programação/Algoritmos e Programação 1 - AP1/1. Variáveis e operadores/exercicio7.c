/*
EXERCÍCIO O7: Elabore um algoritmo para inverter um número (um único valor com dois
algarismos), dado pelo usuário. Por exemplo, se a entrada fosse 25, a saída deveria ser 52.
Dica: Lembre-se de que um número com dois algarismos é composto pela dezena e pela 
unidade. 
*/

#include <stdio.h>

int main()
{
    // DECLARAÇÃO DE VARIÁVEIS
    int N = 0;
    
    printf("Digite um número inteiro de dois algarismos:\n");
    scanf("%d", &N);
    
    // INVERTENDO O NÚMERO
    N = (N/10)+((N%10)*10);
    
    printf("Seu número, com os algarismos invertidos, é %d.", N);
    
    return 0;
}
