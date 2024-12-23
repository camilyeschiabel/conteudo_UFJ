/*
EXERCÍCIO 3: – Seja uma lanchonete de fast food, que tem o seguinte cardápio:

Opção (única) | Promoção      | Especificação                                     | Preço (R$)
1             | Big Burger    | 1 hamburger especial, batata frita e refrigerante | 40.00
2             | Médio Burger  | 1 hamburguer e refrigerante                       | 30.00
3             | Little Burger | 1 misto quente e 1 suco                           | 15.00

Faça um algoritmo que leia a opção (apenas uma opção por venda) e o valor que o 
cliente tem na carteira (suponha que a lanchonete só receba o valor em dinheiro 
físico). Usando escolha caso, mostre a promoção solicitada, sua especificação, 
o valor total a pagar e calcule o troco a receber em relação ao dinheiro na carteira.
*/

#include <stdio.h>

int main()
{
    // DECLARAÇÃO DE VARIÁVEIS
    int opcao = 0;
    float valor_carteira = 0;
    float troco = 0;
    
    printf("Digite a opção e o valor na carteira:\n");
    scanf("%d %f", &opcao, &valor_carteira);
    
    switch(opcao){
        case 1:
            printf("Promoção solicitada: 'Big Burger'\n");
            printf("Especificação: 1 hamburger especial, batata frita e refrigerante\n");
            printf("Valor total a pagar: 40,00R$\n");
            
            troco =  valor_carteira - 40.00;
            
            if(troco>0){
                printf("Seu troco é: %.2f",troco);
            } else if(valor_carteira<40){
                printf("Você não possui dinheiro suficiente para pagar!\n");
            } else {
                printf("Você não possui troco.\n");
            }
        break;
        
        case 2:
            printf("Promoção solicitada: 'Médio Burger'\n");
            printf("Especificação: 1 hamburger e refrigerante\n");
            printf("Valor total a pagar: 30,00R$\n");
            
            troco =  valor_carteira - 30.00;
            
            if(troco>0){
                printf("Seu troco é: %.2f",troco);
            } else if(valor_carteira<30){
                printf("Você não possui dinheiro suficiente para pagar!\n");
            } else {
                printf("Você não possui troco.\n");
            }
        break;
        
        case 3:
            printf("Promoção solicitada: 'Little Burger'\n");
            printf("Especificação: 1 misto quente e 1 suco\n");
            printf("Valor total a pagar: 15,00R$\n");
            
            troco =  valor_carteira - 15.00;
            
            if(troco>0){
                printf("Seu troco é: %.2f",troco);
            } else if(valor_carteira<15){
                printf("Você não possui dinheiro suficiente para pagar!\n");
            } else {
                printf("Você não possui troco.\n");
            }
        break;
        default:
            printf("Opção selecionada inválida!\n");
        break;
    }

    return 0;
}
