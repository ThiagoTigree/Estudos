#include<stdio.h>
int main(void)
{
    int n;

    printf("Insira o tamanho do vetor : ");         //pede o tamanho do vetor
    scanf("%d",&n);             //recebe o tamanho do vetor

    int vetor[n],contI=0,contP=0;

    for(int i=0;i<n;i++)            //laço para rodar enquanto o i for menor que n
    {
    printf("Insira o numero %d : ",i+1);
    scanf("%d" ,&vetor[i]);

    if(vetor[i] % 2 == 0)
    {
    contP++;
    }else
    {
    contI++;
    }
    }
    printf("Matriz : ");
    for(int i=0;i<n;i++)
    {printf("%d , ",vetor[i]);}

    printf("\n QUANTIDADE DE ELEMENTOS PARES : %d \n",contP);
    printf("QUANTIDADE DE ELEMENTOS IMPARES : %d \n",contI);
    return 0;
}
