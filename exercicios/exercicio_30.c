#include<stdio.h>
#include<string.h>
int main()
{   /*Construa um programa que seja capaz de concluir qual dentre os seguintes animais foi
escolhido, através de perguntas e respostas. Animais possíveis: leão, cavalo, homem,
macaco, morcego, baleia, avestruz, pinguim, pato, águia, tartaruga, crocodilo e cobra.*/
    char select;
    printf("Escolha um dos animais citados e responda: leao,cavalo,homem,macaco,morcego,baleia,avestruz,pinguim,paato,aguia,tartaruga,crocodilo e cobra\n");

    printf("O animal eh um mamifero?(S/N): ");//se for mamifero pergunta q tipo de mamifero e se nao for vai pro proximo tipo(aves)
    scanf(" %c",&select);
    if(select == 'S')
    {   printf("O animal eh um quadrupede?(S/N): ");
        scanf(" %c",&select);
        if (select == 'S')
        {
            printf("O animal eh carnivoro?(S/N): ");
            scanf(" %c",&select);
            if(select == 'S')
            {
                printf("O animal eh o leao!!");
            }else
            {
                printf("O animal eh o cavalo!!");
            }
        }else
        {
            printf("O animal eh um bipede?(S/N): ");
            scanf(" %c",&select);
            if(select == 'S')
            {
                printf("ele eh onivoro?(S/N)");
                scanf(" %c",&select);
                if(select == 'S')
                {
                    printf("O animal eh o homem!!");
                }else
                {
                    printf("O animal eh o macaco!!");
                }
            }else
            {
                printf("O animal eh Voador?(S/N): ");
                scanf(" %c",&select);
                if(select == 'S')
                {
                    printf("O animal eh o morcego!!");
                }else
                {
                    printf("O animal eh a baleia!!!");
                }
            }
        }
    }else if(select == 'N')
    {
        printf("O seu animal eh uma ave?(S/N): ");
        scanf(" %c",&select);
        if(select == 'S')
        {
            printf("seu animal eh nao-voador?(S/N): ");
            scanf(" %c",&select);
            if(select == 'S')
            {
                printf("ele eh tropical?(S/N): ");
                scanf(" %c",&select);
                if(select == 'S')
                {
                    printf("seu animal eh a avestruz!!!");
                }else
                {
                    printf("seu animal eh o pinguim!!!");
                }
            }else
            {
                printf("Seu animal eh nadador?(S/N): ");
                scanf(" %c",&select);
                if(select == 'S')
                {
                    printf("seu animal eh  o pato!!!");
                }else
                {
                    printf("seu animal eh a aguia!!!");
                }
            }
        }else
    {
        printf("seu animal eh um reptil com casca?(S/N): ");
        scanf(" %c",&select);
        if(select == 'S')
        {
            printf("Seu animal eh a tartaruga!!!");
        }else
        {
            printf("seu animal tem patas?(S/N): ");
            scanf(" %c",&select);
            if(select == 'S')
            {
                printf("seu animal eh um crocodilo");
            }else
            {
                printf("seu animal eh uma cobra!!!");
            }
        }
    }
    }
    return 0;
}
