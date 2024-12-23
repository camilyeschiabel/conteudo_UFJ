/*
EXERCÍCIO 5: Faça um algoritmo que receba dois números e execute as operações 
listadas a seguir de acordo com a escolha do usuário (use a estrutura de seleção 
"escolha-caso").

Escolha do usuário | Operação
1                  | Média entre os valores digitados
2                  | Diferença do maior pelo menor
3                  | Produto entre os números digitados
4                  | Divisão do primeiro pelo segundo

* Para a opção 4, o programa deve garantir que não haja divisão por 0.
* Mostre uma mensagem no caso de a entrada ser inválida.
*/

#include <stdio.h>

int main()
{
    // DECLARAÇÃO DE VARIÁVEIS
    float N1 = 0;
    float N2 = 0;
    int escolha = 0;
    float resultado = 0;
    
    printf("Digite os dois números:\n");
    scanf("%f %f", &N1, &N2);
    
    printf("Agora, selecione o número da operação que você deseja realizar, sendo:\n");
    printf("1- Média entre os valores digitados\n2- Diferença do maior pelo menor\n");
    printf("3- Produto entre os números digitados\n4- Divisão do primeiro pelo segundo\nR:");
    scanf("%d", &escolha);
    
    switch(escolha){

        case 1:
            printf("Você selecionou a operação 'Média entre os valores digitados'.\n");
            resultado = (N1+N2)/2;
            printf("A média entre estes dois números é de %.2f.\n", resultado);
        break;
        
        case 2:
            printf("Você selecionou a operação 'Diferença do maior pelo menor'.\n");

            // TRATAMENTO PARA DESCOBRIR QUEM É O MAIOR NÚMERO OU SE ESTES SÃO IGUAIS
            if(N1!=N2){
                
                if(N1>N2){
                    resultado = N1-N2;
                } else {
                    resultado = N2-N1;
                }
                
                printf("A diferença entre o maior e o menor número é de %.2f.\n", resultado);
                
            } else {
                printf("Não existe diferença entre esses valores, pois eles são iguais.\n");
            }
        break;
        
        case 3:
            printf("Você selecionou a operação 'Produto entre os números digitados'.\n");
            resultado = N1*N2;
            printf("O produto entre os números digitados é de %.2f.\n", resultado);
        break;
        
        case 4:
            printf("Você selecionou a operação 'Divisão do primeiro pelo segundo'.\n");
            
            // TRATAMENTO PARA O CASO DE DIVISÃO POR ZERO
            if(N2!=0){
                resultado = N1/N2;
                printf("O resultado da divisão entre os números digitados é de %.2f.\n", resultado);    
            } else {
                printf("ERRO - Não é possível dividir por 0!\n");
            }
        
        break;
        
        default:
            printf("Entrada inválida!\n");
        break;
    }

    return 0;
}
