/*
EXERCÍCIO O5: Escreva um algoritmo que pergunte qual o tempo transcorrido
em um cronômetro em horas, minutos e segundos e transforme (e imprima) todo 
este tempo em segundos.
*/

#include <stdio.h>

int main()
{
    // DECLARAÇÃO DE VARIÁVEIS
    int horas = 0;
    int minutos = 0;
    int segundos = 0;
    
    printf("Digite as horas:\n");
    scanf("%d", &horas);
    printf("Digite os minutos:\n");
    scanf("%d", &minutos);
    printf("Digite os segundos:\n");
    scanf("%d", &segundos);
    
    // CALCULANDO OS SEGUNDOS
    horas *= 3600;
    minutos *= 60;
    segundos += (horas+minutos);
    
    printf("O tempo cronometrado, em segundos, é igual a %d segundos.\n", segundos);

    return 0;
}
