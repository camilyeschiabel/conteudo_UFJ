/*
EXERCÍCIO 01 – Escreva um programa que dados leia dois vetores inteiros de 5 posições cada. Em seguida, usando escolha 
caso, o usuário irá escolher uma das quatro operações (soma, subtração, multiplicação e divisão) e o algoritmo 
deverá guardar o resultado num terceiro vetor de 5 posições.
*/

#include <stdio.h>

int main(){
    
    int v1[5];
    int v2[5];
    int vR[5];
    int resposta = 0;
    int i;
    
    printf("Digite os 5 valores dos itens no primeiro vetor:\nR: ");
    
    for(i=0;i<5;i++){
        scanf("%d", &v1[i]);
    }
    
    printf("Agora, digite os 5 valores dos itens no segundo vetor:\nR: ");
    
    for(i=0;i<5;i++){
        scanf("%d", &v2[i]);
    }
    
    
    printf("Escolha uma das operações a seguir:\n");
    printf("1 - Soma\n2 - Subtração\n3 - Divisão\n4 - Multiplicação\nR:");
    scanf("%d", &resposta);
    
    switch(resposta){
        case 1:
            for(i=0;i<5;i++){
                vR[i] = v1[i] + v2[i];
            }
        break;
        
        case 2:
            for(i=0;i<5;i++){
                vR[i] = v1[i] - v2[i];
            }
        break;
        
        case 3:
            for(i=0;i<5;i++){
                vR[i] = v1[i] / v2[i];
            }
        break;
        
        case 4:
            for(i=0;i<5;i++){
                vR[i] = v1[i] * v2[i];
            }
        break;
        
        default:
            printf("Resposta inválida - Programa encerrado.\n");
            return 0;
        break;
    }
    
    printf("O vetor resultante é:\n");
    
    for(i=0;i<5;i++){
        
        printf("%d\n",vR[i]);
    }    
    
    return 0;
}