/*13. Escreva a função int busca(int v[], int ini, int fim, int x), que implemente a busca binária recursiva em um
vetor ordenado em ordem crescente. Ela deve devolver a posição de x ou −1 se x não estiver no vetor.
Exemplo: v = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91}
busca(v, 0, 9, 23) → 5
busca(v, 0, 9, 10) → −1*/

#include<stdio.h>
#include<stdlib.h>

int busca(int v[],int ini,int fim,int x);
void elementos(int *vetor,int n);

int main()
{
    int n;

    printf("Insira o tamanho do vetor : ");
    scanf("%d",&n);

    int *vetor = (int *) malloc(n * sizeof(int));

    elementos(vetor,n);

    int x;
    printf("==========INSIRA O NUMERO A SER BUSCADO DENTRO DO VETOR==========\n\n\n\n");
    scanf("\t%d",&x);

    printf("\n\nIndex : %d",busca(vetor,0,n-1,x));

}

void elementos(int *vetor,int n)
{
    for(int i=0;i<n;i++)
    {
        printf("Insira o elemento %d do vetor : ",i+1);
        scanf("%d",&vetor[i]);
    }
}

int busca(int *vetor,int ini,int fim,int x)
{
  if(ini > fim) return -1;      //parada caso nao ache o valor procurado

  int meio = ini + (fim - ini) / 2; //define meio como inicio + (fim - inicio) / 2 -> 0 + 9 - 0 /2 -> meio = 4 -> 1 + 4 (5)

  if(vetor[meio] == x) return meio;

  if(vetor[meio] > x) return busca(vetor,ini,meio - 1,x);

  return busca(vetor,meio + 1,fim,x);

}
