/*13. Faça a leitura de mil números pelo processo de sorteio automático. Os números devem estar entre 0 e
100. Verifique:
• qual foi o número sorteado mais vezes;
• qual foi o número sorteado menos vezes;
• qual foi o maior número;
• qual foi o menor número;*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void Processamento(int *,int *,int *,int *,int *);
void exibir(int,int,int,int,int *);

int main(void)
{
    printf("\t---------------NUMEROS ALEATORIOS DE 0 A 100---------------\n\n\n\n");

    int maior,menor,mais_vezes,menos_vezes,frequencia[101]={0};
    srand(time(NULL));

    Processamento(&maior,&menor,&mais_vezes,&menos_vezes,frequencia);
    exibir(maior,menor,mais_vezes,menos_vezes,frequencia);
    return 0;
}

void Processamento(int *maior,int *menor,int *mais_vezes,int *menos_vezes,int frequencia[])
{


    for(int i=0;i<1000;i++)
    {
        int numero = rand() % 101;
        frequencia[numero]++; //toda vez q pega um numero aleatorio ele incrementa no contador de numeros repetidos;

        if(i==0)
        {
        *maior = numero;
        *menor = numero;

        }else {
        if(numero > *maior)
        {
            *maior = numero;
        }if(numero < *menor)
        {
            *menor = numero;
        }
    } printf("Numero %d : %d\n",i+1,numero);
    }

    *mais_vezes=0;
    *menos_vezes=0;

    for(int i=1;i<= 100;i++)
    {
        if(frequencia[i] > frequencia[*mais_vezes]) //toda vez q um contador de frequencia for maior que mais o contador mais vezes ele vai igualar e vai pegar o numero de vezes do numero repetido
        {
            *mais_vezes=i;
        }
         if(frequencia[i] < frequencia[*menos_vezes])
        {
            *menos_vezes = i;
        }
    }
}

void exibir(int maior,int menor,int mais_vezes,int menos_vezes,int frequencia[])
{

    printf("\n\n\tMaior numero : %d \n\t Menor numero : %d\n",maior,menor);
    printf("\tNumero sorteado mais vezes : %d(repetido %d vezes)\n\t Numero sorteado menos vezes : %d(repetido %d vezes)\n",mais_vezes,frequencia[mais_vezes],menos_vezes,frequencia[menos_vezes]);
}
