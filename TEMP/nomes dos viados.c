/*criar um vetor de strings e uma funcao pra escrever as strings e outra pra imprimir*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void imprime(char **,int);
void elementos(char **,int,int);

int main()
{
 char **nomes;
 int n,size;

 printf("Quantidade de strings que voce quer criar : ");    //quantos nomes o cabra quer escrever
 scanf("%d",&n);

 nomes = (char **) malloc(n*sizeof(char*));

 printf("Qual vai ser o tamanho maximo das strings : ");
 scanf("%d",&size);

 for(int i=0;i<n;i++)
 {
     nomes[i] = (char *) malloc((size+1)*sizeof(char));
 }

 elementos(nomes,n,size);
 imprime(nomes,n);

    for(int i=0;i<n;i++)
    {
        free(nomes[i]);
    }
    free(nomes);
    return 0;
}

void imprime(char **nomes, int n)
{
    for(int i=0;i<n;i++)
    {
        printf("String %d : %s\n",i+1,nomes[i]);
    }
}

void elementos(char **nomes,int n,int size)
{
    int ch;

    while((ch = getchar()) != '\n' && ch != EOF);

    for(int i=0;i<n;i++)
        {
        printf("Insira o %d* dos caras mais viados que existem : ",i+1);
        fgets(nomes[i],size,stdin);
         nomes[i][strcspn(nomes[i], "\n")] = '\0';  //pra cortar a linha final
        }
}
