/*

**********************************************************************
* PUCMINAS SÃO GABRIEL                                               *
* DISCIPLINA: LABORATÓRIO DE AED I                                   *
* PROFESSOR:  JÚLIO CONWAY                                           *
* GRUPO: Carlos Araújo e Deyber Pimentel                             *
* PROGRAMA 2                                                         *
**********************************************************************

*/

#include <iostream>
#include <stdio.h>

using namespace std;

int main ()
{
    //Declarando e inicializando variáveis:

    int a=0;//a recebe o primeiro valor a ser trocado.
    int b=0;//b recebe o segundo valor a ser trocado.
    int c=0;//c é a variável temporária para que a troca possa ser feita.

    //Apresentando o programa ao usuário:

    printf("Exercicio 2\nPrograma para trocar os valores de duas variaveis dadas. Exemplo: A=10 e B=20 retorna A=20 e B=10.\nProgramacao: Carlos Araujo & Deyber Pimentel.\n\n");

    //Solicitando valores ao usuário:

    printf ("Digite o valor de A o valor de B para que sejam trocados:\nA:");
    scanf("%d", &a);
    printf ("\nB:");
    scanf("%d", &b);

    //Efetuando a troca através de uma variável temporária:

    c=a;
    a=b;
    b=c;

    //Mostrando resultado ao usuário:

    printf ("O valor trocado de A e:\n%d\nO valor trocado de B e:\n%d\n",a,b);

    return 0;
}

