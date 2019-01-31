#include <stdio.h>

int main ()
{
    int nombre;

    for (nombre = 0 ; nombre <= 10; nombre++)
    {
        write (1, &nombre, sizeof (nombre));
    }

putchar ('\n');
return (0);

}