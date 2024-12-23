/* 
Exercício 4 – Escreva um programa que solicite ao usuário um caractere. Em seguida, terá que preencher na tela meia 
árvore de Natal, sendo que o número de ramos (N) será introduzido pelo usuário. Assim, se o usuário digitar 
como caractere ‘$’ e N=4 a saída será: 
$ 
$$ 
$$$ 
$$$$ 
*/

#include <stdio.h>

int main(){
    
    int n;
    int i;
    int j;
    
    printf("Digite um número inteiro: ");
    scanf("%d", &n);
    
    for(i=1;i<=n;i++){
        
        for(j=1;j<=i;j++){
            
            printf("$");
        }
        
        printf("\n");
    }
    
    return 0;
}