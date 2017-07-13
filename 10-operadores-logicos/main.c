//Declaração das bibliotecas padrões
#include <stdio.h>
#include <stdlib.h>

//Função principal
int main()
{
    int conjuncao,disjuncao,x=10,y=20;

    conjuncao= (x > 5) && (y < 10);
    printf("RESULTADO DA CONJUNCAO: %d\n",conjuncao);

    disjuncao= (x > 5) || (y < 10);
    printf("RESULTADO DA DISJUNCAO: %d\n",disjuncao);
    return 0;
}

/* Operadores lógico servem para comparar expressões relacionais do seu programa.
    OPERADORES:
        && operador E (conjunção)
        || operador OU (disjunção)

    Para usarmos operadores relacionais , é preciso saber sobre tabela-verdade.

    Para o operador de conjunção, o resultado é 1(verdadeiro) se as duas forem 1 e
    será 0(falso) em todas as outras combinações.

    Para o operador de disjunção, o resultado é 1(verdadeiro) se uma das duas forem 1 e
    será 0(falso) se as duas forem 0.

    Mais informações sobre tabela-verdade: https://pt.wikipedia.org/wiki/Tabela_verdade
*/
