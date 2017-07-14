#include <stdio.h>
#include <stdlib.h>

int main()
{
     int nota;
     printf("Digite a nota do aluno:");
     scanf("%d",&nota);

     if(nota>7){
           printf("Parabens, voce passou ");
     }else{
        printf("Voce nao passou !!");
     }
            if(nota==10){
                printf("e com a nota maxima!!");
            }else{
               printf("Voce nao tirou nota máxima.");
            }
    return 0;
}

/* Permite usar if,if-else dentro de outro if,if-else.
ESTRUTURA DO IF-ELSE aninhado:
                    if(condiçao){
                        Primeiro conjunto de comandos
                    }else{
                        Segundo conjunto de comandos
                    }
                        if(condição){
                                Terceiro conjunto de comandos
                        }else{
                                Quarto conjunto de comandos
                        }

*/
