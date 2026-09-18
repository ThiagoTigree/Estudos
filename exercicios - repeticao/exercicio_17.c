#include<stdio.h>
int main(void)
{
    /*17.Fazer um algoritmo para verificar se um número lido é número perfeito. Número perfeito é
    aquele que é igual a soma dos seus divisores. Por exemplo: 6 = 1 + 2 + 3*/
    int numero,soma=0;

    printf("Insira o numero que voce quer checar se eh perfeito : ");
    scanf("%d",&numero);

    for (int i=1;i<=numero/2;i++)   //6 --> 6/1,6/2,6/3;   10 --> 10/1,10/2,10/3,10/4,10/5
{
	if ( numero % i == 0)   //
	{
	soma += i;
	}
}
if(soma == numero)
{
    printf("Esse numero (%d) eh perfeito!! ",numero);
}else
{
    printf("esse numero (%d) nao eh perfeito!!",numero);
}
return 0;
}
