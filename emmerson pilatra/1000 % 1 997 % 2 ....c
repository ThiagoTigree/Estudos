#include<stdio.h>
int main()
{
    double soma = 0.0,rz = 3,base = 1000;

    for(int i = 1;i<= 50;i++)
    {
        soma += (base - (i - 1) * rz) / i ;
    }
    printf("a soma eh %.6lf",soma);
    return 0;
}
