/*
Exercício 4: Faça um programa que leia um número aleatório de valores positivos e ao final indique: 
 
a)  A soma dos valores declarados; 
b)  O maior valor digitado 
c)  O menor valor digitado.  
O algoritmo encerra quando o usuário digitar um valor nulo ou negativo. 

*/

#include <stdio.h>
#include <stdbool.h>

int main()
{
    int soma = 0;
    int maior = 0;
    int menor = 1000000;
    int aux = 0;
    
    printf("Digite uma sequência de números.\n");
    
    while(1) {
        
        scanf("%d", &aux);
        
        if(aux == 0 || aux < 0){
            break;
            
        } else {
            
            // LETRA A
            soma += aux;
            
            // LETRA B
            if(aux>maior){
                maior = aux;
            }
            
            // LETRA C
            if(aux<menor){
                menor = aux;
            }
            
        }
    }
    
    printf("\n");
    printf("Soma: %d.\n", soma);
    printf("Maior valor: %d.\n", maior);
    printf("Menor valor: %d.\n", menor);
    
    return 0;
}