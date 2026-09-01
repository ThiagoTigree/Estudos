#include<stdio.h>
#include<locale.h>
#include<math.h>
int main(void)
{
    setlocale(LC_ALL, "Portuguese");
    int a,b,c,delta = 0,x1,x2;
    printf("Insira o valor de a: ");
    scanf("%d",&a);
    printf("Insira o valor de b: ");
    scanf("%d",&b);
    printf("Insira o valor de c: ");
    scanf("%d",&c);
    //processamento
    delta = pow(b,2) - ( 4 * a * c);
    x1 = (-b + sqrt(delta)) / (2 * a);
    x2 = (-b - sqrt(delta)) / (2 * a);
    if(delta < 0)
    {
        printf("a equação não possui raízes reais");
    }if(a == 0)
    {
        printf("a equação não é de segundo grau!!");
    }
    //saida
    printf("O valor de delta é de %d e as raízes são x1: %d e x2: %d",delta,x1,x2);
    return 0;
}
