#include<stdio.h>
int main(void)
{
    int n;
    printf("Insira o tamanho incial do vetor : ");
    scanf("%d",&n);

    int vetor[n + 1],codigo,posicao,elemento;

    for(int i=0;i<n ;i++)
    {
    printf("Insira o elemento %d : ",i+1);
    scanf("%d",&vetor[i]);
    }

    printf("Matriz original : ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",vetor[i]);
    }
    printf("\n");

     printf("Voce deseja adicionar um novo elemento?(0 - nao ; 1 - sim) \n");
    scanf("%d",&codigo);

    if(codigo != 0 && codigo != 1)
    {
        return 1;
    }

    if(codigo == 1)
    {
        printf("insira a posicao que voce quer colocar o elemento : ");
        scanf("%d",&posicao);

        if(posicao > n || posicao < 1)
        {
            printf("insira um numero valido!");
            return 0;
        }

        printf("Insira o valor do elemento que esta na posicao %d : ",posicao);
        scanf("%d",&elemento);

         //consegui fazer ate aqui porém precisei de ajuda nessa parte!!

        for(int i=n;i>posicao-1;i--)              //(i = n(5) ; enquanto i(5) for maior que posicao(4 - 1 = 3) ; i decrementa)
        {
        vetor[i] = vetor[i-1];      //v[5] --> v[4] / v[4] --> v[3]
        }
        vetor[posicao - 1] = elemento;           //vetor[3] = 50(exemplo)
    }

    printf("Matriz apos a adição ; ");
    for(int i=0;i<n+1;i++)
    {
        printf("%d ",vetor[i]);
    }

    return 0;
}
