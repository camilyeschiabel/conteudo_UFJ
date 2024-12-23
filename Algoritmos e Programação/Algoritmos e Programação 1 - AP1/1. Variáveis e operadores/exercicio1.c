/* 
EXERCÍCIO 01: Escreva um algoritmo para simular uma pequena conversa do computador com o usuário. O 
algoritmo deve seguir os passos:
a) inicialmente escreve "Olá eu sou o Nº 1, como é seu nome?";
b) em seguida espera que o usuário digite seu nome;
c) por fim escreve: "Bem-vindo ao clube (nome)".
*/

#include <stdio.h>

int main (){

    // DECLARAÇÃO DE VARIÁVEIS
    char nome[50];
    
    printf("Olá, eu sou o N°1. Qual é seu nome?\nR: "); // LETRA A
    scanf("%s", nome);                                  // LETRA B
    printf("Bem-vindo ao clube, %s!\n", nome);          // LETRA C

}