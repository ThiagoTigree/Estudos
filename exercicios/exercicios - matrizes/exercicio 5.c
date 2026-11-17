#include<stdio.h>
int main(void)
{
    int n;
    printf("Insira o tamanho da matriz : ");
    scanf("%d",&n);

    int vetor[n];

    for(int i=0;i<n;i++)
    {
    printf("Insira o elemento %d : ",i+1);
    scanf("%d",&vetor[i]);
    }
    printf("Matriz inversa: ");

    for(int i=n-1;i>=0;i--)
    {
        printf("%d , ",vetor[i]);
    }
    printf("\n");
    printf("Matriz normal : ");
    for(int i=0;i<n;i++)
    {
    printf("%d , ",vetor[i]);
    }
    return 0;
}
