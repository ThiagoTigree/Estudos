#include<stdio.h>
int main(void)
{
    /*11.Fazer um algoritmo para achar o fatorial de um número N.*/
    int fatorial=1,n;

    printf("Insira o numero que vai ser o fatorial : ");
    scanf("%d",&n);

    for(int i=n ;i > 1;i--) //i=5; enquanto i>0 ; 5 - 1...;
    {
        fatorial = fatorial * i;
    }
    printf("O resultado da fatorial de %d eh de %d",n,fatorial);
    return 0;
}
