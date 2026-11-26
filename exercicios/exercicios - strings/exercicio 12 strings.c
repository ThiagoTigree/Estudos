/*12. Declarar uma variável do tipo string e a seguir atribuir as letras minúsculas do alfabeto as primeiras
vinte e seis posições da variável.*/

/*posso fazer do mesmo jeito que a outra*/

#include<stdio.h>

void exibir(char frase[]);

int main()
{
    char string[26];
    int acii = 97;

    for(int i=0;i < 26;i++)
    {
        string[i] = (unsigned char) acii;
        acii++;
    }

    exibir(string);

    return 0;
}

void exibir(char frase[])
{
    for(int i=0;frase[i] != '\0';i++)
    {
        printf(" %c \n",frase[i]);
    }
}