#include<stdio.h>
#include<locale.h>
int main(void)
{
    // Elabore um programa em C que obtenha o maximo divisor comum(MDC) entre dois números.//
    float n1,n2,r;

    printf("Insira o primeiro : ");
    scanf("%f",&n1);
    printf("Insira o segundo : ");
    scanf("%f",&n2);

    int a,b;
    a = n1;
    b = n2;

    do{
        r = a % b;
        a = b;
        b = r;
    }while (b != 0);

    printf(" O mdc de deste numero dos numero %.2f e %.2f eh de : %d",n1,n2,a);
    return 0;
}
