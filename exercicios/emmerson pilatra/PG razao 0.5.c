#include<stdio.h>
int main()
{
    int vetor;
    float razao = 0.5,n1 = 1 ;

    printf("Insira n : ");
    scanf("%d",&vetor);    //vetor ou ate onde vai repetir

    printf("O valor de n1 eh : %.0f\n",n1);   //valor de n1

    for(int i = 0;i<=vetor;i++)   //laco q se repeta a quantidade de vezes que vc inserir no ponteiro
    {
         n1 = n1 * razao; //tem que se repetir
        printf("H elemnto %d = %f\n",vetor,n1);
    }
    return 0;
}
