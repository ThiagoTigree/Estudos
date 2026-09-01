#include<stdio.h>
#include<locale.h>
int main(void)
{
    int vetor,soma = 0;
    float ma = 0;
    printf("Digite o tamanho do conjunto de numeros : ");
    scanf("%d",&vetor);

    int numpar[vetor];

    for(int i = 0;i<vetor;i++)//loop para pegar o numero de cada um dos numeros contidos no vetor
    {
        printf("Insira o numero par %d : ",i + 1);
        scanf("%d",&numpar[i]);
        soma += numpar[i];// acumula os numeros obtidos para que nos possamos dividir depois
        if(numpar[i] % 2 != 0)
        {
            printf("DIgite um numero par valido!!!\n");
            continue;
        }

    }


    ma = (float)soma / vetor;

    printf("O valor da media aritmetica eh de : %.2f ",ma);
    return 0;
}
