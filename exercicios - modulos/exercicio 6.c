#include<stdio.h>

int main(void)
{
    int num1,num2;
    verificar(&num1,&num2);
}

int verificar(int *num1,int *num2)
{
    printf("Insira o numero 1 : ");
    scanf("%d",num1);
    printf("Insira o numero 2 : ");
    scanf("%d",num2);

    if(*num1 % *num2 == 0)
    {
        printf("Divisivel!");
    }else{
    printf("Nao divisivel!");
    }
    return 0;
}
