#include<stdio.h>
void saida,entrada;
int processamento,maiormenor;       //prototipação das funções para que main se mantenha sempre no topo

int n;

int main(void)
{}

void entrada(){         //pega o tamanho do vetor

    printf("Insira o tamanho do vetor : ");
    scanf("%d",&n);
}

int processamento(vetor[n])     //pega elementos do vetor
{
    int vetor[n];

    for(int i=0;i<n;i++)
    {printf("Insira os elemento % do vetor : ",i+1); scanf("%d",&vetor[i]);}

    return 0;
}

int maiormenor()
{
    int maior1,maior2,menor1,menor2;

    for(int i=0;i<n;i++)
    {
    if(i ==0)
    {
    maior1 = vetor[i];      //iguala os dois na primeira execução
    menor1 = vetor[i];
    }
    if(vetor[i] > maior)   //se a posicao atual for maior que a maior --> maior2 passa a ser maior1 e maior1 passa a ser vetor --> maior2 esta correto
    {
    maior2 = maior1;
    maior1 = vetor[i];
    }else
    {
    menor2 = menor1;            //
    menor1 = vetor[i];
    }
    }
}
