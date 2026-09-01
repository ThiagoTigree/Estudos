#include<stdio.h>
#include<math.h>
#include<locale.h>
int main()
{
//aumento de 30% para funcionários com o salario(entrada) inferior a 500 reais
    setlocale(LC_ALL, "Portuguese");
   float salini,salajust;

   printf("Insira o valor do seu salário:  ");
   scanf("%f",&salini);

   if(salini <= 500)
   {
   salajust = salini * 1.30;
   printf("Parabéns, seu novo salário é de %.2f !!",salajust);
   }else if(salini > 500)
   {
   printf("Você não tem direito ao reajuste salarial!!! ");
   } return 0;
}
