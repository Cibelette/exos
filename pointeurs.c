#include <stdio.h>

int main ()
{
char c = 'c';
int i = 123;
float f = 98.6;
double d = 5.033E34;

printf ("adresse de 'c' %p\n",&c);
printf ("adresse de 'i' %p\n", &i);
printf ("adresse de 'f' %p\n", &f);
printf ("adresse de 'd' %p\n", &d);

    return(0);
}
