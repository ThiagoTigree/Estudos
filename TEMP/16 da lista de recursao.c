/*16. Escreva a função void permuta(char s[], int i, int n), que imprima todas as permutações dos n caracteres
da string s, uma por linha, em qualquer ordem. A chamada inicial deve ser permuta(s, 0, n). Neste exercício,
é permitido usar um laço dentro da função recursiva.
Exemplo: permuta("ABC", 0, 3) → ABC, ACB, BAC, BCA, CBA, CAB (6 linhas)*/

//irei ultilizar do algoritmo de heap e de backtrack pra resolver essa questao

#include<stdio.h>

void trocar(char *a,char *b);
void permuta(int n,char *frase);

int count=1;

int main()
{
    int n;

    printf("Insira a quantidade de letras : ");
    scanf("%d",&n);
    getchar();

     char frase[n+1];

     printf("Escreva a frase abaixo : ");
     fgets(frase, n + 1, stdin);

    permuta(n,frase);
    return 0;
}

void permuta(int n,char *frase)
{
 if(n == 1)
 {
        printf("%d : %s ",count++,frase);
        printf("\n");}
 else{
    permuta(n-1,frase);

    for(int i=0;i<n-1;i++)
    {

    if(n % 2 == 0)
        trocar(&frase[i],&frase[n-1]);
    else{
        trocar(&frase[0],&frase[n-1]);
    }
    permuta(n-1,frase);
 }
}}

void trocar(char *a, char *b)
{
    char aux = *a;
    *a = *b;
    *b = aux;
}
