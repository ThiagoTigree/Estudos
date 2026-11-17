#include<stdio.h>
int main(void)
{
    int next=0,n,termo1,termo2;

    printf("Insira a quantidade da sequencia de : ");
    scanf("%d",&n);
    if(n <= 0 )
    {
        printf("insira um numero valido!!!\n");
    }
    printf("Insira o primeiro termo : ");
    scanf("%d",&termo1);
    printf("Insira o segundo termo : ");
    scanf("%d",&termo2);

    for(int i=1;i<=n;i++)
    {
        if(i == 1)
        {
            printf("%d",termo1);
            continue;
        }else if(i == 2)
        {
            printf(", %d",termo2);
        }
        next = termo1 + termo2;     //definindo proximo termo (sucessor + antecessor)
        printf(", %d",next);

        termo1 = termo2;        //atualizacao de variaveis
        termo2 = next;
    }
    return 0;
}
