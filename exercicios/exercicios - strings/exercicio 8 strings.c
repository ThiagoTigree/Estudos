/*8. Crie uma função que recebe uma string e um caractere, e apague todas as ocorrências desses
caractere na string.*/

#include<stdio.h>

int mudar(char frase[],char ocorrencia);

int main()
{
    char palavras[] = "loucuras doidas ";  
    char ocorrencia;

    printf("Insira a letra a ser substituida : ");
    scanf(" %c",&ocorrencia);

    mudar(palavras,ocorrencia);

    return 0;
}

int mudar(char frase[],char ocorrencia)
{
    for(int i=0;frase[i] != '\0';i++)
    {
        if(ocorrencia == frase[i]) frase[i] = ' ';
    }
    printf("%s",frase);
}