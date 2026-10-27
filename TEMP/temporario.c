#include<stdio.h>
#include<stdlib.h>

//mostra quantas vezes o X aparece dentro do vetor!

int contar(int *v,int n,int *x);

int main()
{
    int n,x;
    printf("Insira o tamanho do vetor : ");
    scanf("%d",&n);
    int *v;
    v = malloc(n * sizeof(int));


    contar(v,n,&x);


    return 0;
}

int contar(int v[],int n, int *x)
{

    for(int i=0;i<n;i++)
    {
        printf("Digite o elemento %d do vetor : ",i+1);
        scanf("%d",v[i]);
    }

    printf("\nDigite o numero procurado : ");
    scanf("%d", x);

    for(int i=0;i<n;i++);
    {
        if(v[i] == x)
        {
            printf("Numero %d encontrado!!!");
        }else{
        printf("nao encontrado!!!!");
        }
    }

}
