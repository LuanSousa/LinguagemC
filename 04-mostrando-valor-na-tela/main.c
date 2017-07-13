//Declaração das bibliotecas padrões
#include <stdio.h>
#include <stdlib.h>

//Função principal
int main()
{
    int numero= 5;
    float flutuante= 5.5;
    char caractere= 'Nome';

    printf("%d \n",numero); //Declaração para numero inteiro
    printf("%f \n",flutuante); //Declaração para numero decimal
    printf("%c \n",caractere); //Declaração para um caractere

    return 0;
}

/* O comando principal para mostrar algo na tela é o : printf();

A forma de declaração é:
                        printf("Alguma coisa aqui");
Para mostrar na tela o valor de uma variavel declarada, é preciso nos atentar a alguns detalhes.
O primeiro é a forma de declaração do printf que irá mudar um pouco e fica na forma:
                    printf("caractere especial",nome da sua variavel);
OBS: Nunca se esqueça do ponto e virgula (;) no final da declaraçao.
*/
