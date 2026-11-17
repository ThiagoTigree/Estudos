#include<stdio.h>
int main(void)
{
    /*13.Fazer um programa para achar a série de Bergamacci dos n primeiros termos: 1 1 1 1 3 5
    9 17 ...*/
    int soma=0,termo1=1,termo2=1,termo3=1,n;

    printf("Insira o limite da sequencia : ");
    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
        if(i == 0)
        {
            printf("%d",termo1);
        }else if(i == 1)
        {
            printf(", %d",termo2);
        }else if(i == 2)
        {
            printf(", %d",termo3);
        }else
        {
        soma = termo1 + termo2 + termo3;
        termo1 = termo2;
        termo2 = termo3;
        termo3 = soma;
        printf(", %d",soma);
        }
    }
    return 0;
}
