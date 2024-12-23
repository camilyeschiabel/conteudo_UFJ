/*
EXERCÍCIO 2: Faça um algoritmo que leia três notas, a opção escolhida pelo usuário e,
usando escolha caso, calcule a média.
1 – aritmética
2 – ponderada (Use os pesos: 3,3,4)
3 – harmônica
*/

#include <stdio.h>

int main()
{
    // DECLARAÇÃO DE VARIÁVEIS
    float N1 = 0;
    float N2 = 0;
    float N3 = 0;
    float resultado = 0;
    int escolha;
    
    printf("Digite as três notas:\n");
    scanf("%f %f %f", &N1, &N2, &N3);
    printf("Qual média deseja calcular?\n1 - Aritmética\n2 - Ponderada\n3 - Harmônica\n");
    scanf(" %d", &escolha);
    
    // ESCOLHA-CASO PARA A SELEÇÃO DA OPERAÇÃO
    switch(escolha){
        
        case 1:
            resultado = ((N1+N2+N3)/3);
            printf("A média aritmética entre %.2f, %.2f e %.2f é igual a: %.2f.\n", N1, N2, N3, resultado);
        break;
        
        case 2:
            resultado = ((N1*3 + N2*3 + N3*4)/10);
            printf("A média ponderada entre %.2f, %.2f e %.2f, utilizando os pesos 3, 3 e 4 é igual a: %.2f.\n", N1, N2, N3, resultado);
        break;
        
        case 3:
            resultado = (3/(1/N1 + 1/N2 + 1/N3));
            printf("A média harmônica entre %.2f, %.2f e %.2f é igual a: %.2f.\n", N1, N2, N3, resultado);
        break;

        default:
        printf("OPERAÇÃO SELECIONADA INVÁLIDA.\n");
        break;
        
    }

    return 0;
}

