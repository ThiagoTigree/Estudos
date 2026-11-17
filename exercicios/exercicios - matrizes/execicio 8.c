#include<stdio.h>
int processamento();
void entrada();
int n,cod;

int main(void)
{
    entrada();
    processamento();

    return 0;
}

void entrada()
{
    printf("Insira o tamanho do vetor : ");
    scanf("%d",&n);
}

int processamento()
{
    int vetor[n],posicao;
    for(int i=0;i<n;i++)
    {
    printf("Insira o elemente %d : ",i+1);
    scanf("%d",&vetor[i]);
    }

    printf("Matriz original : ");
    for(int i=0;i<n;i++)
    {printf("%d ",vetor[i]);}
    printf("\n");

    printf("Voce quer remover algum elemento?(1 - sim ; 0 - nao) ");
    scanf("%d",&cod);

    if(cod == 1)
    {
    printf("Escolha a posição a ser retirada : ");
    scanf("%d",&posicao);

    if(posicao > n && posicao < 1)
    {printf("Insira uma posicao valida!!!");}

    for(int i=posicao-1;i<n-1;i++)
    { vetor[i] = vetor[i+1];}

    }else{return 0;}

    printf("Matriz apos a remoção : ");
    for(int i=0;i<n - 1;i++)
    {
    printf("%d ",vetor[i]);
    }
    return 0;
}
