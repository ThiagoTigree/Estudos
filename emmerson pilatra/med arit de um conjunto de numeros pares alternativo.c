#include<stdio.h>
#include<locale.h>
int main(void)
{
    int vetor,soma = 0;
    float ma = 0;
    printf("Digite o tamanho do conjunto de numeros : ");
    scanf("%d",&vetor);

    int numpar[vetor];

    for(int i=0;i<vetor;i++)
    {
    do{
       printf("Insira um numero par : ");
       scanf("%d",&numpar[i]);

       if(numpar[i] % 2 != 0)   //pra imprimir a mensagem de numero impar
       {
           printf(" \n numero invalido!tem que ser par!!!\ ");
       }
    }while(numpar[i] % 2 != 0);//repete se o numero nao for impar

    soma += numpar[i];
    }

    ma = (float)soma / vetor;

    printf("O valor da media aritmetica eh de : %.2f ",ma);
    return 0;
}
