/*1. Raio-X de uma frase
Leia uma frase com fgets e mostre quantas letras (vogais e consoantes), dígitos e espaços ela tem. Use uma função void raio_x(const char s[], int cont[]) que preenche um vetor de contadores.

primeiro passo -> estrutura                

funcao pra pegar vogais, consoantes podemos fazer (isalpha - vogais = consoantes) ,	digitos	teriamos que usar isdigit da biblioteca	ctype
e espaços , que vão se liberados por um	contador que só	vai ser	aumentado quando uma condicional for atingida isspace;

em relação ao vetor de contadores , vamos inicializar um vetor com todos os elementos em 0, e usar os espaços como contadores ; Ex: vetor[0] = contador de letras ;                        
vetor[1] = contador de vogais e	assim por diante

na chamada:

int main()
{
    //declara string(vetor de char)
    // declara o vetor que segurara contadores

    //pegar a frase                          (printf e fgets);

    //função pra substituir o \n pelo \0    (tira_enter);

    //funcao pra ler o bixo todinho     (raio-x)

    //exibir contadores                 (printf("letras : %d e vogais : %d e consoantes : %d",vetor[0],vetor[1],vetor[0] - vetor[1]));

    //digitos e espacos                 (printf("Digitos : %d e Espacos : %d",vetor[2],vetor[3]));  ->
    return 0;
}
*/

#include<stdio.h>
#include<ctype.h>
#include<string.h>

void tracos();
int eh_vogal(char c);
void tira_enter(char s[]);
void raio_x(char s[],int cont[]);

void tracos()
{
    printf("\n\n");
    printf("=======================================");    //so pra deixar bonitinho
    printf("\n\n");
}

int eh_vogal(char c)
{
    c = tolower(c);
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';   //devolve 1 caso atinja uma das condicoes
}

void tira_enter(char s[])
{
    s[strcspn(s, "\n")]= '\0';  
}

void raio_x(char s[],int cont[])
{
    for(int i=0;i<4;i++)        //for para zerar o vetor!!!
    {
        cont[i] = 0;
    }
        for(int i = 0;s[i] != '\0';i++)
        {
            if(isalpha(s[i])) cont[0]++;
            if(eh_vogal(s[i])) cont[1]++;
            if(isdigit(s[i])) cont[2]++;
            if(isspace(s[i])) cont[3]++;
        }   
}

int main()
{
    int cont[4]; //quatro contadores !!!!
    char s[100];

    printf("\tRAIO-X");
    tracos();

    printf("Insira sua string : ");
    fgets(s,100,stdin);
    tira_enter(s);

    tracos();

    raio_x(s,cont);

    printf("Letras : %d , Vogais : %d e consoantes : %d",cont[0],cont[1],cont[0] - cont[1]);

    tracos();

    printf("Numeros : %d e Espacos : %d \n",cont[2],cont[3]);

    return 0;
}


