#include<stdio.h>
int main(void)
{
    int tamanho;
    printf("Insira o tamanho do vetor A : ");
    scanf("%d",&tamanho);

    int vetorA[tamanho],vetorB[tamanho];

    for(int i=0;i<tamanho;i++)
    {
    printf("Insira o elemetno %d : ",i+1);
    scanf("%d",&vetorA[i]);
    }

    printf("Vetor source : ");

    for(int i=0;i<tamanho;i++)
    {
    vetorB[i] = vetorA[i];
    printf("%d , ",vetorA[i]);
    }
    printf("\n");

    printf("Vetor Destination: ");
    for(int i=0;i<tamanho;i++)
    {
    printf("%d , ",vetorB[i]);
    }
    return 0;
}
