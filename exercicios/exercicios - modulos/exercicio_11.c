/*11. Necessita-se calcular alguns dados correspondentes aos animais de uma fazenda. Os animais pertencem
a espécies diferentes, a saber: bovinos, ovinos e caprinos. Construa uma função para calcular a média
de peso de cada espécie para os animais de sexo feminino e do sexo masculino, a partir de dados
fornecidos pelo usuário.*/

#include<stdio.h>
#include<ctype.h>
#include<string.h>  //pra comparar as raças

void especie(char *race);
void sexo(char *genero);
void processamento(void);

int main(void)
{
    processamento();
    return 0;
}

void processamento(void)
{
    char race[20];
    char genero;
    float peso;

    float somaMB=0 , somaFB=0;
    float somaMO=0 , somaFO=0;
    float somaMC=0 , somaFC=0;

    int contMB=0 , contFB=0;
    int contMO=0 , contFO=0;
    int contMC=0 , contFC=0;

    especie(race);      //nao usamos o & pq eh um vetor

    while(strcmp(race,"0")!= 0)     //enquanto a string race for diferente de 0, vai entrar no laco
    {
        sexo(&genero);

        printf("Insira o peso do animal : ");
        scanf("%f",&peso);

        if(strcmp(race,"bovino")==0)
        {
            if(genero == 'M')
            {
                contMB++;
                somaMB += peso;
            }else if(genero == 'F')
            {
                contFB++;
                somaFB += peso;
            }
        }else if(strcmp(race,"ovino")==0)
        {
            if(genero == 'M')
            {
                contMO++;
                somaMO += peso;
            }else if(genero == 'F')
            {
                contFO++;
                somaFO += peso;
            }

        }else if(strcmp(race,"caprino")==0)
        {
            if(genero == 'M')
            {
                contMC++;
                somaMC += peso;
            }else if(genero == 'F')
            {
                contFC++;
                somaFC += peso;
            }else
            {
            printf("especie invalida!!\n");
            }}
        especie(race);
    }
        if(contMB > 0)
        {
            printf("A media de %d bois machos eh de %.2f\n",contMB,somaMB / contMB);
        }else
        {
            printf("Nao foram registrados bois machos adultos!\n");
        }

        if(contFB > 0)
        {
            printf("A media de %d duas bovinas eh de %.2f\n",contFB,somaFB / contFB);
        }else
        {
            printf("Nao foram registrados bovinos femeas adultas\n!");
        }

        if(contMO > 0)
        {
            printf("A media de %d ovinos machos eh de %.2f\n",contMO,somaMO / contMO);
        }else
        {
            printf("Nao foram registrados ovinos machos adultos!\n");
        }

        if(contFO > 0)
        {
            printf("A media de %d ovinos femeas eh de %.2f\n",contFO,somaFO / contFO);
        }else
        {
            printf("Nao foram registrados ovinos femeas adultas!\n");
        }

        if(contMC > 0)
        {
            printf("A media de %d ovinos machos eh de %.2f\n",contMC,somaMC / contMC);
        }else
        {
            printf("Nao foram registrados ovinos machos adultos!\n");
        }

        if(contFC > 0)
        {
            printf("A media de %d ovinos femeas eh de %.2f\n",contFC,somaFC / contFC);
        }else
        {
            printf("Nao foram registrados ovinas femeas adultas!\n");
        }


}

void especie(char *race)
{
    printf("Digite a especie (bovino,ovinos,caprinos ou 0 para parar) : ");    //usar o tolower
    scanf("%19s", race);

    for(int i=0;race[i]!='\0';i++)
    {
        race[i] = tolower((unsigned char)race[i]);
    }

}

void sexo(char *genero)
{
    printf("Digite o genero do animal (F(femea),M(macho)) : ");     //usar o toupper
    scanf(" %c", genero);   //lembrar do espaço para limpeza do buffer

    *genero = toupper((unsigned char)*genero); //unsigned char pra evitar comportamento indefinido da char
}
