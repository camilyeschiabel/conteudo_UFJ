/*
Exercício 3: Faça um programa que receba um valor positivo e verifique se ele é um número primo. 
*/

#include <stdio.h>
#include <stdbool.h>

int main()
{
    int n = 0;
    int i = 2;
    bool encontrado = false;
    
    printf("Digite um número: ");
    scanf("%d", &n);
    
    if (n <= 1) {
        printf("Número inválido. Digite um número positivo maior que 1.\n");
        return 1;
    }
    
    while (i <= n / 2) {
        if (n % i == 0) {
            encontrado = true;
            break;
        }
        i++;
    }
    
    if (encontrado){
        printf("Este número não é primo.\n");
    } else {
        printf("Este número é primo.\n");
    }
    return 0;
}