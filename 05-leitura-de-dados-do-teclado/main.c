//Declara��o das bibliotecas padr�es
#include <stdio.h>
#include <stdlib.h>

//Fun��o principal
int main()
{
    int numero;
    float flutuante;
    char caractere;

    scanf("%d",&numero); //Declara��o para numero inteiro
    scanf("%f",&flutuante); //Declara��o para numero decimal
    scanf("%c",&caractere); //Declara��o para um caractere


    return 0;
}

/* Para fazer a leitura de dados do telado, usamos a fun�ao: scanf();
O formato da sua declara��o �:
                        scanf("tipo de entrada",&variavel);
OBS: ATENTE-SE QUE  DECLARA��O PARECE MUITO COM O DO PRINTF E O QUE DIFERE � O & NA FRENTE
DA VARIAVEL.
*/

