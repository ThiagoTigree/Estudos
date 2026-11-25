/*7. Crie uma função que recebe uma string e um caractere, e retorne o número de vezes que esse
caractere aparece na string.*/

/*vai receber a string e depois vou usar o metodo bobble sort pra procurar dentro do vetor de char e incrementar o contador*/

#include<stdio.h>
#include<ctype.h>
#include<locale.h>

void contagem(char frase[],char *escolha);

int main()
{
    char escolha;
    char frase[] = "FRESCOBOLL EH MUITO BOM";

    contagem(frase,&escolha);

    return 0;
}

void contagem(char frase[],char *escolha)
{

    printf("Insira a letra a ser procurada na palavra : ");
    scanf("%c",escolha);

    int cont=0;

    for(int i=0;frase[i] != '\0';i++)
    {
        if(*escolha == frase[i]) cont++;
    }

    printf("\t\nFrases : %s\n\n",frase);
    printf("\ncontador : %d\n",cont);
}