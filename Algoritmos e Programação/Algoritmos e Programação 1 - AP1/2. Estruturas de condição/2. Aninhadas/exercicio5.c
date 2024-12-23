/*
EXERCÍCIO 5: Faça um algoritmo que receba a altura e o peso de uma pessoa e, de acordo 
com a tabela a seguir, mostre a classificação dessa pessoa.

ALTURA             |                     PESO                  
                   |  Até 60 | Entre 60 e 90 * | Acima de 90  |
Menores que 1,20   |     .  A|         .      D|      .     G |
De 1,20 a 1,70  *  |     .  B|         .      E|      .     H |
Maiores que 1,70   |     .  C|         .      F|      .     I |

- O símbolo "*" significa "inclusive".

- UTILIZE ESTRUTURAS CONDICIONAIS ANINHADAS
*/

#include <stdio.h>

int main()
{
    // DECLARÇÃO DE VARIÁVEIS
    float altura = 0;
    float peso = 0;
    
    printf("Digite sua altura e depois o seu peso:\n");
    scanf("%f %f", &altura, &peso);
    
    // VERIFICANDO A CLASSIFICAÇÃO
    if (altura<1.20){
        
        if(peso<60){
            printf("Você é uma pessoa tipo A.\n");
        } else {
            
            if(peso>=60 && peso<=90){
                
                printf("Você é uma pessoa tipo D.\n");
                
            } else {
                
                if (peso>90){
                    
                    printf("Você é uma pessoa tipo G.\n");
                    
                }
            }
        }
    } else if (altura>=1.20 && altura<=1.70){
        
        if(peso<60){
            printf("Você é uma pessoa tipo B.\n");
        } else {
            
            if(peso>=60 && peso<=90){
                
                printf("Você é uma pessoa tipo E.\n");
                
            } else {
                
                if (peso>90){
                    
                    printf("Você é uma pessoa tipo H.\n");
                    
                }
            }
            
        }
        
    } else if (altura>1.70){
        
        if(peso<60){
            printf("Você é uma pessoa tipo C.\n");
        } else {
            
            if(peso>=60 && peso<=90){
                
                printf("Você é uma pessoa tipo F.\n");
                
            } else {
                
                if (peso>90){
                    
                    printf("Você é uma pessoa tipo I.\n");
                    
                }
            }
            
        }
        
    }

    return 0;
}
