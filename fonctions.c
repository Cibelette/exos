#include <stdio.h>


void vegas (void);

int main ()
{
    int a;

    a=365;
    printf ("dans la fonction main(), a = %d\n", a);
    vegas ();
    printf ("de retour dans main(), a=%d\n", a);
    
    return (0);
}

void vegas (void)
{
    int a;

    a = -10;
    printf (" dans la fonction vegas (), a=%d\n", a);
}