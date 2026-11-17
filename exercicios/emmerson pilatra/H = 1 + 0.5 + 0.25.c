#include<stdio.h>
int main(){
int n;
float h = 0.0f;

//entrada
printf("Insira um numero inteiro positivo : ");
scanf("%d",&n);

for(int i = 1;i<n;i++)
{
    h += 1.0f / i;
    printf("O valor de H(%d) eh de : %.2f\n",i , h);
}
return 0;
}
