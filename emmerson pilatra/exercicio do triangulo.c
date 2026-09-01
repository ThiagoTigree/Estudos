#include <stdio.h>
#include <locale.h>
#include<math.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int a,b,c;
    printf("Insira valor de a: ");
    scanf("%d",&a);
    printf("Insira valor de b: ");
    scanf("%d",&b);
    printf("Insira valor de c: ");
    scanf("%d",&c);

    if(a < b + c && b < a + c && c < a + b)
    {//condicao para classificar o tipo de triangulo ultilizando um if aninhado
        printf("Os valores podem formar um triângulo!!!");
    if( a == b && b == c)
    {
        printf("O triangulo eh equilatero");
    }else if(a == b|| b == c || a == c)
    {
        printf("o triangulo eh isoceles");
    }else
    {
        printf("o triangulo eh escaleno");
    }
    }else
    {
        printf("os valores nao formam um triangulo");
    }
    return 0;
}
