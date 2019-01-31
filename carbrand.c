#include <stdio.h>

enum CarBrand { toyota, ford, renaud, bmw, mini, jaguar } a;


int main(void)
{

   printf("Choisissez un chiffre entre 0 et 5\n");
   scanf ("%d", &a);


   if (a == toyota)
   {
 printf ("toyota");
   }
   if (a == ford)
   {
   printf("ford");
   }
   if(a == renaud)
   {
    printf("renaud");
   }
   if (a == bmw)
   {
      printf ("bmw");
   
   }
   if (a == mini)
   {
   printf ("mini");
   }
   if (a == jaguar)
   {
      printf ("jaguar");
   }
   else
   {
      printf ("Veuillez choisir un nombre entre 0 et 5.");
   }
   
return 0;
}