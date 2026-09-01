#include<stdio.h>
#include<locale.h>
int main(void)
{
    setlocale(LC_ALL, "Portuguese");
    //receber dois numeros e imprimir o menor dos dois
    int n1,n2;
    printf("Insira o primeiro número: ");
    scanf("%d",&n1);
    printf("Insira o segundo número: ");
    scanf("%d",&n2);

    if(n1 >= n2)
    {
    printf("%d",n2);
    }else
    {
    printf("%d",n1);
    }
    return 0;
}
