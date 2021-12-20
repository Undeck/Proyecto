#include <stdio.h>
#include <stdlib.h>

int main ()
{
	int x;
	int y;
	int resta;
	
	printf("Escribe el primer digito: ");
		scanf ("%d", &x);
	printf("Escribe el segundo digito: ");
		scanf ("%d", &y);
	
	resta = x - y;
	printf("El resultado es %d\n", resta);
	return 0;
}
