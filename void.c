#include <stdio.h>


int changeinteger ()
{
    int integer;
    int resultat;
    int *pointeursurresultat;
    pointeursurresultat = &resultat;

    resultat = integer * 3;

    return (0);
}


void main()
{
    int resultat;
    int integer = 3;
    int *pointeursurresultat = &resultat;

    changeinteger ("%d", integer);

     printf ("3*3 = %d", *pointeursurresultat );



    

   
   
return;
}