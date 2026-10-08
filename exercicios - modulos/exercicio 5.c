#include<stdio.h>

void menu(int *codigo,int soma,float media);
void processamento(int *tamanho,int vetor[],float *media,int *soma);

int main(void)
{
    int tamanho,soma,codigo=0;
    float media;

    processamento(&tamanho,NULL,&media,&soma);      //precisa receber vazio para que eu posso definir o vetor depois dessa função

    int vetor[tamanho];

    processamento(&tamanho,vetor,&media,&soma);    //chama denovo pra ele receber o valor do vetor dessa vez

    menu(&codigo,soma,media);
}

void menu(int *codigo,int soma,float media)
{

        printf("\t--------Codigos para os dados--------\n\n\n");
        printf("1 - Ver a soma\n");
        printf("2 - Ver a media\n");
        printf("3 - Sair do programa\n");

        while(*codigo != 3)
        {
            printf("Insira o codigo : ");
            scanf("%d", codigo);

            switch(*codigo)
            {
            case 1:
                printf("Soma : %d\n", soma);
                break;
            case 2:
                printf("Media : %.2f\n", media);
                break;
            case 3:
                printf("Programa finalizado com sucesso!!!!");
            }
        }
}

void processamento(int *tamanho,int vetor[],float *media,int *soma)
{
    if(vetor == NULL)
    {
    printf("Insira o tamanho do vetor : ");
    scanf("%d", tamanho);
    return;     //retorna pra a main criar o vetor
    }
   *soma = 0;

    for(int i=0;i<*tamanho;i++)
    {
        printf("Digite o elemento %d do vetor : ",i+1);
        scanf("%d", &vetor[i]);     //elementos do vetor
    }

    for(int i=0;i<*tamanho;i++)
    {
    if(vetor[i] < 0)          //zerar numeros negativos dentro do vetor
        {
            vetor[i] = 0;
        }

            if(vetor[i] > 0)
            {
            for(int j = i + 1; j < *tamanho; j++)       //garante que ele nao va apagar o numero original, e sim comparar sempre com o proximo depois do primeiro
            {
                if(vetor[j] == vetor[i])
                {
                    vetor[j] = 0;                       //zera repetidos
                }
        }}}

        for(int i=0;i<*tamanho;i++)         //um laÇo de fora do de dentro pra ele nao pegar valores incorretos antes da hora
        {
            *soma += vetor[i];
        }

        *media = (float)*soma / *tamanho;      //pega a media ja com os valores atualizados
    }
