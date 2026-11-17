/*1. Crie um aplicativo que receba o raio de uma esfera (do tipo double) e chame o método volumeEsfera
para calcular e exibir o volume da esfera na tela. Para cálculo do volume deve ser usada a fórmula: volume = (4.0/3.0)*pi*raio2.*/

#include<stdio.h>
#include<math.h>

#define PI 3.14     //PI

void entrada(double *raio),saida(double *volume);
double VolumeEsfera(double *volume,double *raio);       //prototipos

int main(void)
{
    double raio,volume;
    printf("------------MOSTRAR O VOLUME DA ESFERA NESSA PORRA--------------\n");

    entrada(&raio);         //recebe o raio por meior de referencia(ultilizando ponteiro)!!!!!
    VolumeEsfera(&volume,&raio);        //precisa de raio como parametro pra usar no calculo da formula!!!!
    saida(&volume);

    return 0;
}

void entrada(double *raio)      //aqui
{
    printf("Insira o raio da esfera : ");
    scanf("%lf", raio);       //ponteiro declarado acima
}

double VolumeEsfera(double *volume,double *raio)
{
    *volume =  (4.0/3.0) * PI * (*raio) * (*raio);        // o correto era ser elevado a 3 mas a questao pede 2 entao pronto
    printf("%.2lf", *volume);                   //precisa do * pra acessar o valor, se nao imprime o ponteiro e nao eh oq a gnt quer

    return *volume;
}

void saida(double *volume)
{
    printf("%.2lf", *volume);       //precisa de ponteiro pra modificar a variavel que ta declarada na main , por isso precisamos indicar o local da memoria aq
}
