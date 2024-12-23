/*
Exercício 2: Usando laço de repetição (do while) escreva um programa que imprime 
a tabela ASCII (notação: decimal, hexadecimal e caractere) para os valores de 0 
a 127.
Obs - Este programa não pede nenhuma entrada do usuário.
A saída deve ser da seguinte forma:
TABELA ASCII:
Decimal   Hexadecimal   Caracter
0         0             ☺
1         1             ☻
2         2             ♥
3         3             ♦
4         4             ♣
5         5             ♠
6         6             •
7         7             ◘
8         8             ○
9         9             ◙
...
*/

#include <stdio.h>

int main()
{
    // DECLARAÇÃO DE VARIÁVEIS
    int i = 0;
    
    printf("TABELA ASCII\nDecimal:      Hexadecimal:      Caractere:\n");
    do {
        printf("%d \t\t %x \t\t %c\n", i,i,i); 
        i++;
    } while(i<=127);
    
    /*
    P.S.Utilizei a tabulação (\t) para criar espaços entre as colunas da
    tabela. Lembrando que os especificadores que foram usados para forma-
    tar a saída foram:
    - %d: Para valores decimais/números inteiros.
    - %x: Para valores em formato hexadecimal.
    - %c: Para caracteres únicos.
    */

    return 0;
}
