#include<stdio.h>
int main(void)
{
    //Escreva um programa em C que calcule e imprima a soma total e a média aritmética de todos os elementos numéricos presentes em um determinado vetor.
    //quer que o vetor contenha 5 espaços  e que sejam 10,20,30,40,50
    int numero[5];
    float soma=0,media=0;

    for(int i=0;i<5;i++)
    {
        printf("Insira o elemento %d : ",i+1);
        scanf("%d",&numero[i]);

        soma += numero[i];
        media = soma / 5;
    }
    printf("Soma : %.2f \n",soma);
    printf("Media : %.2f \n",media);
    return 0;
}
