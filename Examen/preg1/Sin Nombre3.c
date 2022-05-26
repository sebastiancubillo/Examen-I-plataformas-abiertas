#include <stdio.h>
#include <conio.h>

int main() {	
int numero;
int cantidad=0;
int suma=0;
float newcantidad;
	do{
			printf("Ingrese un numero entero, si desea salir ingrese -1 \n");
	scanf("%d", &numero);
	suma += numero;
	newcantidad=cantidad++;
	}
	while (numero != -1);
	printf("\nHa introducido un total de: %d numeros", cantidad-1);
	printf("\nAl sumar dichos numeros se obtiene: %d", suma+1);
	printf("\nEl promedio es: %f\n", (double) (suma+1)/newcantidad);
	system("pause");
	
}

