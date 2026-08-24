#include<stdio.h>
#include<locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");
    /*tres notas lab(peso 2), av semestral( peso 3) , exame final ( peso 5)
    média final conceito
    8.0 |__| 10.0 A
    7.0 |__ 8.0 B
    6.0 |__ 7.0 C
    5.0 |__ 6.0 D
    < 5.0       E*/
    float lab,av_semestral,exfinal,mf;
    //entrada
    printf("Insira suas notas do laboratório: ");
    scanf("%f",&lab);
    printf("Insira suas notas da avaliação semestral: ");
    scanf("%f",&av_semestral);
    printf("Insira suas notas do exame final: ");
    scanf("%f",&exfinal);
    //processamento
    mf = ((lab * 2) + (av_semestral * 3) + (exfinal * 5)) / 10;
    //condicionais
    if(mf <= 10 && mf >= 8)
    {
        printf("Você está no conceito A!!!");
    }else if(mf <= 7.9 && mf >= 6.1)
    {
        printf("Você está no conceito B!!!");
    }else if(mf <= 6 && mf > 5)
    {
        printf("Você está no conceito C!!!");
    }else if(mf < 5)
    {
        printf("Você está no conceito D!!!");
    } return 0;
}
