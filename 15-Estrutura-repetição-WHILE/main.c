#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    printf("Digite ds valores inteiros: ");
    scanf("%d %d",&a,&b);
    while(a<b){
        a++;
        printf(" %d",a);
    }
    return 0;
}

/* Estrutura de repeti��o while, serve para realizar a repeti��o de um conjunto de comandos
 enquanto a condi��o for verdadeira.
 ESTRUTURA DO WHILE:
                    while(condi��o){
                        Executa o bloco de comando
                    }

*/
