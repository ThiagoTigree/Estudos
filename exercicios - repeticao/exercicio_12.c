#include<stdio.h>
int main(void)
{
    int n,anterior=1,gerador=1,soma=1;;

    printf("Insira a quantidade n da sequencia de fibonacci : ");
    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
        if(i == 0)
        {
        gerador = 1;
        anterior = 0;
        printf("%d",gerador);
        }else if(i == 1)
        {
        gerador = 1;
        anterior = 1;
        printf(", %d",gerador);
        }else
        {
        soma = gerador + anterior;      //defino o o termo gerador da sequencia de fibonacci!!! (fibonacci(n) = termo 1 + termo 2

        anterior = gerador;            //apos o calculo da soma o anterior (termo 1) vira o sucessor (termo 2)

        gerador = soma;               //apos o anterior virar o sucessor nos fazemos com que o sucessor vire o resultado da soma passada(anterior + sucessor = novo sucessor)

        printf(", %d ",gerador);

        }
    }
    return 0;
}
