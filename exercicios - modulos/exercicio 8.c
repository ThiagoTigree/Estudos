#include <stdio.h>
#include <string.h>

const char *unidades[] = {
    "zero", "um", "dois", "três", "quatro", "cinco", "seis", "sete", "oito", "nove",
    "dez", "onze", "doze", "treze", "quatorze", "quinze", "dezesseis", "dezessete", "dezoito", "dezenove"   //espaços no vetor criado, ex: vetor[0] = "zero" , vetor[1] = "um" ...
};

const char *dezenas[] = {
    "", "", "vinte", "trinta", "quarenta", "cinquenta", "sessenta", "setenta", "oitenta", "noventa"     /*espaços pra dezena , funciona assim como o primeiro, nao tem dez
                                                                                                            pois dez ja foi ultilizado no primeiro , repare que todos a partir da casa de dezena
                                                                                                            os vetores começam com um espaço em branco pra representar o zero*/
};

const char *centenas[] = {
    "", "cento", "duzentos", "trezentos", "quatrocentos", "quinhentos",
    "seiscentos", "setecentos", "oitocentos", "novecentos"                                  //mesmo esquesma dos a cima
};

void converterGrupo(int valor, char *resultado){
    int c = valor / 100;        // pega a parte das centenas -> 245 / 100 -> 2
    int d = (valor % 100) / 10; //dezenas -> 245 % 100 -> 45 / 10 -> 4
    int u = valor % 10;         //unidades -> 245 % 10 -> 5

    resultado[0] = '\0';

    if(c > 0){
        strcat(resultado, centenas[c]);     // junta na string resultado a funcao centenas com o argumento de c que pega a centena
        strcat(resultado, " ");             //adiciona um espaço caso haja casa decimais ou zeros
    }

    if(valor % 100 < 20){
        strcat(resultado, unidades[valor % 100]);  //usado pra regra dos 11 ate 19
    } else {
        strcat(resultado, dezenas[d]);
        if(u > 0){
            strcat(resultado, " e ");
            strcat(resultado, unidades[u]);     // se fugir da regra dos 11 e 19 ele vai imprimir dezena e unidade -> 15 -> imprime vetor[15] ; 21 - > vetordezena[2] e vetor[1] -> vinte e um
        }
    }
}

void porExtenso(long long numero){
    int bilhoes  = (int)(numero / 1000000000LL);                //pega a casa bilhonal
    int milhoes  = (int)((numero / 1000000LL) % 1000);          //milhonal
    int milhares = (int)((numero / 1000LL) % 1000);             //milharal kkkkkkkkkkkkkkkkkkkkkkkk
    int resto    = (int)(numero % 1000);                        //tudo abaixo dos mil

    char grupo[100];

    if(bilhoes > 0){
        converterGrupo(bilhoes, grupo);             //se tiver casa bilhonal ele imprime casa bilhonal milhoes
        printf("%s bilhões ", grupo);
    }

    if(milhoes > 0){
        converterGrupo(milhoes, grupo);             //casa milhonal milhoes
        printf("%s milhões ", grupo);
    }

    if(milhares > 0){
        converterGrupo(milhares, grupo);            //casa milharal mil
        printf("%s mil ", grupo);
    }

    if(resto > 0 || numero == 0){
        converterGrupo(resto, grupo);               //todas as unidades <= 999
        printf("%s", grupo);
    }

    printf("\n");
}

int main(){
    long long numero;

    printf("Digite um número inteiro (até 10 dígitos): ");              //pega o numero
    scanf("%lld", &numero);

    porExtenso(numero);                 //resumo , criou uma função pra tratar das casa unidade dezena centena e depois implementou em uma função auxiliar que imprimia se era unidade de bilhao,milhao etc...

    return 0;
}
