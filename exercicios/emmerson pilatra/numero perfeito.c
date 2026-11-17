#include<stdio.h>
int main(void)
{
    //B)algoritmo em C para achar um numero perfeito --> numero que somando seus divisores da ele mesmo

    int numero,somadiv=0,i=0;

    printf("Insira o que vai ser avaliado : ");
    scanf("%d",&numero);

    for(i=1;i<=numero / 2;i++)   //divide o numero por i, tem q ser ate a metade de do numero, pois caso seja o numero todo sempre sera o dobro do valor
    {
        if(numero % i == 0)
        {
            somadiv += i;
            printf("%d e %d e ",somadiv,i);
            printf("%d ;",numero);
        }
    }
    if(somadiv == numero)
    {
        printf("%d Eh um numero perfeito!!! ",numero);
    }else
    {
        printf("%d nao eh um numero perfeito!!!",numero);
    }
return 0;
}
