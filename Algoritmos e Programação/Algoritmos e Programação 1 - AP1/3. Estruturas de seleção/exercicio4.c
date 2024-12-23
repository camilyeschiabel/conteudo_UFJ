/*
EXERCÍCIO 4: Escreva um programa que peça ao usuário que insira o ano e o mês e, em seguida, 
retorne o número de dias naquele mês, considerando anos bissextos para fevereiro. Se o mês 
não for válido, ele retorna “Entrada inválida”. Utilize apenas a estrutura de seleção "escolha-caso".
*/

#include <stdio.h>

int main()
{
    // DECLARAÇÃO DE VARIÁVEIS
    int mes = 0;
    int ano_bissexto = 0;
    
    printf("Digite o número do mês, ex: 1- Janeiro, 2- Fevereiro...\nR:");
    scanf("%d", &mes);
    
    switch(mes){
        
        case 1:
            printf("Janeiro tem 31 dias.\n");
        break;
        
        case 2:
            printf("Estamos em um ano bissexto?\nEscolha 1 para 'sim' e 2 para 'não'.\nR:");
            scanf("%d", &ano_bissexto);
            
            switch(ano_bissexto){
                
                case 1:
                    printf("Fevereiro, em anos bissextos, tem 29 dias.\n");
                break;
                
                case 2:
                    printf("Fevereiro, em anos NÃO-bissextos, tem 28 dias.\n");
                break;
                
                default:
                    printf("Opção selecionada inválida!\n");
                break;
            }
            break;
        
        case 3:
        printf("Março tem 31 dias.\n");
        break;
        
        case 4:
        printf("Abril tem 30 dias.\n");
        break;
        
        case 5:
        printf("Maio tem 31 dias.\n");
        break;
        
        case 6:
        printf("Junho tem 30 dias.\n");
        break;
        
        case 7:
        printf("Julho tem 31 dias.\n");
        break;
        
        case 8:
        printf("Agosto tem 31 dias.\n");
        break;
        
        case 9:
        printf("Setembro tem 30 dias.\n");
        break;
        
        case 10:
        printf("Outubro tem 31 dias.\n");
        break;
        
        case 11:
        printf("Novembro tem 30 dias.\n");
        break;
        
        case 12:
        printf("Dezembro tem 31 dias.\n");
        break;
        
        default:
            printf("Entrada inválida!\n");
        break;
    }

    return 0;
}
