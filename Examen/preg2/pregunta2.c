#include <stdio.h>

int algoritmo_de_Euclide(int n, int m){
//Donde m es mayor y n menor
 int r;
int m_o_nTemporal;
//r = m/n; //Se divide el numero mayor entre el menor
 while (m != 0) {
        m_o_nTemporal = m;
        m = n % m;
        n = m_o_nTemporal;
    }
return n;

	if (m = 0) 
	{
	return n;
	}
}

int main(void){
	printf("El maximo comun divisor de 9 y 15 es: %d\n", algoritmo_de_Euclide(9, 15));
	printf("El maximo comun divisor 10 y 9 es: %d\n", algoritmo_de_Euclide(10, 8));
	printf("El maximo comun divisor 12 y 6 es: %d\n", algoritmo_de_Euclide(12, 6));
 }

