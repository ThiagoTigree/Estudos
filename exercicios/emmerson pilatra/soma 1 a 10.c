#include<stdio.h>
int main(){
    double s;

    for(int i = 1;i<10;i++)
    {
        double termo = (double) i / (i * i);
        if(i % 2 != 0)
        {
            s += termo;
        }else
        {
            s -= termo;
        }
    }
    printf(" O valor da soma eh de %.6lf\n",s);
    return 0;
}
