#include<stdio.h>
#include<locale.h>
int main()
{
    /*faca um programa que leia a idade de 20 pessoas e depois tire a media dessas idades*/
    int totidade=0,idade;
    float med = 0;

    for(int i=0;i<=20;i++)
    {
        printf("Insiram as suas idade aqui : ");
        scanf("%d",&idade);
        totidade += idade;
    }
        med = totidade / 20;

        printf("A media das idades eh de %.1f",med);
    return 0;
}
