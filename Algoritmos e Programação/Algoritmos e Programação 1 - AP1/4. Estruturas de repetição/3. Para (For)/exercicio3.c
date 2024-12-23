/* 
Exercício 3 – Faça um algoritmo que, usando o laço for, calcule a soma dos primeiros 50 números pares. Este algoritmo 
não recebe valor do teclado. Os primeiros números pares são: 2, 4, 6, ..
*/

#include <stdio.h>

int main(){
    
    int i;
    int soma = 0;
    
    for(i=0;i<=100;i=i+2){
        soma = soma + i;
    }
    
    printf("%d", soma);
    
    return 0;
}