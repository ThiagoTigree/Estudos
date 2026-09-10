#include<stdio.h>
int main()
{
    /*5) Faca um programa em C que seja capaz de obter o quociente inteiro da divisão de dois números fornecidos,
    sem utilizar a operação de divisão (/) e nem divisão inteira (%).*/
    int n1,n2,quointeiro=0,resto=0,dividendo=0;

    printf("Insira o numero a ser dividido : ");
    scanf("%d",&n1);
    printf("Insira o numero que vai diviir : ");
    scanf("%d",&n2);

    resto = n1;

    for(int i=1;resto>=n2;i++)
    {
      resto = resto - n2;
      quointeiro = i; // pode ser quointeiro ++ tb porem precisaria declarar quointeiro como um la nas declaracoes de variavel
    }

     dividendo = (n2 * quointeiro) + resto;
    printf("O quointeiro da operacao eh : %d e provando que o dividendo eh igual a ao numero dividido : %d(dividendo)  --> %d(numero1)",quointeiro,dividendo,n1);
    return 0;
}
