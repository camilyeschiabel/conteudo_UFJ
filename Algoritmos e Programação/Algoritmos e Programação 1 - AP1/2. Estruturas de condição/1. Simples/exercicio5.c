/*
EXERCÍCIO 5 (Beecrowd): Leia a hora inicial e a hora final de um jogo. Caso o usuário insira um valor inválido (negativo), o 
algoritmo trará a seguinte mensagem: “Valor inválido”. Se for um valor válido (positivo), então calcule a duração do 
jogo, sabendo que ele pode começar em um dia e terminar em outro, tendo uma duração mínima de 1 hora e máxima 
de 24 horas.
*/

#include <stdio.h>

int main() {
    
    // DECLARAÇÃO DE VARIÁVEIS
    int h_inicial = 0;
    int h_final = 0;
    int resultado = 0;

    printf("Digite a hora de início e de fim do jogo (em formato 24hrs):\n");
    scanf("%d %d", &h_inicial, &h_final);

    // TRATAMENTO DE ERRO
    if (h_inicial < 0 || h_final < 0) {
        printf("Valor inválido.\n");      
    } else if (h_inicial >= 24 || h_final >= 24) {
        printf("Valor inválido. As horas devem estar no intervalo de 0 a 23.\n");
    } else {

        // CALCULANDO A DURAÇÃO DO JOGO
        if (h_inicial >= h_final) {
            resultado = (24 - h_inicial) + h_final;
        } else {
            resultado = h_final - h_inicial;
        }
        
        printf("O jogo durou %d hora(s).\n", resultado);
    }

    return 0;
}
