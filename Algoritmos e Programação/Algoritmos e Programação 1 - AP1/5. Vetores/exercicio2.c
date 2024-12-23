/*
EXERCÍCIO 02 – Faça um programa que receba a temperatura média de cada mês no ano, armazenando-os em um vetor. 
Calcule e mostre a maior e a menor temperatura do ano e em que mês ocorreram (mostrar o mês por extenso: 1 
– janeiro, 2 – fevereiro, ..., 12 – janeiro). Desconsidere empates. 
OBS: Não use nada além do conteúdo estudado em sala.
*/

#include <stdio.h>

int main(){
    
    int i;
    int aux1 = 0;
    int aux2 = 0;
    int mes_temperatura[12];
    
    char meses_por_extenso[12][10] = {
        "Janeiro", "Fevereiro", "Março", "Abril", 
        "Maio", "Junho", "Julho", "Agosto", 
        "Setembro", "Outubro", "Novembro", "Dezembro"
    };
    
    // Primeira posição será temperatura, segunda posição o mês
    int max[2]; 
    int min[2];
    
    // Inicializei tudo com 1 (porque eu quis mesmo <3)
    max[0]=1;
    max[1]=1;
    min[0]=1;
    min[1]=1;
    
    printf("Digite a temperatura média de cada mês do ano:\n");
    
    for(i=0;i<12;i++){
        printf("%d° mês: ", i+1);
        scanf("%d", &mes_temperatura[i]);
    }

    // Gambiarras e amarrações:
    
    max[0] = mes_temperatura[0];
    min[0] = mes_temperatura[0];
        
    for(i=0;i<12;i++){
        
        if(max[0]<mes_temperatura[i]){
            max[0] = mes_temperatura[i];
            max[1] = i+1;
        }
        
        if(min[0]>mes_temperatura[i]){
            min[0] = mes_temperatura[i];
            min[1] = i+1;
        }
    }
    
    
    printf("\n\nMês e temperatura mínima:\n");
    printf("%s - %d\n\n", meses_por_extenso[min[1]-1], min[0]);
    printf("Mês e temperatura máxima:\n");
    printf("%s - %d", meses_por_extenso[max[1]-1], max[0]);
    
    return 0;
}