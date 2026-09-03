#include<stdio.h>
#include<locale.h>
int main()
{
    double soma = 0.0;
    double sinal = 1.0;

    for(int i = 1,j = 1000;i<=50;i++,j -= 3)
    {
        soma += sinal * ( (double) j  / i);
        sinal = -sinal;
    }
    printf("A soma eh de %.6lf",soma);
    return 0;
}
