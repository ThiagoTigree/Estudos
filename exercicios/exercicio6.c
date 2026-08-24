#include <stdio.h>
#include <locale.h>
int main()
{
    /*receber altura e sexo e calcular seu peso ideal
    • para homens: (72.7 * H) - 58;
    • para mulheres: (62.1 * H) – 44.7.*/
    setlocale(LC_ALL, "Portuguese");
    float altura,peso;
    char sexo;
    //entrada de dados
    printf("Insira sua altura(Ex:1,38):  "  );
    scanf("%f",&altura);
    printf("Insira seu genero(M ou F):  ");
    scanf(" %c",&sexo);

    if(sexo == 'M')
    {
        peso = (73.7 * altura) - 58;
            printf("Esse é seu peso ideal: %.2f",peso);
    }else if(sexo == 'F')
    {
        peso = (62.1 * altura) - 44.7;
        printf("Esse é seu peso ideal: %.2f",peso);
    }else
    {
        printf("erro no inserimento de genero!!!");
    }
    return 0;
}

