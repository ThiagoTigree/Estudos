#include<stdio.h>
#include<string.h>
int main()
{
    int n1,n2,result;
    char simbol;

    printf("Insira os valores: ");
    scanf("%d %d",&n1,&n2);

    printf("escolha a operacao (+-&*/): ");
    scanf(" %c",&simbol);

    switch(simbol)
    {
    case '+' :
        result = n1 + n2;
        break;
    case '-' :
        result = n1 - n2;
        break;
    case '*' :
        result = n1 * n2;
        break;
    case '/' :
        result = n1 / n2;
        break;
    default:
    } printf("O resultado da operacao com os numeros %d e %d eh de : %d",n1,n2,result);
    return 0;
}
