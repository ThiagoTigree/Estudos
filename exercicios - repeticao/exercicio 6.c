#include<stdio.h>
#include<locale.h>
/*int main(void)
{
    setlocale(LC_ALL, "Portuguese");
    int vetor;
    float media = 0;
    printf("Insira o tamanho do conjunto de idades : \n");
    scanf("%i",&vetor);

    for(int i=0;i<vetor;i++)
    {
    int idades[i];

    printf("Insira a idade numero %d : ",i + 1);
    scanf("%i",&idades[i]);

    media += (float)idades[i] / vetor;
    }
    printf(" a media aritmetica eh de %.2f",media);
    return 0;
}*/
                //codigo sem o finalizador "-1"

int main(void)
{
    int idades,cont=0,soma=0;
    float media=0;
    /*Fazer um programa que leia um conjunto de idades de pessoas. O final do conjunto de valores
    é conhecido através do valor -1. Calcule e escreva a idade média deste conjunto.*/
    do{
        printf("Insira a idade aqui\n");
        scanf("%i",&idades);
        if(idades == -1)
        {break;}
        cont++;
        soma += idades;
      }while(idades != -1);
      media = soma / cont;
      printf("A media aritmetica do conjunto de idades eh de : %.2f",media);
      return 0;
}
