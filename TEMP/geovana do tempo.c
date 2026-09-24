/*3. Crie um aplicativo que faça a contagem regressiva de um número inteiro informado pelo usuário.
 O usuário deve informar também o espaço de tempo entre cada contagem (em segundos).
  Controle o tempo com um método  tempo() contido em outra classe. Crie uma nova classe para esse método do tempo() ou aproveite do exemplo 3.*/


#include <stdio.h>
unsigned long long merdadecodigo=0;

// Protótipo da  função que a gente vai abstrair
void tempo_abstrato(int segundos);

int main()
{
    int num,tempgasto;

    printf("Digite o numero inicial: ");        //entrada do numero que o usuario quer
    scanf("%d", &num);

    printf("Digite o intervalo entre cada contagem (segundos): ");      //tempo em que a gente quer que ocorra cada contagem
    scanf("%d", &tempgasto);

    for (int i = num; i >= 0; i--)          //repeticao pra contar um intervalo [numero . . . 0]
    {
        printf("%d\n", i);                  //exibir o numero [50,49,48 ... 0]

        if (i > 0)              //so executa se o numero for maior que zero, se nao for o programa nem roda
        {
            tempo_abstrato(tempgasto);
        }else
        {
            printf("terminou fiot!!!");
        }
    }
    return 0;
}

// agora a gente pega uma função que vai simular o segundo(relativo ao processamento do computador, ou seja, nao precisamente 1 segundo)
void tempo_abstrato(int tempgasto)           //MUITA ATENçÃO NESSA PARTE!!!!!!
{
    for (int s = 0; s < tempgasto; s++)
    {
        for (long long contador = 0; contador < 300000000; contador++)      //pode ser substituido pelo i aqui ou qualquer outra variavel! coloquei contador pq acho q fica mais facil de entender
        {
        merdadecodigo += contador % 2 / 2 * 2 / 2;             //processamento pra ocupar tempo do processador e dar o segundo que a gnt quer, pode ser ajustavel pra mais ou pra menos poder de processamento apagando algumas alterações
        }
    }
}
