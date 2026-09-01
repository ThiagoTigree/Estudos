#include<stdio.h>
#include<locale.h>
int recursao()
{
    int vetor,razao,gerador = 0,a1;

    printf("Digite o tamanho da sua PA : ");
    scanf("%d",&vetor);
    printf("Digite o A1 : ");
    scanf("%d",&a1);
    printf("Digite a razao da PA : ");
    scanf("%d",&razao);

    for(int i = 0;i < vetor;i++)
    {
        gerador = a1 + (i * razao);
        printf(" elemento %d : %d",i + 1,gerador);
    }
    return recursao;
}
int main(void)
{
    setlocale(LC_ALL, "Portuguese");
    recursao();
    return 0;
}
