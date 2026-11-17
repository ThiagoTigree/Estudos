/*Escreva int tam(const char s[]),recursiva que devolve o tamanho da string com o strlen para varias palavras incluindo
strings vazia 
DICA: s[0] = '\0' return 0, Passo 1 : 1 + o tamanho do resto, &s[1]*/

#include<stdio.h>
#include<string.h>
#include<locale.h>

int tam(const char s[]);

int main()
{
    setlocale(LC_ALL, "");

    const char *testes[] = {
        "",
        "duro",
        "piroco duro",
        "noi nem liga pa nada fiot",
        "sou burro",
        "burrildo"
    };

    int n = sizeof(testes) / sizeof(testes[0]); //pegar o tamnho do array pelos bytes

   for(int i=0;i<n;i++)
   {
    printf("\"%s\" -> tam = %d  | strlen = %zu\n",testes[i],tam(testes[i]),strlen(testes[i]));  //%zu me lascou todo
   }
   return 0;
}

int tam(const char s[])         //escrever recursivamente pra devolver o tamanho da string!
{   
    if(s[0] == '\0') return 0;

    return 1 + tam(&s[1]);  //adiciona um e segue pra proxima letra do array
}