#include<stdio.h>

/*9. Construa uma função que verifique, sem utilizar a função mod, se um número é divisível por outro.*/

int main(void)
{
    int num1,num2;
    verifiquesemmod(&num1,&num2);
}

int verifiquesemmod(int *num1,int *num2)
{
    int result;

    printf("Insira o numero 1 : ");
    scanf("%d", num1);
    printf("Insira o numero 2 : ");
    scanf("%d", num2);

   result = *num1 / *num2;
   if(result * *num2 == *num1)  // se o resultado vezes o divisor for o numero -> divisel ; Ex: 10(num1) / 2(num2) -> 5(result) --> 5 * 2 -> 10
   {
       printf("Divisivel!");
   }else
   {
       printf("nao divisivel");
   }

}
