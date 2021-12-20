#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    float a, b, suma;
    printf ("Ingresa el valor de a: ");
    scanf ("%f", &a);
    (void) getchar ();
    printf ("Ingresa el valor de b: ");
    scanf ("%f", &b);
    (void) getchar ();
    suma=a+b;
    printf ("Valor de suma: %g\n", suma);
    putchar ('\n');
    system ("pause");
    return EXIT_SUCCESS;
}
