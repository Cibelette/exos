#include <stdio.h>

int main ()
{
    char alphabet;

    for (alphabet='Z'; alphabet >='A'; alphabet = alphabet -2)
    {
        printf ("%c", alphabet);
    }

putchar ('\n');
return (0);

}