/*7. Escreva a função int somaVetor(int v[], int n), que devolva a soma dos n primeiros elementos do vetor v.
xemplo: v = {7, 3, 9, 1, 5}, n = 5 → 25 */

#include<stdio.h>
#include<stdlib.h>

int SomaVetor(int vetor[],int *);

int main()
{
    int *vetor;
    int n;

    printf("A soma dos elementos do vetor eh de : %d",SomaVetor(vetor,&n));
    return 0;
}

int SomaVetor(int *vetor,int *n)
{
    printf("\t------------------------INSIRA O TAMANHO DO VETOR------------------------\n\n\n");
    scanf("%d", n);

    vetor = malloc(*n * sizeof(int));

    for(int i=0;i<*n;i++)
    {
    printf("\nInsira os elementos do vetor : ");
    scanf("%d",&vetor[i]);
    }

    int sominha=0;

    for(int i=0;i<*n;i++)
    {
        sominha += vetor[i];
    }

    return sominha;
}
