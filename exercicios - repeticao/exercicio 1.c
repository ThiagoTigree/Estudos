#include<stdio.h>
#include<locale.h>
#include<ctype.h>
int main()
{
    /*1. Exibir a soma dos números positivos no intervalo de um a cem.*/
    setlocale(LC_ALL, "Portuguese");
    int soma =0;

    for(int i = 0;i<101;i++)   //ultilizamos 101 porque os 50 pares dão 101, justificado pela soma de gauss e tb pelo somatorio de PA
    {
        soma += i;
    }
    printf("a soma dos 100 primeiros numeros positivos no intervalo de um a cem sao de %d",soma);
    return 0;
}
