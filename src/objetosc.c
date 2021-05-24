#include <stdio.h>
#include <stdlib.h>

float Vprosto(float a, float b, float h)
{
   printf("Podaj pierwszy bok prostopadloscianu: ");
   if(scanf("%f",&a)==1){}
   else {
        printf("Nie podales wartosci flaot.\n");exit(1);}
   printf("Podaj drugi bok prostopadloscianu: ");
   if(scanf("%f",&b)==1){}
   else {
        printf("Nie podales wartosci flaot.\n");exit(1);}
   printf("Podaj wysokosc prostopadloscianu: ");
   if(scanf("%f",&h)==1){}
   else {
        printf("Nie podales wartosci flaot.\n");exit(1);}
   printf("Objetosc prostopadloscianu wynosi: ");
   return a*b*h;
}
