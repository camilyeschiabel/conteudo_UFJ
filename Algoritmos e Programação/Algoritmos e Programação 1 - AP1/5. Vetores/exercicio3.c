/*
EXERCÍCIO 03 –  Faça um programa que preencha um vetor com dez números inteiros, calcule e mostre os números superiores 
a 50 e suas respectivas posições. O programa deverá mostrar mensagem se não existir nenhum número nessa 
condição.
*/

#include <stdio.h>

int main(){
    
    int i;
    int gambiarra = 0;
    int v[10];
    
    printf("Insira os valores do vetor:\n");
    
    for(i=0;i<10;i++){
        printf("%d°: ", i+1);
        scanf("%d", &v[i]);
    }
    
    printf("\n\n");
    printf("Resultados:\n");
    
    for(i=0;i<10;i++){
        
        if(v[i]>50){
            gambiarra = 1;
            printf("Posição: %d - Valor: %d\n", i, v[i]);
        }
        
    }
    
    if(gambiarra == 0){
        printf("Não existe nenhum número maior que 50 neste vetor.\n");
    }
    
    return 0;
}