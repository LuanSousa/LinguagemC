//Declara��o das bibliotecas padr�es
#include <stdio.h>
#include <stdlib.h>

//Fun��o principal
int main()
{
    int numero= 5;
    float flutuante= 5.5;
    char caractere= 'Nome';

    printf("%d \n",numero); //Declara��o para numero inteiro
    printf("%f \n",flutuante); //Declara��o para numero decimal
    printf("%c \n",caractere); //Declara��o para um caractere

    return 0;
}

/* O comando principal para mostrar algo na tela � o : printf();

A forma de declara��o �:
                        printf("Alguma coisa aqui");
Para mostrar na tela o valor de uma variavel declarada, � preciso nos atentar a alguns detalhes.
O primeiro � a forma de declara��o do printf que ir� mudar um pouco e fica na forma:
                    printf("caractere especial",nome da sua variavel);
OBS: Nunca se esque�a do ponto e virgula (;) no final da declara�ao.
*/
