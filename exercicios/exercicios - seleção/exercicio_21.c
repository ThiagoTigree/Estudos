#include <stdio.h>
#include <locale.h>
#include <string.h>  // O correto para usar strlen é string.h (no plural dá erro)
#include <ctype.h>   // Necessário para usar a função tolower()

int main(void)
{
    setlocale(LC_ALL, "Portuguese");
    char string[50];
    int vogais = 0;

    puts("Digite um texto: ");
    fgets(string, 50, stdin); //stdin é standar input(entrada de dados padrão)
    for (int i = 0; i < strlen(string); i++) {/*repetição começa no caracter 0(primeiro) e vai até o final,
            depois a condição de parada e por fim incrementa na variavel i para avançar pra proxima letra*/

        char letra = tolower(string[i]);/*define a var letra e define que eh minuscula(tolower) para nao precisar acrescentar as maiusculas no if
         e o texto(i) eh para isolar cada letra, igual foi feito na repetitcao anterior*/
        if(letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u')//define o parametro ne(vogal)
        {
            vogais++;//incrementa o numero de vogais toda vez q tiver uma
        }
    }
    printf("O texto tem %d vogais.\n", vogais);

    return 0;
}
