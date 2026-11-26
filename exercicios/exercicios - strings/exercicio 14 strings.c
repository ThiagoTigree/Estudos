/*14. Escreva um programa que calcule e escreva a quantidade de vezes que a letra 'a' aparece em uma
frase fornecida pelo usuário.*/

#define TAM 100

#include<stdio.h>
#include<string.h>

void verificar(char frase[]);

int main()
{
    char frases[TAM];

    printf("Insira as frases desejadas : ");
    fgets(frases,TAM,stdin);

    frases[strcspn(frases, "\n")] = '\0';

    verificar(frases);

    return 0;
}

void verificar(char frase[])
{
    int cont=0;
    for(int i=0;frase[i] != '\0';i++)
    {
        if(frase[i] == 'a') cont++;
    }
    printf("\t\tA letra a apareceu : %d!!\n",cont);
}