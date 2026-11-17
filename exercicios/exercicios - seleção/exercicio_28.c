#include<stdio.h>
#include<string.h>
int main()
{
    int valor1,valor2,valor3;

    printf("Insira os valores aqui: ");
    scanf("%d %d %d",&valor1,&valor2,&valor3);

    if (valor1 < valor2 + valor3 && valor2 < valor1 + valor3 && valor3 < valor2 + valor1)
    {
        printf("Pode ser um triangulo kkkkkkkkkkkkk \n");
        if(valor1 == valor2 && valor2 == valor3)
        {
            printf("eh um triangulo equilatero");
        }else if(valor1 == valor2 || valor2 == valor3|| valor1 == valor3)
        {
            printf("eh um triangulo isoceles");
        }else
        {
            printf("eh um escaleno" );
        }
    }else
    {
        printf("nao pode formar um triangulo!");
    }
    return 0;
}
