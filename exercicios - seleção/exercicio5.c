#include <stdio.h>
#include <locale.h>
int main()
{
    //ate 300 50% mais de 300 30%
    setlocale(LC_ALL, "Portuguese");
    float sal,salajust;
    //entrada de dados
    printf("Insira seu salario: ");
    scanf("%f",&sal);
    //processamento/condicionais
    if(sal <= 300)
    {
        salajust = sal * 1.50;
    }else if(sal > 300)
    {
        salajust = sal * 1.30;
    } printf("O sálario reajustado é de %.2f ",salajust);
    return 0;
}

