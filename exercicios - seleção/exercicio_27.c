#include<stdio.h>
#include<string.h>
int main()
{
    int num;
    char *quale;

    printf("Insira Num aqui: ");
    scanf("%d",&num);

    if(num > 0)
    {
        quale = "NUMERO POSTIIVO";
    }else if(num < 0)
    {
        quale = "NUMERO NEGATIVO";
    }else
    {
        printf("ZERO");
    } printf("%s",quale);//a) NUMERO POSITIVO ; b) NUMERO NEGATIVO ; c) ZERO(null)
    return 0;
}
