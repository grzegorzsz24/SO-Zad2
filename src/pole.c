#include <stdio.h>
#include <stdlib.h>

float prostokat(float a, float b)
{
   printf("Podaj pierwszy bok prostokata: ");
   if(scanf("%f",&a)==1){}
   else {
        printf("Nie podales wartosci flaot.\n"); exit(1);}
   printf("Podaj drugi bok prostokata: ");
   if(scanf("%f",&b)==1){}
   else {
        printf("Nie podales wartosci flaot.\n"); exit(1);}	
   printf("Pole prostokata wynosi: ");
   return a*b;
}
float prostopadl(float a, float b ,float h)
{
   printf("Podaj pierwszy bok prostopadloscianu: ");
   if(scanf("%f",&a)==1){}
   else {
        printf("Nie podales wartosci flaot.\n"); exit(1);}
   printf("Podaj drugi bok prostopadloscianu: ");
   if(scanf("%f",&b)==1){}
   else {
        printf("Nie podales wartosci flaot.\n"); exit(1);}
   printf("Podaj wysokosc prostopadloscianu: ");
   if(scanf("%f",&h)==1){}
   else {
        printf("Nie podales wartosci flaot.\n"); exit(1);}
   printf("Pole prostopadloscianu wynosi: ");
   return 2*(a*b+a*h+b*h);
}

