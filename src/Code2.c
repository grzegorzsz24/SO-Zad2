#include <stdio.h>
#include "objetosc.h"
#include "pole.h"
#include <stdlib.h>

int main() {
   float a, b, h;
   int wybor=1;	
   printf("Menu:\n0. Wyjscie z programu\n1. Pole prostokata\n2. Pole prostopadloscianu\n3. Objetosc prostopadloscianu\n");
   while(wybor!=0){
   printf("\nWybierz opcje: ");
   fflush(stdout);
   if(scanf("%d", &wybor)!=1){printf("Nie podales wartosci float"); exit(1);}
   switch(wybor)
   {  
      case 0:
         printf("Wyszedles z programu!");
         break;
      case 1:
         printf("%0.2f\n", prostokat(a, b));
         break;
      case 2:
         printf("%0.2f\n", prostopadl(a, b, h));
         break;
      case 3:
         printf("%0.2f\n", Vprosto(a, b, h));
         break;
      default:
      printf("Zła opcja!");
   }
   }	
   return 0;
}
