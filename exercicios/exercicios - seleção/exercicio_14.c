#include<stdio.h>
#include<locale.h>
int main(void)
{
    setlocale(LC_ALL, "Portuguese");
   //fazer um programa que recebe o codigo correspondente ao cargo e devolve o aumento a ser recebido
   int cod;
   printf("Insira seu codigo de trabalho: ");
   scanf("%d",&cod);
   //pode ser feito com condicionais ou com switch case, eu vou fazer com swtich case q o codigo eh meu e quero q se foda
   switch(cod)
   {
   case 1:
   printf("Você receberá 50% de aumento!!");
   break;
   case 2:
   printf("Você receberá 35% de aumento !!!");
   break;
   case 3:
   printf("Você receberá 20% de aumento !!!");
   break;
   case 4:
   printf("Você receberá 10% de aumento!!");
   break;
   case 5:
   printf("Voce não receberá aumento!!!");
   break;
   default:
   printf("ERRO");
   break;
   }
    return 0;
}
