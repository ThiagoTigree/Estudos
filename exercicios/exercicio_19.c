#include <stdio.h>
#include <locale.h>
#include<math.h>
int main()
{
  setlocale(LC_ALL, "Portuguese");
  //receber valor do salario minimo,numero de horas trabalhadas,numero de dependentes do funcionario,quantidade de horas extras trabalhadas
  int salmin = 1621;
  float  salmes,vhorast,horast,depend,extras,total,grat,salreceb,qtdextras;

  printf("Insira a quantidade de horas trabalhadas: ");
  scanf("%f",&horast);
  printf("Insira a quantidade de dependentes: ");
  scanf("%f",&depend);
  printf("Insira a quantidade de horas extras trabalhadas");
  scanf("%f",&qtdextras);

  vhorast =  salmin / 5;
  salmes = vhorast * horast;
  extras = (vhorast * 1.5) * qtdextras;

  total = salmes + extras + depend * 32;

  if(total < 200)
  {
      printf("Isento!!");
  }else if(total >= 200 && total <= 500)
  {
      total = total * 0.9;
  }else if(total > 500)
  {
      total = total * 0.8;
  }
  if( total <= 350)
  {
      grat = 100;
  }else if(total > 350)
  {
      grat = 50;
  } salreceb = total + grat;
  printf("O salario a receber eh de %.2f",salreceb);
  return 0;
}

