#include<stdio.h>

/*10. Escreva uma função que calcule o mdc de dois números fornecidos pelo usuário.*/

int main(void)
{
    int num1,num2;
    mdc(&num1,&num2);
}

int mdc(int *num1,int *num2)
{

    printf("Insira o primeiro : ");
    scanf("%d", num1);
    printf("Insira o segundo : ");
    scanf("%d", num2);

    int resto;

    while(*num2!=0) //roda ate o segundo numero  dar 0
    {
        resto = *num1 % *num2;  //rsto passar modulo de num1 e num2 -->num1(12),num2(18) -> 12 % 18 -> 12 //18 % 12 --> 6(resto) //resto = 12(num1) % 6(num2) -> 0(resto)
        *num1 = *num2;  //a(12) passsa a ser 18(b) // a(18) passa a ser b(12) // 12(a) passa a ser 6(b)
        *num2 = resto; //b(18) passa a ser 12(a) // b(12) passa a ser resto(6) // 6(b) passa a ser 0(resto) ; como b passou a ser 0, o loop acaba aqui kkkllkkkk
    }
    printf("O mdc eh : %d", *num1);   //retorna o primeiro numero
}
