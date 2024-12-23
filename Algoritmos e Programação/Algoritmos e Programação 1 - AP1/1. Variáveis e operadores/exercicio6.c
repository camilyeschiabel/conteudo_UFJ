/*
EXERCÍCIO O6: Escreva um algoritmo que realize o processo inverso à questão anterior, 
ou seja, pergunte qual o tempo transcorrido em um cronômetro medido em segundos e o
transforme em horas, minutos e segundos correspondentes.

*/

#include <stdio.h>

int main()
{
    // DECLARAÇÃO DE VARIÁVEIS
    int horas = 0;
    int minutos = 0;
    int segundos = 0;
    
    printf("Digite o tempo em segundos:\n");
    scanf("%d", &segundos);
    
    // CALCULANDO HORAS, MINUTOS E SEGUNDOS
    horas = segundos/3600;
    minutos = (segundos%3600)/60;
    segundos = (segundos%3600)%60;
    
    printf("O tempo cronometrado em segundos é igual a:\n");
    printf("Horas: %d\nMinutos: %d\nSegundos restantes: %d\n", horas, minutos, segundos);
    
    return 0;
}
