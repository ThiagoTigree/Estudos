#include<stdio.h>
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
}
