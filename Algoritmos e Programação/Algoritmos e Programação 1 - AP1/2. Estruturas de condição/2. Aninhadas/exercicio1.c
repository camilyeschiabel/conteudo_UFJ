/*
EXERCÍCIO 1: – Leia três valores válidos (positivos não nulos) e verifique se formam um triângulo. 
Se formar, informe se é escaleno, isósceles ou equilátero. Caso contrário, ou seja, não formam um 
triângulo, escreva uma mensagem informando.

Obs: Um triângulo só existe se, e somente se, obedece à seguinte regra: um de seus lados deve ser
maior que o valor absoluto (módulo) da diferença dos outros dois lados e menor que a soma dos 
outros dois lados.

- UTILIZE ESTRUTURAS CONDICIONAIS ANINHADAS.
*/

#include <stdio.h>
#include <stdlib.h> // Usei para chamar a função de módulo, solicitado no exercício.

int main()
{
    // DECLARAÇÃO DE VARIÁVEIS
    int lado1 = 0;
    int lado2 = 0;
    int lado3 = 0;
    
    printf("Digite as medidas dos três lados do triângulo:\n");
    scanf("%d %d %d", &lado1, &lado2, &lado3);
    
    // VERIFICANDO AS CONDIÇÕES DE EXISTÊNCIA DO TRIÂNGULO
    if ((lado1 < lado2 + lado3) && (lado1 > abs(lado2 - lado3))){
        if((lado2 < lado1 + lado3) && (lado2 > abs(lado1 - lado3))){
            if((lado3 < lado1 + lado2) && (lado3 > abs(lado1 - lado2))) {
                
                printf("Esses valores formam um triângulo.\n");
        
                // VERIFICANDO O TIPO DO TRIÂNGULO
                if (lado1 == lado2 && lado2 == lado3) {
                    printf("O triângulo é equilátero.\n");
                } else if (lado1 != lado2 && lado2 != lado3 && lado3 != lado1) {
                    printf("O triângulo é escaleno.\n");
                } else {
                    printf("O triângulo é isósceles.\n");
                }
                
            } else {
                printf("Esses valores não formam um triângulo.\n");
            }
        } else {
            printf("Esses valores não formam um triângulo.\n");
        }
    } else {
        printf("Esses valores não formam um triângulo.\n");
    }
    
    

  return 0;  
    
}
    
    
    
    
    
    /*
        printf("Esses valores formam um triângulo.\n");
        
        if (lado1 == lado2 && lado2 == lado3) {
            printf("O triângulo é equilátero.\n");
        } else if (lado1 != lado2 && lado2 != lado3 && lado3 != lado1) {
            printf("O triângulo é escaleno.\n");
        } else {
            printf("O triângulo é isósceles.\n");
        }
        
    } else {
        printf("Esses valores não formam um triângulo.\n");
    }
    
    return 0;
}

*/
