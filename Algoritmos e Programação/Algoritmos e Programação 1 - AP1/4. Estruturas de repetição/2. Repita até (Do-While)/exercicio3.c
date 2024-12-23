/*
Exercício 3:  Faça um programa, que usando o laço de repetição do tipo (do while), 
receba a idade e a altura de seis pessoas. Calcule e imprima as médias das alturas
das pessoas com mais de 50 anos. 
*/

#include <stdio.h>

int main()
{
    int i = 0;
    int idade = 0;
    float altura = 0.0;
    float soma = 0.0;
    float resultado = 0.0;
    int quantidadePessoas = 0;
    
    printf("Digite idade e altura das 6 pessoas, separadas por espaço.\n");
    
    do {
        scanf("%d %f", &idade, &altura);
        
        if(idade>50){
            quantidadePessoas++;
            soma += altura;
        }
        
        i++;
    } while(i<6);
    
    resultado = soma/quantidadePessoas;
    printf("A média das alturas das pessoas com mais de 50 anos é: %.2f.\n", resultado);
    
    return 0;
    
}