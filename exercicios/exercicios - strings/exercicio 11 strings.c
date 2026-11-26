/*11. Declarar uma variável do tipo string e a seguir atribuir as letras maiúsculas do alfabeto as primeiras
vinte e seis posições da variável.*/

/*declarar um vetor de char e atribuir do indice 0 ao 25 as letras maiusculas do alfabeto
,posso fazer a partir do valor numerico pela tabela ASCII*/

#include<stdio.h>

void exibirstring(char string[]);

int main()
{
  char string[26];
  int acii = 65;

    for(int i=0;i<26;i++)
    {
        string[i] = (unsigned char) acii;
        acii++; 
    }

    exibirstring(string);

    return 0;
}

void exibirstring(char string[])
{
    for(int i=0;string[i] != '\0';i++)
    {
        printf(" %c \n",string[i]);
    }
}