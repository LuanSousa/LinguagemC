//Declara��o das bibliotecas padr�es
#include <stdio.h>
#include <stdlib.h>

//Fun��o principal
int main()
{
    int conjuncao,disjuncao,x=10,y=20;

    conjuncao= (x > 5) && (y < 10);
    printf("RESULTADO DA CONJUNCAO: %d\n",conjuncao);

    disjuncao= (x > 5) || (y < 10);
    printf("RESULTADO DA DISJUNCAO: %d\n",disjuncao);
    return 0;
}

/* Operadores l�gico servem para comparar express�es relacionais do seu programa.
    OPERADORES:
        && operador E (conjun��o)
        || operador OU (disjun��o)

    Para usarmos operadores relacionais , � preciso saber sobre tabela-verdade.

    Para o operador de conjun��o, o resultado � 1(verdadeiro) se as duas forem 1 e
    ser� 0(falso) em todas as outras combina��es.

    Para o operador de disjun��o, o resultado � 1(verdadeiro) se uma das duas forem 1 e
    ser� 0(falso) se as duas forem 0.

    Mais informa��es sobre tabela-verdade: https://pt.wikipedia.org/wiki/Tabela_verdade
*/
