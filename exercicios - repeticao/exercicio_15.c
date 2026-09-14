#include<stdio.h>
int main(void)
{
    /*15.A série de Fetuccine difere da série de Ricci porque o termo de posição par é resultado da
    subtração dos dois anteriores. Os termos ímpares continuam sendo o resultado da doma dos
    dois elementos anteriores. Imprima os n primeiros termos da série de Fetuccine.*/
    int n,termo1=1,termo2=1,proximo;

    printf("Insira o limite da sequencia : ");
    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    {
        if(i == 1 || i == 2)        //se i estiver no primeiro ou segundo termo vai definir o proximo como 1
        {
          proximo = 1;
        }else if(i % 2 == 0)        //define o gerador de termos PAR
        {
            proximo = termo2 - termo1;  //gerador = sucessor - anterior
        }else       ////define o gerador de termos IMPAR
        {
            proximo = termo1 + termo2;  //gerador = anterior + sucessor
        }

        if(i == 1)
        {
            printf("%d, ",proximo);         //apenas para organização, para que o primeiro seja x e o segundo seja x, x , x ...
        }else
        {
            printf("%d ,",proximo);         //impressao organizada dos termos
        }
       termo1 = termo2;         //atualiza o termo antigo e transforma no novo(renova)
       termo2 = proximo;        //transforma o 2 no proximo termo
    }
    return 0;
}
