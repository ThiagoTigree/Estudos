#include<stdio.h>
#include<math.h>
#include<locale.h>
int main()
{
//programa q receba 4 notas,imprima sua media aritmetica e diga se elas passam ou reprovam(minimo 7)
    setlocale(LC_ALL, "Portuguese");
    //declarando as notas
    float n1,n2,n3,n4,ma;
    //entrada de dados
    printf("Insira primeira nota: ");
    scanf("%f",&n1);
    printf("Insira segunda nota: ");
    scanf("%f",&n2);
    printf("Insira terceira nota: ");
    scanf("%f",&n3);
    printf("Insira quarta nota: ");
    scanf("%f",&n4);
    //processamento
    ma = (n1 + n2 + n3 + n4) / 4;
    //condicionais
    if(ma >= 7.0)
        {
        printf("Parabéns vocẽ passou!!! ");
        }else if(ma < 7.0)
        {
        printf("Você reprovou!!! ");
        }
        return 0;
}
