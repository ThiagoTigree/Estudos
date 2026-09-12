#include<stdio.h>
int main(void)
{
    /*10.Construa um algoritmo que leia um número inteiro N e imprima o mesmo na ordem inversa:
        exemplo: dado 23457, a saída será 75432.*/
    int numero,unid=0,dez=0,cent=0,mil=0,milD=0,milC=0;


    printf("Insira o numero que voce quer inverter (suporta valores ate 999.999!!!) : ");
    scanf("%d",&numero);

    if(numero <= 9)
    {
        unid = numero / 1;
    }else if(numero <= 99)
    {
        dez =  numero / 10;     //ex: 56 -> 56/10 -> 5 ;
        unid = numero % 1;      //ex : 56 -> 56%10 ->6
        printf("%d%d",unid,dez);
    }else if(numero <= 999)
    {
        cent = numero / 100;            //ex: 879 -> 879/100 -> 8
        dez = (numero / 10) % 10;       //ex: 879 -> 879/10 -> 87%10 -> 7
        unid = (numero % 100) % 10;     //ex: 879 -> 879%100 -> 79%10 -> 9
        printf("%d%d%d",unid,dez,cent);
    }else if(numero <= 9999)
    {
        mil = numero / 1000;                //ex:7941 -> 7941/1000 -> 7
        cent = (numero / 100) % 10;         //ex:7941 -> 7941/100 -> 79%10 -> 9
        dez = ((numero / 10) % 100) % 10;   //ex:7941 -> 7941/10 ->794%100 -> 94%10 -> 4
        unid = (numero % 1000) % 10;       //ex: 7941 -> 7941%1000 -> 941%10 -> 1
         printf("%d%d%d%d",unid,dez,cent,mil);
    }else if(numero <= 99999)
    {
        milD = numero / 10000;             //ex:89120 -> 8912/10000 -> 8
        mil = (numero /1000) % 10;          //ex:89120 -> 89120/1000 -> 89%10 -> 9
        cent = (numero / 100) % 10;         //ex:89120 -> 89120/100 -> 891%10 -> 1
        dez = (numero / 10) % 100;          //ex:89120 -> 89120/10 -> 8912%100 -> 2
        unid = (numero % 10000) % 10;       //ex:89120 -> 89120%10000 - > 9120 % 10 -> 0
         printf("%d%d%d%d%d",unid,dez,cent,mil,milD);
    }else if(numero <= 999999)
    {
        milC = numero / 100000;                 //ex:123456 -> 123456/100000 -> 1
        milD = (numero / 10000) % 10;           //ex:123456 -> 123456/10000 -> 12%10 -> 2
        mil = (numero/1000) % 10;               //ex:123456 -> 123456/1000 -> 123 % 10 -> 3
        cent = (numero/100) % 10;               //ex:123456 -> 123456/100 -> 1234 %10 -> 4
        dez = (numero/10) % 10;                 //ex:123456 -> 123456/10 -> 12345 % 10 -> 5
        unid = (numero % 100000) % 10;          //ex:123456 -> 123456%100000 -> 23456%10 -> 6
         printf("%d%d%d%d%d%d",unid,dez,cent,mil,milD,milC);
    }
}
