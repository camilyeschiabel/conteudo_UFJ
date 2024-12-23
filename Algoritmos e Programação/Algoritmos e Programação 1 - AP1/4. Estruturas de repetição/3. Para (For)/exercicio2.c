/* 
Exercício 2 - 2 – Escreva um programa que solicite ao usuário um número e usando o laço for escreva,
simultaneamente, a sequência crescente e decrescente entre 1 e esse número. Exemplo: 
Entrada: 5. 
Saída: 
1 5 
2 4 
3 3 
4 2 
5 1 
*/

#include <stdio.h>

int main(){
    
    int n;
    int i;
    
    printf("Digite um número inteiro: ");
    scanf("%d", &n);
    
    for(i=1;i<=n;i++){
        printf("%d %d\n", i, (n-i)+1);
    }
    
    return 0;
}