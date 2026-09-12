#include<stdio.h>
int main(void)
{
    /*Fazer um programa que leia a nota final de 50 alunos e escreva o total de aprovados. É
        considerado aprovado o aluno com nota final maior ou igual a 6.*/
    int notaF,cont=0;

    for(int i=0;i<50;i++)
    {
        printf("Digite sua media final : ");
        scanf("%d",&notaF);

        if(notaF >= 6)
        {
            cont++;
        }
    }
    printf("A quantidade de aprovados eh de : %d",cont);
    return 0;
}
