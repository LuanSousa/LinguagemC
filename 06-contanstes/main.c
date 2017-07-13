//Declaração das bibliotecas padrões
#include <stdio.h>
#include <stdlib.h>
#define PI 3.14
//Função principal
int main()
{
    const float pi=3.14;

    printf("O valor de PI eh %f",pi);
    return 0;
}

/* CONSTANTE- é algo que não muda.
Geralmente usamos constantes em valores que não irão se modificar dento do nosso programa,
como o valor de pi ou um cpf.
A primeira forma de tornar uma variavel constante é necessario colocar a palavra reservada:const, antes da
variavel.
O formato de declaração é:
                        const int numero;
A segunda forma é declarando antes da função principla abaixo das bibliotecas.
O formato de declração é:
                        #define PI 3.14
*/
