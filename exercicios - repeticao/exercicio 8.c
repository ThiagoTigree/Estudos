#include<stdio.h>
#include<ctype.h>
int main(void)
{
    /*Fazer um programa que leia um conjunto de dados contendo o sexo e a altura de 50 pessoas.
    Escreva a altura média das mulheres.*/

    float alturaF,med=0,cont=0,somaF=0;
    float menor=0,maior=0;
    char sexo;

    for(int i=0;i<50;i++)      //repetir 50 vezes
    {

    printf("Insira seu sexo (f para feminino e m para masculino) : ");
    scanf(" %c",&sexo);     //pegar o genero
    sexo = tolower(sexo);   //deixar todas as letras minusculas!!!

    switch(sexo)    //switch baseado no genero
    {
    case 'f':
        printf("Insira sua altura : ");
        scanf("%f",&alturaF);
        somaF+=alturaF;     //somar as alturas a cada repeticao --> IMPORTANTE
        cont++;
        if(cont == 1)       //iguala as alturas quando ele entrar no loop
        {
            menor = alturaF;
            maior = alturaF;
        }else
        {
        if(alturaF > maior)
        {
            maior = alturaF;
        }else if(alturaF < menor)
        {
            menor = alturaF;
        }}
        break;
    case 'm':
        printf("Insira sua altura : ");
        scanf("%f",&alturaF);    //aqui nao importa pois ele nao vai somar no somatorio entao tanto faz
        break;
    default:
        printf("Insira um genero valido!!!");
        i--;    //precisava disso toda vez q um genero invalidor entrar pra poder repetir denovo
        break;
    }
    }
        med = somaF / cont; //defino que a media de altura das mulheres eh a soma das alturas dividida pela quantidade de mulheres!!!!


    if(cont > 0)        //caso haja ao menos uma mulher isso funciona
    {
    printf("A media de altura femina eh de %f",med);
    printf("Sendo a menor mulher de %.2f e a maior de %.2f",menor,maior);
    }else
    {
        printf("Nenhuma mulher detectaeda nessa porra!!!");
    }

    return 0;
}
