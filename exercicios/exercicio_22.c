#include<stdio.h>
#include<string.h>
#include<locale.h>
int main()
{
    //declaracao da char e da var palavras q vou usar como quantidade de palavras
    char texto[50];
    int palavras = 0;
    //entrada normal
    printf("Escreva um texto para teste: \n");
    fgets(texto,50,stdin);

    /*aq defino um char/ crio um ponteiro para os delimitadores ultilizando um ponteiro para char,apontando pro inicio da string
    e uso uma funcao da biblioteca string.h(strtok) pra gerar tokens cada vez que um espaco ou ,.!? forem usados
    podendo gerar assim uma quantidade de palavras */

    char *delimitadores = strtok(texto, " ,.!?    ");

    /*repetidor para fazer a contagem, toda vez que houver um delimitador ele vai meio que cortar a frase
    e contar ela como palavra*/
    while(delimitadores != NULL)
    {
        palavras++;//incremento

        delimitadores = strtok(NULL, " ,.!?\n");/*aqui defino para a funcao strtok o que vao ser os delimitadores, podia ter sido uma funcao criada anteriormente contendo " ,.!?"
        e no lugar de delimitadores eu colocaria tokens, assim nao precisaria citar novamente como argumento*/
    }
    printf("Total de palavras : %d",palavras);//imprime a quantidade de palavras baseado nas regras do codigo " ,.!?"

    return 0;
}
