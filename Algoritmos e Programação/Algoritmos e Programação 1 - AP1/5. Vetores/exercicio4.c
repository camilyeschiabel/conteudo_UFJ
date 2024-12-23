/*
EXERCÍCIO 04 – Escreva um algoritmo que preencha dois vetores de 5 elementos numéricos cada um e mostre o vetor 
resultante da intercalação deles.
*/

#include <stdio.h>

int main(){
    
    int i;
    int v1[5];
    int v2[5];
    int vR[10];
    
    printf("Digite os 5 valores do primeiro vetor:\n");
    
    for(i=0;i<5;i++){
        
        printf("%d°: ", i+1);
        scanf("%d", &v1[i]);
        
    }
    
    printf("\nAgora, digite os 5 valores do segundo vetor:\n");
    
    for(i=0;i<5;i++){
        
        printf("%d°: ", i+1);
        scanf("%d", &v2[i]);
        
    }
    
    int j = 0;
    
    for(i=0;i<10;i=i+2){
        
        vR[i] = v1[j];
        vR[i+1] = v2[j];
        j++;
    }
    
    printf("\nVetor resultante da intercalação:\n");
    
    for(i=0;i<10;i++){
        
        printf("%d\n", vR[i]);
        
    }
    
    return 0;
}