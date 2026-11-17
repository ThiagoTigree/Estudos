/*Escreve void inverte(char s[],int ini,int fim),recursiva,que inverte a própria string(sem outro vetor)
, "amor" vira "roma",chamada: inverte(s,0,strlen(s)-1)
DICA: troque s[ini] com s[fim] e chame para ini + 1, fim - 1
Para quando ini >= fim retornar 0 ; o '\0' nao sai do lugar!*/

#include<string.h>
#include<stdio.h>
#include<locale.h>

void inverte(char s[],int ini,int fim);

int main()
{
    setlocale(LC_ALL, "");

    char piru[][20] ={     
        "doido",
        "legalzinho",
        "crazy",
        "davidogdog",
        "loucurakk"
    };

    int n = sizeof(piru) / sizeof(piru[0]);

    for(int i=0;i<n;i++)
    {
        printf("Frase normal : %s\n",piru[i]);
    }


    for(int i=0;i<n;i++)
    {
        inverte(piru[i],0,strlen(piru[i]) - 1);

        printf("Frases invertidas : %s\n",piru[i]);
    }

    return 0;
}

void inverte(char s[],int ini,int fim)
{
    if(ini >= fim) return ;

    char aux = s[ini];
    s[ini] = s[fim];
    s[fim] = aux;

    inverte(s,ini + 1,fim - 1);
}
