/*
Exercício 1: Na lista 6 e 7, fizemos este mesmo exercício usando "enquanto" e 
"repita até", respectivamente. Reescreva o algoritmo em que o usuário digita um 
determinado valor e, usando o laço (para), calcule a “tabuada” de 1 a 10. Fiquem
atentos à formatação,ou seja, unidade embaixo de unidade e dezena embaixo dedezena. 
Exemplo:

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
    int i;
    
    printf("Escolha um número: ");
    scanf("%d", &n);
    
    for (i = 1; i<=10; i++){
    
        r = n*i;
        
        if(r<10 && i<10){
            
            printf("%d * %d = 0%d\n", n, i, r); 
            
        } else if(r>=10 && i<10){
            
            printf("%d * %d = %d\n", n, i, r);
            
        } else {
            
            printf("%d *%d = %d\n", n, i, r);
            
        }
        
    }

    return 0;
}
