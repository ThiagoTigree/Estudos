#include<stdio.h>
#include<time.h>
#include<stdlib.h>

/*4. Crie um método chamado aleatório que sorteie uma determinada quantidade de números de acordo com
um argumento. O usuário deve informar a quantidade de números a ser gerada e a faixa de números
válidos para o sorteio, por exemplo: se o usuário informar os argumentos 4 e 100 (aleatório(4,100)),
devem ser gerados quatro números aleatórios entre 1 e 100.*/

void entrada(int *gerados,int *limite);
void aleatory(int *gerados,int *limite);

int main(void)
{
    int gerados,limite;
 entrada(&gerados,&limite);
 aleatory(&gerados,&limite);
}

void entrada(int *gerados,int *limite)
{
    printf("Insira a quantidade de aleatorios a ser gerada : ");
    scanf("%d", gerados);
    printf("Insira a quantidade de numero limite(vetor) sendo que o 0 conta como unidade : ");
    scanf("%d", limite);
}

void aleatory(int *gerados,int *limite)
{
    //primeiro vamos definir o tempo atual para toda vez q rodar ele pegar um numero aleatorio e nao sempre os mesmos aleatorios!
    srand(time(NULL));  //funcao complementar do rand para definir a semente de geração(tempo que vai começar essa puxada de dados aleatoria)

    printf("Os numeros aleatorios sao : ");

    for(int i=0;i<*gerados;i++)
    {
        printf("%d ",rand() % *limite);
    }
}
