/*2. Crie um aplicativo que receba uma temperatura qualquer em Farenheit e apresente seu correspondente
em Celsius por meio de um método. Para o cálculo utilize a seguinte fórmula: Celsius = 5.0/9.0*(f-32)*/

#include<stdio.h>

float farenheit(float f);       //prototipos
void saida(float f);
void entrada(float *f);

int main(void)
{
    float f;        //declaro aq pra q a variavel receber o valor alocado na memoria

    entrada(&f);    //& para procurar o local na memoria
    saida(f);       //apenas f como parametro, pois ja definimos o valor dele

    return 0;
}

void entrada(float *f)          //ponteiro apenas pra receber a variavel
{
    printf("entre com a temperatura farenheit a ser convertida : ");
    scanf("%f", f);     //nao precisa do & por ja coloquei um ponteiro nos parâmetros
}

float farenheit(float f)
{
    return (5.0 / 9.0) * (f - 32);      //formula
}

void saida(float f)
{
    float bosta = farenheit(f);         //declaro q a formula eh igual uma variavel local
    printf("A temperatura em Celsius eh de : %.2f",bosta);      //imprimo a variavel local
}
