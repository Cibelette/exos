#include <stdio.h>

enum CarBrand { toyota, ford, renaud, bmw, mini, jaguar };


int main(void)
{
   enum CarBrand a = toyota;

   printf("Choisissez un chiffre entre 0 et 5");
   scanf ("%d", a);


   switch (a)
   {
    case 0:
    printf("toyota");
    break;

    case 1:
    printf ("ford");
    break;
   }


return 0;
}