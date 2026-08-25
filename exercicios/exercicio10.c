#include<stdio.h>
#include<locale.h>
int main(void)
{
    //programa pra verificar se o numero é par ou impar
    //variáveis
    int num;
    //entrada
    printf("Insira o numero: ");
    scanf("%d",&num);
    //processamento/condicionais
    if(num % 2 == 0)
    {
    printf("o numero é par!!!");
    }else {printf("O numero é ímpar!!!");}
    return 0;
}
