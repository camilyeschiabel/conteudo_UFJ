/* 
Exercício 4 - Dado um número N, inteiro e positivo, fazer um programa para obter os N primeiros termos da seguinte se
quência: 1 1 2 3 5 8 13. (Série de Fibonacci). Use um laço do tipo do while.
*/

#include <stdio.h>

int main(){
    
    int n = 0;
    int i = 1;
    int a = 1;
    int b = 1;
    int aux = 0;
    
    printf("Digite um número inteiro: ");
    scanf("%d", &n);
    
    if (n >= 1) {
        printf("1\n");
    }
    if (n >= 2) {
        printf("1\n");
    }
    
    do {
        
        aux = a + b;
        printf("%d\n", aux);
        a = b;
        b = aux;
        i++;
        
    } while (i<n);
    
    
    return 0;
}