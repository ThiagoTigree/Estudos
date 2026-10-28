//10. Escreva uma função que calcule o mdc de dois números fornecidos pelo usuário.

#include<stdio.h>

void VerificarMDC(int *,int *);

void main()
{
    int n1,n2;
    VerificarMDC(&n1,&n2);
}

void VerificarMDC(int *n1,int *n2)
{
    printf("Escolha o numero 1 : ");
    scanf("%d", n1);
    printf("Escolha o numero 2 : ");
    scanf("%d", n2);

    int a,b;
    a = *n1;
    b = *n2;

    while(b!=0){
    int resto = a % b;      //12,18 -> resto = 12 ; 18,12 -> resto = 6 ; 12,6 -> resto =0;
    a = b;                  //12 -> 18 ; 18 -> 12 ; 12 -> 6 ; n1 vira o maximo divisor comum
    b = resto;}               //18 -> 12 ; 12 -> 6 ; 6 -> 0; loop acaba

    printf("MDC dos numero %d e  %d eh : %d",*n1,*n2,a);

}
