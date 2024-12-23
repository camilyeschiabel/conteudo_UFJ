/*
EXERCÍCIO 4: Desenvolva um algoritmo que permita identificar se o ponto pertence à origem,
eixo das abcissas (eixo x), ordenadas (eixo y), 1º, 2º, 3º ou 4º quadrante de um plano cartesiano.

- UTILIZE ESTRUTURAS CONDICIONAIS ANINHADAS
*/

#include <stdio.h>

int main()
{
    // DECLARÇÃO DE VARIÁVEIS
    int x = 0;
    int y = 0;
    
    printf("Digite as coordenadas x e y do ponto:\n");
    scanf("%d %d", &x, &y);
    
    // VERIFICANDO ONDE O PONTO ESTÁ LOCALIZADO NO PLANO CARTESIANO
    if (x==0 && y==0){
        
        printf("Este ponto pertence à origem.\n");
        
    } else{
        
        if (x>0 && y==0){
            
            printf("Este ponto pertence ao eixo das abcissas.\n");
            
        } else{
            
            if (x==0 && y>0){
                
                printf("Este ponto pertence ao eixo das ordenadas.\n");
                
            } else {
                
                if (x>0 && y>0){
                    
                    printf("Este ponto pertence ao primeiro quadrante.\n");
                    
                } else {
                    
                    if (x<0 && y>0){
                        
                        printf("Este ponto pertence ao segundo quadrante.\n");
                        
                    } else {
                        
                        if (x<0 && y<0){
                            
                            printf("Este ponto pertence ao terceiro quadrante.\n");
                            
                        } else {
                            
                            printf("Este ponto pertence ao quarto quadrante.\n");
                            
                        }
                        
                    }
                    
                }
            }
        }
    }

    return 0;
}
