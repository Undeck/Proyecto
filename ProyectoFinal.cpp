#include <stdio.h>
#include "Resta.h"
#include "Suma.h"

int main()
{

    printf("PROYECTO FINAL DE INTRODUCCION A LA COMPUTACION\n");
    printf("Calculadora de Sumas y Restas\n");
    printf("Porfavor seleccione 1 para suma y 2 para resta\n");


int x, y, resta, Opcion;
float a, b, suma;


printf("PROYECTO FINAL DE INTRODUCCION A LA COMPUTACION\n");
printf("Calculadora de Sumas y Restas\n");
printf("Porfavor seleccione 1 para suma y 2 para resta\n");
	scanf_s("%d", &Opcion);
if (Opcion == 1){
    printf ("Ingresa el valor de a: ");
   	 scanf ("%f", &a);
   	 (void) getchar ();
    printf ("Ingresa el valor de b: ");
   	 scanf ("%f", &b);
   	 (void) getchar ();
    		suma=a+b;
    printf ("Valor de suma: %g\n", suma);
   	 putchar ('\n');
   		 system ("pause"); }

else if (Opcion == 2){
	printf("Escribe el primer digito: ");
		scanf ("%d", &x);
	printf("Escribe el segundo digito: ");
		scanf ("%d", &y);

		resta = x - y;
	printf("El resultado es %d\n", resta);	
}
    return 0;
}
