#include<stdio.h>
#include<string.h>
#include<locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");
    char pintomole[500];
    int qntd = 0;

    printf("escreve um texto sobre aulas sobre penis: ");
    fgets(pintomole,500,stdin);

    char *aula = strstr(pintomole,"aula");
    while (aula != NULL)
    {
        qntd++;
        aula = strstr(aula + strlen("aula"),"aula");//isso eh igual a aula(char criada) + 4, procurar por "aula";
    }
    printf("quantidade de palavras aula eh de :%d",qntd);
    return 0;
}
