/*13. Declarar uma variável do tipo string e a seguir atribuir os caracteres numéricos as primeiras dez
posições da variável.*/

#include<stdio.h>

void exibir(char frase[]);

int main()
{
    char vetor[11];
    int acii = 48;

    for(int i=0;i<10;i++)
    {
        vetor[i] = (unsigned char) acii;
        acii++;
    }

    vetor[10] = '\0';

    exibir(vetor);

    return 0;
}

void exibir(char frase[])
{
    for(int i=0;frase[i] != '\0';i++)
    {
        printf(" %c \n",frase[i]);
    }
}