#include<stdio.h>

int soma(int *num1,int *num2);

void main()
{
    int num1,num2;

    soma(&num1,&num2);

}
 int soma(int *num1,int *num2)
 {

    *num1 = 60;
    *num2 = 60;
    int resultado = *num1 + *num2;

     printf("O resultado da conta contida na funcao soma e: %i\n",resultado);

return 0;
 }
