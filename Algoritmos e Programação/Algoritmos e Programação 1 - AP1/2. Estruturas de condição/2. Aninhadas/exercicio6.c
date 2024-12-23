/*
EXERCICIO 6: Faça um algoritmo que receba o salário base e o tempo de serviço de um funcionário.
Calcule e mostre:

a) O imposto, conforme a tabela a seguir:

SALÁRIO BASE                      | % IMPOSTO
< R$ 2.000,00	                  | Isento
Entre R$ 2.000,00 e R$ 4.500,00 * |	3%
Entre R$ 4.500,00 e R$ 7.000,00   | 8%
>= R$ 7.000,00	                  | 12%        

b) A gratificação de acordo com a tabela a seguir:

SALÁRIO BASE            | TEMPO DE SERVIÇO | GRATIFICAÇÃO
Superior a R$ 5.000,00  | Até 3 anos       | 20%
Superior a R$ 5.000,00  | Acima de 3 anos  | 25%
Até R$ 5.000,00         | Até 3 anos       | 23%
Até R$ 5.000,00         | Entre 3 e 6 anos | 28%
Até R$ 5.000,00         | De 6 anos +      | 30%

c) A categoria que está vinculado em virtude do salário líquido (sabendo que o salário líquido é
calculado pelo salário base, menos impostos e mais gratificação):

SALÁRIO LÍQUIDO                      |  CLASSIFICAÇÃO
Até R$ 3.500,00                      |        A
Entre R$ 3.500,00 e R$ 6.000,00      |        B
Acima de R$ 6.000,00                 |        C

- O símbolo "*" significa "inclusive".
- NÃO SE PREOCUPE COM TRATAMENTO DE ERRO!

- UTILIZE ESTRUTURAS CONDICIONAIS ANINHADAS
*/

#include <stdio.h>

int main() {
    
    // DECLARAÇÃO DE VARIÁVEIS
    float salario = 0;
    float tempo_servico = 0;
    float imposto = 0;
    float gratificacao = 0;
    float salario_liquido = 0;
    
    printf("Digite o salário base e, em seguida, o tempo de serviço:\n");
    scanf("%f %f", &salario, &tempo_servico);
    
    // LETRA A: CALCULANDO O IMPOSTO DE ACORDO COM O SALÁRIO BASE
    if (salario < 2000.00) {
        
        printf("Você está isento de imposto.\n");
        
    } else {
        
        if (salario >= 2000.00 && salario <= 4500.00) {
            
            imposto = 3;
        
        } else {
            
            if (salario > 4500.00 && salario < 7000.00) {
                
                imposto = 8;
            
            } else {
                
                imposto = 12;
                
            }
        }
        printf("Seu imposto é de %.f por cento.\n", imposto); 
        imposto = salario * (imposto / 100);
        printf("Isso equivale a %.2f reais.\n", imposto);
    }
    
    // LETRA B: CALCULANDO A GRATIFICAÇÃO DE ACORDO COM O TEMPO DE SERVIÇO 
    if (salario <= 5000) {
        
        if (tempo_servico <= 3) {
            
            gratificacao = 23;
            
        } else {
            
            if (tempo_servico > 3 && tempo_servico <= 6) {
                
                gratificacao = 28;
                
            } else {
                
                gratificacao = 30;
                
            }
        }
        
    } else {
        
        if (tempo_servico <= 3) {
            
            gratificacao = 20;
            
        } else {
            
            gratificacao = 25;
            
        }
    }
    
    printf("Sua gratificação é de %.f por cento.\n", gratificacao);
    gratificacao = salario * (gratificacao / 100);
    printf("Isso equivale a %.2f reais.\n", gratificacao);
    
    // CALCULANDO O SALÁRIO LÍQUIDO 
    salario_liquido = salario - imposto + gratificacao;
    printf("Portanto, seu salário líquido é de %.2f reais,\n", salario_liquido);
    
    // LETRA B: VERIFICANDO A CATEGORIA DE ACORDO COM O SALÁRIO LÍQUIDO
    if(salario_liquido<3500.00){
        
        printf("e sua categoria é tipo A.\n");
        
    } else {
        
        if (salario_liquido>=3500.00 && salario_liquido<=6000.00){
            
            printf("e sua categoria é tipo B.\n");
            
        } else {
            
            printf("e sua categoria é tipo C.\n");
        }
    }
    
    return 0;
}
