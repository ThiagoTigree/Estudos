#include <stdio.h>
#include <locale.h>
#include<math.h>
int main()
{
  setlocale(LC_ALL, "Portuguese");
  //idade(18 a 24,25 a 40 e 41 a 70) e grupo de risco(b,m ou a)
  int idade;
  char grupo;

  printf("Insira sua idade: ");
  scanf("%d",&idade);
  printf("Insira seu grupo de risco(b,m ou a): ");
  scanf(" %c",&grupo);

  if(idade >= 18 && idade <= 24){
    if(grupo == 'b')
    {
        printf("cod 7");
    }else if(grupo == 'm')
    {
        printf("cod 8");
    }else if(grupo == 'a')
    {
        printf("cod 9");
    }}else if(idade >= 25 && idade <= 40){
        if(grupo == 'b')
        {
            printf("cod 4");
        }else if(grupo == 'm')
        {
            printf("cod 5");
        }else if(grupo == 'a')
        {
            printf("cod 6");
        }}else if(idade >= 41 && idade <= 70)
        {
            if(grupo == 'b')
            {
                printf("cod 1");
            }else if(grupo == 'm')
            {
                printf("cod 2");
            }else if(grupo == 'a')
            {
                printf("cod 3");
            }}
    return 0;
}

