#include<stdio.h>
#include<string.h>
int main()
{
 int n1,n2,n3,n4;


    printf("Insira os valores aqui: ");
    scanf("%d %d %d %d",&n1,&n2,&n3,&n4);

    if(n1 % 2 == 0 && n1 % 3 == 0)
    {
   printf("O primeiro(%d) eh divisivel por 2 e 3!\n",n1);
    }
    if(n2 % 2 ==0 && n2 % 3 == 0)
    {
        printf("O segundo(%d) eh divisivel por 2 e 3!\n",n2);
    }
    if(n3 % 2 ==0 && n3 % 3 == 0)
    {
        printf("O terceiro(%d) eh divisivel por 2 e 3!\n",n3);
    }
    if(n4 % 2 == 0 && n4 % 3 == 0)
    {
        printf("O quarto(%d) eh divisivel por 2 e 3!\n",n4);
    }
    return 0;
}
