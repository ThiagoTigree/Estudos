#include<stdio.h>
int main(void)
{
    int n,num1,num2,soma=0;

    printf("Insira o limite da sequencia : ");
    scanf("%d",&n);

    printf("Insira o primiero numero da sequencia : ");
    scanf(" %d",&num1);
    printf("Insira o segundo numero da sequencia : ");
    scanf(" %d",&num2);

    for(int i=0;i<n;i++)
    {
    if(i == 0)      // todo primeiro termo vai ser igual ao num 1;
    {
        printf("%d ,",num1);        //imprime num 1 primeiro
    }else if(i == 1)        //todo segundo termo vai ser igual ao num2
    {
        printf("%i ,",num2);        //imprime num2 de segundo
    }else
    {

    soma = num1 + num2;         //soma = anterior + sucessor

    printf("%d ,",soma);    //imprime a sequencia

    num1 = num2;        //anterior vira sucessor passado

    num2 = soma;        //sucessor vira o proximo sucessor
    }
    }
    return 0;
}
