#include<stdio.h>
void saida(),entrada();
int processamento(),maiormenor();       //prototipação das funções para que main se mantenha sempre no topo

int n;

int main(void)
{
    int vetor[n];

    entrada();
    processamento();
    maiormenor();
    saida();
}

void entrada(){         //pega o tamanho do vetor

    printf("Insira o tamanho do vetor : ");
    scanf("%d",&n);
}

int processamento()     //pega elementos do vetor
{
    int vetor[n];

    for(int i=0;i<n;i++)
    {
     printf("Insira os elemento % do vetor : ",i+1);
     scanf("%d",&vetor[i]);
    }

    return 0;
}

int maiormenor()
{
    int maior1,maior2,menor1,menor2;
    int vetor[n];

    for(int i=0;i<n;i++)
    {
    if(i ==0)
    {
    maior1 = vetor[i];      //iguala os dois na primeira execução
    menor1 = vetor[i];
    }
    if(vetor[i] > maior1)   //se a posicao atual for maior que a maior --> maior2 passa a ser maior1 e maior1 passa a ser vetor --> maior2 esta correto
    {
    maior2 = maior1;
    maior1 = vetor[i];
    }else if(vetor[i] < menor1)
    {
    menor2 = menor1;            //maenor 2 vira menor 1 se o numero atual for menor que menor1 ; menor1 passa a ser o menor --> esta correto
    menor1 = vetor[i];
    }
    }
    return 0;
}

void saida()
{
    int vetor[n];
    int maior2,menor2;

    printf("Vetor : ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",vetor[i]);
    }
    printf("\n");
    printf("\nSegundo Maior : %d e segundo menor : %d ",maior2,menor2);
}
