//Declara��o das bibliotecas padr�es
#include <stdio.h>
#include <stdlib.h>
#define PI 3.14
//Fun��o principal
int main()
{
    const float pi=3.14;

    printf("O valor de PI eh %f",pi);
    return 0;
}

/* CONSTANTE- � algo que n�o muda.
Geralmente usamos constantes em valores que n�o ir�o se modificar dento do nosso programa,
como o valor de pi ou um cpf.
A primeira forma de tornar uma variavel constante � necessario colocar a palavra reservada:const, antes da
variavel.
O formato de declara��o �:
                        const int numero;
A segunda forma � declarando antes da fun��o principla abaixo das bibliotecas.
O formato de declra��o �:
                        #define PI 3.14
*/
