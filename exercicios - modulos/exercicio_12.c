//12. Dada uma data abreviada, escreva-a por extenso.

#include<stdio.h>
#include<locale.h>

char *dias[] = {
 "" , "um" , "dois" , "três" , "quatro" ,
"cinco" , "seis" , "sete" , "oito" , "nove" ,
"dez" , "onze" , "doze" , "treze" , "quatorze" ,
"quinze" , "dezesseis" , "dezessete" , "dezoito" , "dezenove"};

char *meses[] = {"" , "janeiro" , "fevereiro" , "março" , "abril" ,
"maio" , "junho" , "julho" , "agosto" , "setembro" , "outubro" ,
"novembro" , "dezembro"};

void verificarDia(int *);
void verificarMes(int *);
void verificarAno(int *);

int main(void)
{
    setlocale(LC_ALL,"");
    int dia,mes,ano;
    printf("\n\t ----------------PROGRAMA QUE RECEBE  A DATA(ATÉ O ANO ATUAL)----------------\n\n\n\n\n");

    verificarDia(&dia);
    verificarMes(&mes);
    verificarAno(&ano);
}

void verificarDia(int *dia)
{
    printf("Insira o dia da data escolhida : ");
    scanf("%d", dia);

    int diaU = *dia % 10;

    if(*dia < 1 || *dia > 31)
    {
        printf("Dia invalido!");

    }else
    {
        printf("Dia ");

    if(*dia <= 19)
    {
        printf("%s", dias[*dia]);
    }else if(*dia > 20 && *dia < 30)
    {
        printf("Vinte ");printf("e");printf(" %s", dias[diaU]);
    }else
    {
        printf("Trinta");printf(" e ");printf("%s", dias[diaU]);
    }
    printf("\n");
    }

}

void verificarMes(int *mes)
{
    printf("Insira o mês da data escolhida : ");
    scanf("%d", mes);

    if(*mes < 1 || *mes > 12)
    {
        printf("Mes invalido!");
    }else
    {
        printf(" %s ", meses[*mes]);
    }printf("\n");
}

void verificarAno( int *ano)
{
    printf("Insira o ano da data escolhida :");
    scanf("%d", ano);
    if(*ano < 1 || *ano > 9999)
{
    printf("Ano invalido!");
    return;
}

int milhar = *ano / 1000;
int centena = (*ano % 1000) / 100;
int dezena = (*ano % 100) / 10;
int unidade = *ano % 10;
int resto = *ano % 100;

char *centenas[] = {
    "", "cento", "duzentos", "trezentos",
    "quatrocentos", "quinhentos", "seiscentos",
    "setecentos", "oitocentos", "novecentos"
};

char *dezenas[] = {
    "", "", "vinte", "trinta", "quarenta",
    "cinquenta", "sessenta", "setenta",
    "oitenta", "noventa"
};

char *milhares[] = {
    "", "mil", "dois mil", "três mil",
    "quatro mil", "cinco mil", "seis mil",
    "sete mil", "oito mil", "nove mil"
};

int primeiro = 1;

if(milhar > 0)
{
    printf("%s", milhares[milhar]);
    primeiro = 0;
}

if(centena > 0)
{
    if(!primeiro)
        printf(" ");

    if(resto == 0 && centena == 1)
        printf("cem");
    else
        printf("%s", centenas[centena]);

    primeiro = 0;
}

if(resto > 0)
{
    if(!primeiro)
        printf(" e ");

    if(resto < 20)
    {
        printf("%s", dias[resto]);
    }
    else
    {
        printf("%s", dezenas[dezena]);

        if(unidade > 0)
            printf(" e %s", dias[unidade]);
    }
}

printf("\n");

}
