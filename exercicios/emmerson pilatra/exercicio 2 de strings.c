/*2. strlen recursivo
Escreva int tam(const char s[]), recursiva, que devolve o comprimento da string.
Compare o resultado com o strlen para várias palavras, incluindo a string vazia.

primeiro passo -> entender o que quer q seja feito

*quer que peguemos o tamanho a string, a dica era eh de que a funcao tem que retornar 1 + s[&1]) = (resto)

depois imprimir o resultado do strlen e o resultado da funcao

##CRIAR A FUNCAO RECURSIVA

*caso base : if (s[0] == '\0') return 0;

*caso recursivo : return 1 + tam(&s[1])

##CRIAR A FUNCAO DE TRACOS

corpo : printf("\n\n================================\n\n");

##CRIAR O CORPO(main)

*definir um vetor de strings(vetor de vetores) : char nomes[][20] (sendo o primeiro [] a quantidade de nomes e [20] o tamanho deles) e insrir as frases neles;

*invocar a funcao tam;

printf("\"%s\" : TAM : %d e strlen : %d",nomes,tam(s),strlen(nomes));

*/

#include<stdio.h>
#include<string.h>
#include<ctype.h>

void tracos();
int tam(const char s[]);

int main()
{
    const char nomes[4][20] = {"GOKU","VEGETA MALDITO","THIAGO CAPIROTO", "LOUCODOIDO"};

    tracos();

    for(int i=0;i<4;i++)
    {
        tam(nomes[i]);
        printf("\"%s\" : TAM : %d e strlen : %d",nomes[i],tam(nomes[i]),strlen(nomes[i]));
    }

    tracos();
    
    return 0;
}

void tracos()
{
    printf("\n\n============================\n\n");
}

int tam(const char s[])
{
    if(s[0] == '\0') return 0;

    return 1 + tam(&s[1]);
}