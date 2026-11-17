#include<stdio.h>
#include<locale.h>
#include<ctype.h>
int main()
{
    /*2. Exibir o produto dos números inteiros positivos no intervalo de um a cem.*/
    setlocale(LC_ALL, "Portuguese");

    double produto = 1;   // tem que ser um pra nao multiplicar todo o resto por zero!!!!!!

    for(int i = 1;i<100;i++)   //i nao pode ser zero se nao a primeira multiplicaçaõ vai zerar e dar erro
    {
        produto *= (float)i;
    }
    printf("produto dos numeros inteiros positivos no intevalo de um a cem : %f",produto);
    return 0;
}
