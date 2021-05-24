#include <stdio.h>
#include "objetosc.h"

float Vprosto(float a, float b, float h)
{
   printf("Podaj pierwszy bok prostopadloscianu: ");
   scanf("%f",&a);
   printf("Podaj drugi bok prostopadloscianu: ");
   scanf("%f",&b);
   printf("Podaj wysokosc prostopadloscianu: ");
   scanf("%f",&h);
   printf("Objetosc prostopadloscianu wynosi: ");
   return a*b*h;
}
