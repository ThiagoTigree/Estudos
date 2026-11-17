#include<stdio.h>
int main(void)
{
    int fibo=0,n,termo1=0,termo2=1;

    printf("Insira a quantidade de numeros que vc deseja da sequencia de fibonacci : ");
    if(scanf("%d",&n) != 1 || n <= 0)
    {
        printf("Insira um numero valido : ");
        return 1;
    }

    printf("%d termos da sequencia de fibonacci : ",n);
    for(int i=0;i<=n;i++)
    {
       if(i == 0)   //define o primeiro termo como
       {
           printf("1 ");
           continue;
       }
       if(i == 1)
       {
           printf(", %d",termo2);
           continue;
       }
       fibo = termo1 + termo2;  //define a formula dessa sequencia (numero anterior + posterior)
       printf(", %d",fibo); //imprime essa bosta ai

       termo1 = termo2;     //atualiza as variaveis a cada repetição!!(transformar o primeiro termno no segundo e transforma o segundo termo em um proximo termo)
       termo2 = fibo;
    }
    return 0;
}
