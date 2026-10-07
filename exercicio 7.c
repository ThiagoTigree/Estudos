#include<stdio.h>
#include<math.h>
/*Faça uma função que possibilite o arredondamento de um número real para um número inteiro seguindo
os padrões científicos.*/

int main(void)
{
    int numero;
    arredondar(&numero);
}

int arredondar(double *numero)
{
    printf("Insira o numero : ");
    scanf("%lf", numero);

    printf("Numero real : %.2lf",*numero);
    printf("Numero convertido pra inteiro : %.0lf", round( *numero ));
    return 0;
}
