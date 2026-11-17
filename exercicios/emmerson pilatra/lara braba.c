#include<stdio.h>
int main()
{
    double s = 0.0;

    for(int i = 1, j =1;i<99;i+=2,j++)
    {
        s += (double) i / j;
    }
    printf("Soma %.6lf",s);
    return 0;
}
