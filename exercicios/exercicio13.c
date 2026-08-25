#include<stdio.h>
#include<locale.h>
int main(void)
{
    setlocale(LC_ALL, "Portuguese");
    //fazer um programa q recebe a idade da pessoa e define de que grupo etário ela é
    int idade;
    //entrada
    printf("Insira sua idade: ");
    scanf("%d",&idade);

    if(idade > 0 && idade <= 2)
    {
    printf("Você é um recém nascido!!");
    }else if(idade > 3 && idade <= 11)
    {
    printf("Você é uma criança!!");
    }else if(idade > 12 && idade <= 19)
    {
    printf("Você é um adolescente!!");
    }else if(idade > 20 && idade <=55)
    {
    printf("Você é um adulto!!!");
    }else if(idade > 55)
    {
    printf("Você é um idoso!!!");
    }
    return 0;
}
