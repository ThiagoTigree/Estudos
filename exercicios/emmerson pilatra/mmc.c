#include<stdio.h>
int main()
{
    //1) Elabore um programa em C que obtenha o mínimo múltiplo comum (MMC) entre dois números.
    //mdc eh o menor numero que eh multiplo de dois numeros dois numeros

    int n1,n2,r,mmc;

    printf("Insira o primeiro numero : ");
    scanf("%d",&n1);
    printf("Insira o segundo : ");
    scanf("%d",&n2);

    int a,b;
    a = n1; b = n2;
    while(b != 0)
    {
        r = a % b;
        a = b;
        b = r;
    }
    mmc =(n1 * n2) / a;
    printf("O mmc do numero dos numeros %d e %d eh :%d",n1,n2,mmc);
    return 0;
}
