/*
Exercício 1: Escreva o algoritmo em que o usuário digita um determinado valor e,
usando o laço (repita até), calcule a “tabuada” de 1 a 10. Fiquem atentos à formatação,
ou seja, unidade embaixo de unidade e dezena embaixo dedezena. Exemplo:

Entrada: 6
Saída: 
6 * 1 =  6
6 * 2 = 12
6 * 3 = 24
6 * 4 = 36
6 * 5 = 30
6 * 6 = 36
6 * 7 = 42
6 * 8 = 48
6 * 9 = 54
6 *10 = 60
*/

#include <stdio.h>

int main()
{
    int n = 0; 
    int r = 0; 
    int i = 1; 
    
    printf("Escolha um número:\n");
    scanf("%d", &n);
    
    do{

        r = n*i;
        
        if(r<10 && i<10){
            
            printf("%d * %d = 0%d\n", n, i, r); 
            
        } else if(r>=10 && i<10){
            
            printf("%d * %d = %d\n", n, i, r);
            
        } else {
            
            printf("%d *%d = %d\n", n, i, r);
            
        }
        
        i++;
        
    } while (i<=10);

    return 0;
}
