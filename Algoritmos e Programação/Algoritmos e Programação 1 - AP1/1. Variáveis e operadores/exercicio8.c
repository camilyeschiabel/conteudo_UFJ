/*
EXERCÍCIO O8: Um caixa eletrônico americano trabalha com cédulas de 100, 50, 20, 
10, 5, 2 e 1. Obtenha a quantidade de cédulas de cada tipo, para efetuar um pagamento
de uma quantia escolhida pelo cliente, usando a menor quantidade de cédulas possível.
Obs: Utilize somente o que foi estudado até o momento.
*/

#include <stdio.h>

int main()
{
    // DECLARAÇÃO DE VARIÁVEIS
    int valor = 0;
    int resto = 0;
    int quantidade = 0;
    
    printf("Digite o valor do pagamento:\n");
    scanf("%d", &valor);
    printf("São necessárias:\n");
    
    // CALCULANDO A QUANTIDADE DE CÉDULAS DE CADA TIPO 
    // CÉDULAS DE 100
    resto = valor%100;
    valor = valor/100;
    quantidade = valor;
    printf("%d nota(s) de 100\n", valor);
    
    // CÉDULAS DE 50
    valor = resto;
    resto = valor%50;
    valor = valor/50;
    quantidade += valor;
    printf("%d nota(s) de 50\n", valor);
    
    // CÉDULAS DE 20
    valor = resto;
    resto = valor%20;
    valor = valor/20;
    quantidade += valor;
    printf("%d nota(s) de 20\n", valor);
    
    // CÉDULAS DE 10
    valor = resto;
    resto = valor%10;
    valor = valor/10;
    quantidade += valor;
    printf("%d nota(s) de 10\n", valor);
    
    // CÉDULAS DE 5
    valor = resto;
    resto = valor%5;
    valor = valor/5;
    quantidade += valor;
    printf("%d nota(s) de 5\n", valor);
    
    // CÉDULAS DE 2
    valor = resto;
    resto = valor%2;
    valor = valor/2;
    quantidade += valor;
    printf("%d nota(s) de 2\n", valor);
    
    // CÉDULAS DE 1
    valor = resto;
    resto = valor%1;
    valor = valor/1;
    quantidade += valor;
    printf("%d nota(s) de 1\n", valor);
    

    printf("Totalizando a necessidade de %d cédula(s).", quantidade);

    return 0;
}
