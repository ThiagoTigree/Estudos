#include<stdio.h>
#include<math.h>
#include<locale.h>
int recursao(float x,int y);
int main()
{ setlocale(LC_ALL, "Portuguese");//dando validade as caracteres do português
//declaração de variaveis
float base,resultado;
int expoente;
    //entrada de dados
    printf("Insira abaixo o valor da base: \n");
    scanf("%f",&base);
    printf("Insira abaixo o valor do expoente: \n");
    scanf("%d",&expoente);
    //processamento
    resultado = recursao(base,expoente);
    //saida
    printf("O resultado da base %.2f elevado a %d é de %.2f",base,expoente,resultado);
    return 0;
}
int recursao(float x,int y)
{   //declaracao da variavel resultado dessa função é diferente do resultado da primeira função
    float resultado;

    if(x == 0)//condiço para que sempre que a base for 0 o número dê zero
    {
        return 0;
    }else if(y == 0) //condição para que sempre que o expoente for 0 a base se tornar 1
    {
        return 1;
    } else
    {
        resultado = x * recursao(x,y - 1);/*resultado(var local da funcao recursao) igual a x(parâmetro que via se encaixar como base) , y(parâmetro como expoente)
                                            - 1 ( necessário para que a função não fique em loop, já que a cada elevação o expoente tem que reduzir o numero*/
    } return resultado;
}
