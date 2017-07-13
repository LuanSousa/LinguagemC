//Declaração das bibliotecas padrões
#include <stdio.h>
#include <stdlib.h>

//Função principal
int main()
{
    int numero;
    float flutuante;
    char caractere;

    printf("Digite um numero inteiro: ");
    scanf("%d",&numero);
    printf("O NUMERO DIGITADO FOI: %d  \n",numero);

    printf("Digite um numero quebrado: ");
    scanf("%f",&flutuante);
    printf("O NUMERO DIGITADO FOI: %f  \n",flutuante);

    printf("Digite uma palavra: ");
    scanf("%c",&caractere);
    printf("A PALAVRA DIGITADA FOI: %c \n",caractere);


    return 0;
}
