#include <stdio.h>
#include <locale.h>
#include<math.h>
#include<string.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");
    char senha[20];
    //entrada de dados
    printf("Insira a senha:  ");
    scanf("%s",&senha);
    //condicional
    if(strcmp(senha, "ASDFG") == 0)
    {
        printf("Você está validado!!!");
    }else
    {
        printf("Senha incorreta!!");
    } return 0;
}

