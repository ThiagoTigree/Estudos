#include<stdio.h>
#include<locale.h>
int main()
{
    /*separar os grupos de nadadores por idade(entrada)
    infantil A 5 – 7 anos
    infantil B 8 – 10 anos
    juvenil A 11 – 13 anos
    juvenil B 14 – 17 anos
    sênior maiores de 18 anos*/
    int idade;
    //entrada
    printf("Insira sua idade: ");
    scanf("%d",&idade);
    //condicionais/processamento
    if(idade > 5 && idade <= 7)
    {
        printf("Você é do grupo infantil A!!!");
    }else if(idade > 8 && idade <= 10)
    {
        printf("Você é do grupo infantil B!!!");
    }else if(idade > 11 && idade <= 13)
    {
        printf("Você é dp grupo juvenil A!!!");
    }else if(idade > 14 && idade <= 17)
    {
        printf("Você é do grupo Juvenil B!!!!");
    }else if(idade > 18)
    {
        printf("Você é do grupo Sênior!!!");
    } return 0;

}
