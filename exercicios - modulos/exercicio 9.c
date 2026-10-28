#include<stdio.h>
<<<<<<< HEAD
//9. Construa uma função que verifique, sem utilizar a função mod, se um número é divisível por outro.

void divisivel(int *a1,int *a2);

void main()
{
    int a1,a2;
    divisivel(&a1,&a2);
}

void divisivel(int *a1,int *a2)
{
   int resultado;

   puts("Digite o numero a ser dividido : ");
   scanf("%d", a1);
   puts("Digite o numero que vai dividir : ");
   scanf("%d", a2);

   resultado = *a1 / *a2;

   if(*a2 * resultado == *a1)
   {
       puts("divisivel!");
   }else
   {
       puts("nao divisivel!");
   }
=======

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

>>>>>>> e7b743161a21b3f8bf3643ada826fa99ad3d17e3
}
