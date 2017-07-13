//Declaração das bibliotecas padrões
#include <stdio.h>
#include <stdlib.h>

//Função principal
int main()
{
    int soma;
    int subtracao;
    int multiplicacao;
    int divisao;
    int resto;

    soma=3+5;
    subtracao=5-3;
    multiplicacao=3*5;
    divisao=6/3;
    resto=3%2;

    printf("O resultado da soma eh: %d \n",soma);
    printf("O resultado da subtracao eh: %d \n",subtracao);
    printf("O resultado da multiplicacao eh: %d \n",multiplicacao);
    printf("O resultado da divisao eh: %d \n",divisao);
    printf("O resultado do resto da divisao eh: %d \n",resto);


    return 0;
}

/* Os operadores aritmeticos usados são:
    + ADIÇÃO
    - SUBTRAÇÃO
    * MULTIPLICAÇÃO
    / DIVISÃO
    % RESTO DA DIVISÃO
*/
