#include <stdio.h>
#include <locale.h>
#include<math.h>
#include<string.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int idade;
    //entrada de dados
    printf("Insira sua idade:  ");
    scanf("%d",&idade);
    //processamento/condicional
    if(idade >= 18)
    {
        printf("Parabéns,você é maior de idade!!!");
    }else
    {
        printf("Você é menor de idade");
    } return 0;
}

