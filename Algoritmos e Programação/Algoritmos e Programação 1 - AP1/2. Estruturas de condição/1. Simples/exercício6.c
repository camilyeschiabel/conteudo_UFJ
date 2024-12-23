/*
EXERCÍCIO 6: Dado o fluxograma abaixo, transcreva o algoritmo para a linguagem c.
*/

#include <stdio.h>
#include <math.h>

int main() {
    
    // DECLARAÇÃO DE VARIÁVEIS
    int a = 0;
    int raiz = 0;
    int sucessor = 0;
    int antecessor = 0;

    printf("Digite o valor de 'a':\n");
    scanf("%d", &a);
    
    if(a<0){
        printf("Valor negativo.\n");  // TRATAMENTO DE ERRO
    } else {

        // REALIZANDO OS CÁLCULOS SOLICITADOS NO FLUXOGRAMA
        raiz = sqrt(a);
        sucessor = a+1;
        antecessor = a-1;
        
        printf("A raiz quadrada desse número é %d.\n", raiz);
        printf("O sucessor deste número é %d.\n", sucessor);
        printf("O antecessor deste número é %d.\n", antecessor);
    }


    return 0;
}
