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

/* Estrutura de repetição while, serve para realizar a repetição de um conjunto de comandos
 enquanto a condição for verdadeira.
 ESTRUTURA DO WHILE:
                    while(condição){
                        Executa o bloco de comando
                    }

*/
