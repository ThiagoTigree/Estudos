#include<stdio.h>
#include<locale.h>
int main(void)
{
    /*Escreva um programa em C que solicite ao usuário que insira o tamanho de um vetor de inteiros
    , leia essa quantidade de elementos inteiros do usuário e, em seguida, imprima todos os elementos
    armazenados de volta no console.*/
    setlocale(LC_ALL, "Portuguese");
    int vetor;

    printf("Insira o tamanho do vetor desejado : ");
    scanf("%d",&vetor);//tamanho do vetor

    int inteiros[vetor];
    int i;
    for(i=0;i<vetor;i++)
    {
        printf("insira o elemento %d : ",i + 1);
        scanf("%d",&inteiros[i]);//parametro tem que ser [i] para que o codigo consiga pegar todos os numeros, se for [vetor] vai pegar um valor estatico
    }

    for(int j = 0;j<vetor;j++)
    {
        printf("valor %d : %d \n ",j + 1,inteiros[j]);//o parametro [j] eh para que ele busque o valor 1, valor 2, valor 3, valor 4, valor 5 e etc...
    }
    return 0;
}
