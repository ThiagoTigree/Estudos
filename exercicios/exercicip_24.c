#include<stdio.h>
#include<string.h>
#include<locale.h>
#include <ctype.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int n1,n2,n3,temp = 0;

    printf("Insira os valores: ");
    scanf("%d %d %d",&n1,&n2,&n3);

    if(n1 > n2)
    {
        temp = n1;
        n1 = n2;
        n2 = temp;
    }
    if(n1 > n3)
    {
        temp = n1;
        n1 = n3;
        n3 = temp;
    }
    if(n2 > n3)
    {
        temp = n2;
        n2 = n3;
        n3 = temp;
    }   //a logica por tras é que toda vez que o de tras(a atras de b ou b atras de c) for maior, substituir os valores pro maior ficar na frente
    printf("Os numeros em ordem descrescente ficaram como: %d , %d e %d",n1,n2,n3);
    return 0;
}
