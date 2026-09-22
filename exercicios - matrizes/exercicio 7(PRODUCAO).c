#include<stdio.h>
int main(void)
{
    int n;
    printf("Insira o tamanho incial do vetor : ");
    scanf("%d",&n);

    int vetor[n],codigo,posicao;

    for(int i=0;i<n;i++)
    {
    printf("Insira o elemento %d : ",i+1);
    scanf("%d",&vetor[i]);
    }

    while(codigo != 0)
    printf("Voce deseja adicionar um novo elemento?(0 - nao ; 1 - sim) : ");
    scanf("%d",&codigo);
    if(codigo == 1)
    {
        printf("insira a posicao que voce quer colocar o elemento : ");
        scanf("%d",&posicao);
    }


    return 0;
}
