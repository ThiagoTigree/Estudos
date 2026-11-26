/*10. Crie uma função que retira todas os caracteres repetidos de uma string.*/

/*fazer do mesmo jeito do outro, pegar os repetidos atraves do incremento da tabela ASCII 
e usar no if ascii > 1, depois disso substituir o frase[i] por '\0'*/

#include<stdio.h>

void substitui(char frase[]);

int main()
{
    char palavras[] = "PIROCA ABOBORA piroca abobora BUCETA MALDITO";

    substitui(palavras);

    return 0;
}

void substitui(char frase[])
{
    int ASCII[256] = {0};

    for(int i=0;frase[i] != '\0';i++) 
{    ASCII[(unsigned char) frase[i]]++;

         if(ASCII[(unsigned char) frase[i]] > 1)
        { 
        frase[i] = ' '; 
        } 
    }

    printf("%s",frase);
}