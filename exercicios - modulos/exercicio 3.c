/*3. Crie um aplicativo que faça a contagem regressiva de um número inteiro informado pelo usuário. O
usuário deve informar também o espaço de tempo entre cada contagem (em segundos). Controle o tempo
com um método  tempo() contido em outra classe. Crie uma nova classe para esse método do tempo()
ou aproveite do exemplo 3*/

#include<stdio.h>
#include<time.h>

void entrada(int *numero,int *intervalo),saida(int *numero,int *intervalo);
void tempo(int intervalo);

int main(void)
{
    int numero,intervalo;

    entrada(&numero,&intervalo);
    saida(&numero,&intervalo);
}

void entrada(int *numero,int *intervalo)        //declarado como ponteiros, logo o scanf nao usa &
{
    printf("Insira o numero que vai desescalar maldito : ");
    scanf("%d",numero);
    printf("Insira o intervalo que vai ocorrer esse decrescimo : ");
    scanf("%d",intervalo);

}

void tempo(int intervalo)
{
    clock_t inicio = clock();

    while((clock() - inicio) < intervalo * CLOCKS_PER_SEC)
    {
    }
}

void saida(int *numero,int *intervalo)
{
    for(int i=*numero;i>=0;i--)
    {
        printf("%d (espera : %d)\n",i,*intervalo);
        tempo(*intervalo);
    }
    printf("Operação finalizada com sucesso !!! ");
}




