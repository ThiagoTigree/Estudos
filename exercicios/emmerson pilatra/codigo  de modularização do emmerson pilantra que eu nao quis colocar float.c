#include<stdio.h>
int lernota(),media(),maiormenor(),aprv();

int nota[4],med=0,maior,menor;
int main(void)
{
    lernota();
    media();
    maiormenor();
    aprv();
}

int lernota()
{

    for(int i=0;i<4;i++)
    {
    printf("Insira as notas %d : ",i+1);
    scanf("%d",&nota[i]);
    }
    return 0;
}

int media()
{
    for(int i=0;i<4;i++)
    {
        med += nota[i];
    }
    return 0;
}

int maiormenor()
{
    for(int i=0;i<4;i++)
    {
        if(i == 0)
        {
            maior=nota[0];
            menor=nota[0];
        }

        if(maior > nota[i])
        {
            maior = nota[i];
        }else
        {
            menor = nota[i];
        }
        return 0;
    }
}

int aprv()
{
    if((med / 4) > 7)
    {
        printf("Aprovado!!!");
        printf("\n%d",med/7);
    }else
    {
       printf("Reprovado!!!");
       printf("\n%d",med/7);
    }
return 0;
}




