#include<stdio.h>
int main(void)
{
    /*c) Em uma eleição presidencial, existem quatro candidatos. Os votos são informados
    através de código. Os dados utilizados para a escrutinagem obedecem a seguinte
    codificação:
    ·       1,2,3,4 = voto para os respectivos candidatos;
    ·       5 = voto nulo;
    ·       6 = voto em branco.
    Elabore
    um programa que calcule e escreva:
    a) total de votos para cada candidato;
    b) total de votos nulos;
    c) total de votos em branco;
    d) percentual dos votos em branco e nulos sobre o total.

    Como finalizador do conjunto de votos, tem-se o valor 0.*/

    //declaracao de variaveis
    int codigo,t1=0,t2=0,t3=0,t4=0,tnulo=0,tbranco=0,cont=0;
    int soma_nb=0;
    double percent_nb=0;

    while(codigo != 0)
    {
        printf("Insira o codigo do candidato escolhido (1,2,3,4 ;5 = voto nulo 6 = voto em branco) : ");
        scanf("%d",&codigo);

    switch(codigo)
    {
    case 1:
        t1++;
        cont++;
        printf("Voce votou no candidato 1!! \n");
        break;
    case 2:
        t2++;
        cont++;
        printf("Voce votou no candidato 2!! \n");
        break;
    case 3:
        t3++;
        cont++;
        printf("Voce votou no candidato 3!! \n");
        break;
    case 4:
        t4++;
        cont++;
        printf("Voce votou no candidato 4!! \n");
        break;
    case 5:
        tnulo++;
        cont++;
        printf("Voce votou no nulo!! \n");
        break;
    case 6:
        tbranco++;
        cont++;
        printf("Voce votou em branco!! \n");
        break;
    case 0:
        break;
    default:
        printf("Insira um codigo valido!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n");
    }}
    printf("\ncand 1 : %d , cand 2 : %d, cand 3 : %d, cand 4: %d\n",t1,t2,t3,t4);
    printf("\nTotal de votos nulos eh : %d \n",tnulo);
    printf("\nTotal de votos em branco : %d \n",tbranco);

    soma_nb = tnulo + tbranco;
    percent_nb = (double)soma_nb / (double)cont;

    printf("\nPercentual de brancos e nulos eh : %.2lf\n",percent_nb);
    return 0;
}
