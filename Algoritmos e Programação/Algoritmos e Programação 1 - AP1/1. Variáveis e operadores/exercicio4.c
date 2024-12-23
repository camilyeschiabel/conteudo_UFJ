/* 
EXERCÍCIO 04: Escreva um algoritmo que leia uma temperatura em graus Farenheit e a imprima em graus 
Centígrados. A conversão de graus Farenheit para Centígrados é obtida por C=(5/9)(F-32).
*/

#include <stdio.h>

int main (){

    // DECLARAÇÃO DE VARIÁVEIS
    float temperatura_F = 0; 
    float temperatura_C = 0;
    
    printf("Por favor, informe a temperatura em graus Farenheit.\nR: ");
    scanf("%f", &temperatura_F);

    // CALCULANDO A CONVERSÃO PARA CELSIUS
    temperatura_C = (5.0/9.0)*(temperatura_F - 32);

    printf("Esta temperatura, em graus Centígrados, é igual a %.2f°C.", temperatura_C);

}