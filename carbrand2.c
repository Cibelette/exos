#include <stdio.h>

enum CarBrand { toyota, ford, renaud, bmw, mini, jaguar } a;


int main(void)
{

   printf("Choisissez un chiffre entre 0 et 5\n");
   scanf ("%d", &a);

   if (a <= 5);
   {
      switch (a)
      {
         case 0:
         printf ("toyota");
          
          case 1:
          printf ("ford");

          case 2:
          printf ("renault");

          case 3:
          printf ("BMW");

          case 4:
          printf("jaguar");

          if (a > 5)
   {
      printf ("%d n'est pas compris entre 0 et 5", a);
   }

      }
   }
   if (a > 5)
   {
      printf ("%d n'est pas compris entre 0 et 5", a);
   }
   
   
return 0;
}