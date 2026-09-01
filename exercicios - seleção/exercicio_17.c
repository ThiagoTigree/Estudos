#include <stdio.h>
#include <locale.h>
#include<math.h>
int main()
{
  setlocale(LC_ALL, "Portuguese");
 //receber medida do angulo em graus e determinar e imprimir um quadrante
 int angul;

 printf("Insira o angulo: ");
 scanf("%d",&angul);

 if(angul == 0)
 {
     angul = angul += 360;
 }

 angul = angul % 360;


 if(angul >= 0 && angul < 90)
 {
     printf("primeiro quadrante!");
 }else if(angul >= 90 && angul < 180)
 {
     printf("segundo quadrante!");
 }else if(angul >= 180 && angul < 270)
 {
     printf("terceiro quadrante!");
 }else if(angul >= 270 && angul < 360)
 {
     printf("quarto quadrante");
 }else if(angul < 0 && angul > -90)
 {
     printf("primeiro quadrante");
 }
 else if(angul <= -90 && angul > -180)
 {
     printf("segundo quadrante");
 }else if(angul <= -180 && angul > -270)
 {
     printf("terceiro quadrante");
 }else if( angul <= -270 && angul > -360)
 {
     printf("quarto quadrante");
 }
     return 0;
}

