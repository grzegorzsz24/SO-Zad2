#include <stdio.h>
#include "pole.h"
#include "objetosc.h"

int main() {
   float a, b, h;
   int wybor;	
   printf("Menu:\n0. Wyjscie z programu\n1. Pole prostokata\n2. Pole prostopadloscianu\n3. Objetosc prostopadloscianu\n");
   while(wybor!=0){
   printf("\nWybierz opcje: ");
   scanf("%d", &wybor);
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
