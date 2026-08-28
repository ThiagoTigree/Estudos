#include<stdio.h>
#include<string.h>
#include<locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");
    float preco;
    int cod;

    printf("Insira o preco da etiqueta: ");
    scanf("%f",&preco);
    printf("Insira o codigo da forma de pagamento :");
    scanf("%d",&cod);

    switch(cod)
    {
    case 1:
    preco = preco * 0.9;
    break;
    case 2:
    preco = preco * 0.95;
    break;
    case 3:
    preco = preco;
    break;
    case 4:
    preco = preco * 1.10;
    break;
    default:
    }   printf("O valor total do pagamento sera de %.2f",preco);
    return 0;
}
