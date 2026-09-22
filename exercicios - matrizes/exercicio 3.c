#include<stdio.h>
int main(void)
{
    //Escreva um programa em C que determine e imprima o maior (máximo) e o menor (mínimo) valor entre todos os elementos de um determinado vetor.
    int n,maior=0,menor=0;

    printf("Insira a quantidade de elementos da matriz : ");
    scanf("%d",&n);     //recebe quantidade da variavel n

    int matriz[n];

    for(int i=0;i<n;i++)    //i=0;enquanto i for menor que n;vai incrementar i
    {
        printf("Elemento %d : ",i+1);       //imprime o numero a ser recebido
        scanf("%d",&matriz[i]);           //recebe o espaço na memoria correspondente a variavel

        if(i == 0)                        //iguala os dois para podermos fazer a comparação certa
        {
            maior = matriz[i];            //iguala o primeiro ao maior
            menor = matriz[i];            //iguala o primeiro ao menor
            printf("Maior : %d ",maior);
            printf("Menor : %d ",menor);
        }
        if (matriz[i] > maior)          // se espaço for maior que maior
        {
            maior = matriz[i];          // passa a ser o maior termo
            printf("Maior : %d \n",maior);
            printf("Menor : %d \n",menor);
        }else if(matriz[i] < menor)             //se o espaço for menor que o menor
        {
            menor = matriz[i];            //passa a ser o menor termo
            printf("Maior : %d \n",maior);
            printf("Menor : %d \n",menor);
        }
    }
    printf("Maximo : %d e Minimo : %d",maior,menor);
}
