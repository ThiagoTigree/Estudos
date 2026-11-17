#include<stdio.h>
int main(void)
{
    //16.Fazer um algoritmo para verificar se um número lido é primo ou não. Número primo é aquele
    //que é divisível por 1 e por ele mesmo.

    int numero,i=1,cont=0;

    printf("Insira o numero que voce quer checar se eh primo ou nao : ");
    scanf("%d",&numero);

    for(i;i<=numero;i++)
    {
        if(numero % i == 0)
        {
        cont++;
        }
    }
    if(cont == 1)
    {
    printf("O numero 1 eh primo sim cara burro!!!");
    }else if(cont == 2)
    {
    printf("O numero %d eh primo!!!",numero);
    }else
    {printf("Esse numero nao eh primo!!!");}
    return 0;
}
