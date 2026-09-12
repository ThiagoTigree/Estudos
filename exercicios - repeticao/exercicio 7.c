#include<stdio.h>
int main(void)
{
    //declara as variaveis altura, menor(termo) e maior(termo)
    float altura=1;
    float menor=1,maior=1;
    float anterior = 0;
    //fazer enquanto a altura for diferente de 0;
    int i = 0;
    while(altura != 0){ //declaro i e coloco ele pra se incrementar
    i++;
    printf("Digite a altura da pessoa numero %d (apenas um modelo ex:apenas 160cm ou apenas 1,60cm) : ",i );

    anterior = altura;  //antes de ler o valor, o anterior vira a altura
                                //caso eu quisesse armazenar todos esses valores eu poderia fazer com matriz ou vetor
    scanf("%f",&altura);

    if(altura == 0)     //necessario pra nao atribuir o 0 de parada do codigo ao menor numero;
    {break;}

    if(altura > maior)
    {
    maior= altura;
    menor = anterior;
    printf("\nA altura atual: %f\n" ,altura);
    printf("A menor: %f\n",menor);
    printf("A maior: %f\n",maior);
    }
    else
    {menor = altura;
    printf("\nA altura atual: %f\n" ,altura);
    printf("A menor: %f\n",menor);
    printf("A maior: %f\n",maior);
    }
    }
    printf("Menor : %d e Maior : %d",menor,maior);
    return 0;
}
