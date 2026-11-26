/*9. Crie uma função que mostra os caracteres de uma string são repetidos.*/

/*posso fazer isso por meio de espaços dentro de um vetor que equivalem ao valor de cada letras dentro da tabela ASCII
e assim deixando pronto ate mesmo pra receber so numeros ou simbolos*/

/* a funcao vai apenas percorrer o vetor e atribuir aos contadores dentro do vetor*/

#include<stdio.h>

void repetidos(char frase[]);

int main()
{
    char letras[] = "to fazendo o que eu quiser na vida e tudo vai dar certo por que eu sou muito poderoso";

    repetidos(letras);

    return 0;
}

void repetidos(char frase[])
{
    int ASCII[256] = {0};

    for(int i=0;frase[i] != '\0';i++)
    {
        ASCII[(unsigned char)frase[i]]++;
    }

    for(int i=0;i<256;i++)
    {
        if(ASCII[i] > 1) printf("Caractere %c apareceu repetidamente %d vezes\n",i,ASCII[i]);
    }
}