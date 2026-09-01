#include<stdio.h>
#include<locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");
 /* inserir preço e código de procedencia
    Código Procedência
    1 Sul
    2 Norte
    3 Leste
    4 Oeste
    5 ou 6 Nordeste
    7.8 ou 9 Sudeste
    10 até 20 Centro-Oeste
    21 até 30 Nordeste*/
    int preco,codigo;
    //entrada
    printf("Insira o valor do produto arredondado: ");
    scanf("%d",&preco);
    printf("Insira o codigo de procedência(ate 30): ");
    scanf("%d",&codigo);

    if(codigo == 1)
    {
        printf("o produto veio do sul!!");
    }else if(codigo == 2)
    {
        printf("o produto veio do norte e custa %d!!",preco);
    }else if(codigo == 3)
    {
        printf("o produto veio do leste e custa %d!!",preco);
    }else if(codigo == 4)
    {
        printf("o produto veio do oeste e custa %d!!",preco);
    }else if(codigo == 5 && codigo == 6)
    {
        printf("o produto veio do noroeste e custa %d!!",preco);
    }else if(codigo >= 7 && codigo <= 9)
    {
        printf("o produto veio do sudeste e custa %d!!",preco);
    }else if(codigo >= 10 && codigo <= 20)
    {
        printf("o produto veio de centro-oeste e custa %d!!",preco);
    }else if(codigo >= 21 && codigo <= 30)
    {
        printf("o produto veio do nordeste e custa %d",preco);
    } return 0;
}
