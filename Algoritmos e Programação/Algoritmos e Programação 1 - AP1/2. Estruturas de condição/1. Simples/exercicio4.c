/*
EXERCÍCIO 4:  O número 3025 possui a seguinte característica:
30+25 = 55
55^2 = 3025
Faça um algoritmo que leia um número válido (1000 <= número <= 9999) e mostre se esse número tem a característica ou não. 
*/


#include <stdio.h>

int main()
{
    // DECLARAÇÃO DE VARIÁVEIS
    int N = 0;
    int p1 = 0; // compreende os dois primeiros dígitos de N
    int p2 = 0; // compreende os dois últimos dígitos de N
    int soma = 0; 
    
    printf("Digite um número de quatro algarismos:\n");
    scanf("%d", &N);
    
    if(N < 1000 || N > 9999) {
        printf("Este número não tem quatro algarismos.\n");  // TRATAMENTO DE ERRO
    } else {
        
        // CALCULANDO PRIMEIRA E SEGUNDA PARTES DO NÚMERO N
        p1 = N / 100; 
        p2 = N % 100; 
        soma = p1 + p2;
        
        // VERIFICANDO A EXISTÊNCIA DA PROPRIEDADE
        if ((soma*soma)==N){
            printf("O número possui a propriedade.\n");
        } else {
            printf("O número não possui a propriedade.\n");
        }
    }
   
    return 0;
}
