#include <stdio.h>

int calcul ();
int *p;
int valeurDeBase;
int resultat;


void main ()
{
 valeurDeBase = 1;
 
 printf ("valeur de base : %d \n", valeurDeBase);
 calcul(valeurDeBase);
 printf ("le resultat est %d \n", *p);


    
}

int calcul ()
{
    p = &valeurDeBase;
    resultat = *p * 3;
    p = &resultat;

    return (0);
}