#include<stdio.h>
#include<string.h>
#include<locale.h>
#include <ctype.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");
    //declara texto e a var q vai segurar o numero de vzes da palavra aula
    char texto[50];
    int qntda;
    //entrada
    printf("Digite um texto sobre aulas: ");
    fgets(texto,50,stdin);
    //declarando a var token com ponteiro em char pra indicar que vai ser uma string,colocando de argumento o texto e a palavra aula, pra gerar um token toda vez q tiver a palavra "aula" no texto
    char *token = strtok(texto, "aula");
    //repetidor utltilizando o token;enquanto token for diferente de nulo ele vai incrementar a var de quantidade da palavra "aula"
    while(token != NULL)
    {
        qntda++;
    //declarando token ou criacao de token com a palavra aula
        token = strtok(NULL, "aula");
    }// impressao da quantidade
    printf("A quantidade de vezes que aula foi dita foi :%d",qntda);
    return 0;
}
