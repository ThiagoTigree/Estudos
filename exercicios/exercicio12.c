#include<stdio.h>
#include<locale.h>
int main(void)
{
    setlocale(LC_ALL, "Portuguese");
    //receber tres notas, tirar a media delas e exibir a mensagem, >5 reprovado,5> e <7 exame e <7 e >10 aprovado
    float n1,n2,n3,ma;
    //entrada
    printf("Insira a primeira nota: ");
    scanf("%f",&n1);
    printf("Insira a segunda nota: ");
    scanf("%f",&n2);
    printf("Insira a terceira nota: ");
    scanf("%f",&n3);

    ma = (n1 + n2 + n3) / 3;

    if(ma < 5)
    {
    printf("Reprovado com a média de %.2f !!",ma);
    }else if(ma > 5 && ma < 7)
    {
    printf("exame com média de %.2f !!",ma);
    }else
    {
    printf("aprovado com média de %.2f !!",ma);
    }
    return 0;
}
