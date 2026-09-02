#include<stdio.h>
#include<locale.h>
#include<ctype.h>
int main()
{
    /*3. Elaborar um programa que apresente no final o somatório dos valores pares existentes entre 1 e 500.*/
    setlocale(LC_ALL, "Portuguese");
    int soma;

    for(int i=0;i<501;i++)  //501 segundo o somatorio da PA (S = a1 + an) * n / 2 ou (2 + 500) * 250 / 2 - > 502 / 2 --> 251 * 250
    {   if(i % 2 == 0)
    {
        soma += i;
    }
    }
        printf("Soma dos primeiros 500 numeros pares eh de %d",soma);
    return 0;
}
