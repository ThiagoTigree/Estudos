#include <stdio.h>
#include <locale.h>
#include<math.h>
int main()
{
  setlocale(LC_ALL, "Portuguese");
  int n1,n2,soma = 0,base,op = 0,cod;

  printf("Insira o numero do codigo: ");
  scanf("%d",&cod);

  if(cod == 1)
  {
   printf("Insira o primeiro numero: ");
   scanf("%d",&n1);
   printf("Insira o segundo numer: ");
   scanf("%d",&n2);

   soma = (n2 + n1);

   printf("O resultado desta operacao é de %d ",soma);
  }else if(cod == 2)
  {
      printf("Insira a o numero que você quer a raiz quadrada");
      scanf("%d",&base);

      op = sqrt(base);

      printf("A raiz quadrada do número é de %d",op);
  }else
  {
      printf("Operação concluida");
  }
    return 0;
}

