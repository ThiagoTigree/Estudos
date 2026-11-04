/*15. A função fib(n) ingênua (fib(n) = fib(n − 1) + fib(n − 2), com fib(0) = 0 e fib(1) = 1) faz um número
exponencial de chamadas. Reescreva-a com memoização: guarde em um vetor os valores já calculados para
que cada fib(k) seja calculado uma única vez. Em seguida, calcule fib(50).
Exemplo: fib(10) → 55
fib(50) → 12586269025*/

#include<stdio.h>
#include<stdlib.h>

int fibo(int);

int stored_fibo[50];

int main()
{

    for(int i = 0; i < 50; i++)
    {
    stored_fibo[i] = -1;
    }

    int n;
    printf("Escolha o enesimo termo a sera fibonatado : ");
    scanf("%d",&n);

    printf("numero fibonnaci %d : %d\n",n,fibo(n));
}

int fibo(int n)
{
    if(n <= 1)      //trata os dois primeiros termos da sequencia ( 0 e 1) e com eles consegue calcular o resto
    {
        stored_fibo[n] = n;
        return n;
    }

   if(stored_fibo[n - 1] == -1){    //caso o resultado nao esteja no vetor ele executa a chamada recursiva
    stored_fibo[n - 1] = fibo(n - 1);
   }
   if(stored_fibo[n-2]==-1){        //mesma coisa do outro
    stored_fibo[n-2] = fibo(n-2);
   }


   stored_fibo[n] = stored_fibo[n-1] + stored_fibo[n-2];
   return stored_fibo[n];
}
