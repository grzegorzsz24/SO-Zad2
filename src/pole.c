#include <stdio.h>
#include "pole.h"


float prostokat(float a, float b)
{
   printf("Podaj pierwszy bok prostokata: ");
   scanf("%f",&a);
   printf("Podaj drugi bok prostokata: ");
   scanf("%f",&b);	
   printf("Pole prostokata wynosi: ");
   return a*b;
}
float prostopadl(float a, float b ,float h)
{
   printf("Podaj pierwszy bok prostopadloscianu: ");
   scanf("%f",&a);
   printf("Podaj drugi bok prostopadloscianu: ");
   scanf("%f",&b);
   printf("Podaj wysokosc prostopadloscianu: ");
   scanf("%f",&h);
   printf("Pole prostopadloscianu wynosi: ");
   return 2*(a*b+a*h+b*h);
}

