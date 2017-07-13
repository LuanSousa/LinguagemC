//Declaração das bibliotecas padrões
#include <stdio.h>
#include <stdlib.h>

//Função principal
int main()
{
    int numero;
    float flutuante;
    char caractere;

    scanf("%d",&numero); //Declaração para numero inteiro
    scanf("%f",&flutuante); //Declaração para numero decimal
    scanf("%c",&caractere); //Declaração para um caractere


    return 0;
}

/* Para fazer a leitura de dados do telado, usamos a funçao: scanf();
O formato da sua declaração é:
                        scanf("tipo de entrada",&variavel);
OBS: ATENTE-SE QUE  DECLARAÇÃO PARECE MUITO COM O DO PRINTF E O QUE DIFERE É O & NA FRENTE
DA VARIAVEL.
*/

