#include <stdio.h>
#include <locale.h>
#include<math.h>
int main()
{
  setlocale(LC_ALL, "Portuguese");
    //recebe horas extras,horas - falta e horas totais(tudo em minutos) e imprima o numero de horas extras ,horas totais,horas-falta(em horas)
    int extra,falta,total = 0,premio = 0;
    printf("Insira a quantidade de horas extras em minutos: ");
    scanf("%d",&extra);
    printf("Insira a quantidade de horas faltadas em minutos: ");
    scanf("%d",&falta);

    total = extra - (falta * 2 / 3);

    if(total <= 600)
    {
        premio = 100;
    }else if(total > 600 && total <= 1200)
    {
        premio = 200;
    }else if(total > 1200 && total <= 1800)
    {
        premio = 300;
    }else if(total > 1800 && total <= 2400)
    {
        premio = 400;
    }else if(total > 2400)
    {
        premio = 500;
    }

    if(extra >= 1)
    {
        extra = extra / 60;
    }
    if (total >= 1)
    {
        total = total / 60;
    }
    if(falta >= 1)
    {
        falta = falta / 60;
    }
    printf("O valor em horas das horas extras é de %d ,o de horas faltadas é de %d , os de totais é de %d e o premio ganho é de %d",extra,falta,total,premio);
  return 0;
}

