#include <iostream>
using namespace std;

int arreglo [10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
int *p;

int main (int argc, char** argv)
{
	p=&arreglo[0];
	float suma, promedio;
	for (int i=0; i<10; i++)
	{
		suma = suma + arreglo[i];
	}
	cout << "La suma es: " << suma << endl;
	promedio = (suma/10);
	cout << "El promedio es: " << promedio << endl << endl;
	
	for (int i=0; i<10; i++)
	{
		cout << "direccion arreglo posicion " << i << " es: "<< p << endl;
		cout << "arreglo valor " << *p << endl;
		p++;
	}
	return 0;
}
