#include<stdio.h>
#include<locale.h>
#include<ctype.h>
int main()
{
    /*entrar com dois valores via teclado,onde o segundo deve ser maior que o primeiro,caso contrario solicitar
    novamente apenas o segundo valor!!*/
    setlocale(LC_ALL, "Portuguese");
    int val1,val2;

    printf("Insira os valor 1: ");
    scanf("%d",&val1);
    printf("Insira o valor 2 : ");
    scanf("%d",&val2);

    while(val2 <val1)
    {
        printf("Insira um segundo valor valido!!!! \n");
        scanf("%d",&val2);
    }
        printf("valores : %d(1) e %d(2)",val1,val2);
    return 0;
}
