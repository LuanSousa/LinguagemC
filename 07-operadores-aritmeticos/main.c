//Declara��o das bibliotecas padr�es
#include <stdio.h>
#include <stdlib.h>

//Fun��o principal
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

/* Os operadores aritmeticos usados s�o:
    + ADI��O
    - SUBTRA��O
    * MULTIPLICA��O
    / DIVIS�O
    % RESTO DA DIVIS�O
*/
