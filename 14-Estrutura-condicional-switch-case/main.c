#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;
    printf("Digite um numero de 1 a 5: ");
    scanf("%d",&numero);
    switch(numero){
    case 1:
        printf("Voce digitou o numero 1");break;
    case 2:
        printf("Voce digitou o numero 2");break;
    case 3:
        printf("Voce digitou o numero 3");break;
    case 4:
        printf("Voce digitou o numero 4");break;
    case 5:
        printf("Voce digitou o numero 5");break;
    default:
        printf("O numero que voce digitou foi %d e n�o esta entre 1 e 5",numero);
    }
    return 0;
}
/* O switch case � ums estrura condicional para fazer v�ria sele��es dentro do programa,
baseado emuma variavel inteira ou caractere.
ESTRURA DO SWITCH CASE:
                    switch(variavel){
                    case valor1: conjunto de comandos; break;
                    case valor2: conjunto de comandos; break;
                    case valor3: conjunto de comandos; break;
                    case valorn: conjunto de comandos; break;
                    default: conjunto de comandos;
                    }
A partir da variavel � verificado se ela � compativel com algum case.
Caso a variavel inicial n�o seja nenhum dos cases,� executado o conjunto de comandos do
default(padr�o).
*/
