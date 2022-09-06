// Deber 10
// Autor: Pablo Herrera
// Fecha: 28 de abril de 2022
// Descripci�n: Dibuja digitos en consola
#include <ctime>  
#include <stdlib.h>
#include <iostream>
#include <iomanip>

using namespace std;

// Funci�n para generar n�meros aleatorios dentro de un rango
int n_aleatorio(int desde, int hasta){
	srand(time(NULL)+rand());
	return rand() % hasta + desde; 
}

// Funci�n para mostrar arreglos en consola
void mostrar_arreglo(int array[],int length, bool fila_o_columna){
	if(fila_o_columna)
		for(int g = 0; g<length; g++){
			if(g==length-1)
				cout<<array[g]<<endl;
			else
				cout<<array[g]<<",";
		}
	else
		for(int g = 0; g<length; g++)
			cout<<array[g]<<endl;
	cout<<endl;
}

int main() {
	setlocale(LC_ALL, "");	
	int datos[20] = {0};
	int auxiliar = 0;
	
	// Ciclo para rellenar el arreglo de datos aleatorios
	for(int i = 0; i<20; i++)
		datos[i] = n_aleatorio(1,100);
		
	// Print del arreglo original
	printf("Arreglo sin ordenar:\n");
	mostrar_arreglo(datos,20,1);
	
	// Ciclo while para hacer menos comparaciones con cada ejecucui�n
	int comparaciones = 20;
	while(comparaciones>0){
		// Ciclo for que aplica el m�todo de la burbuja (intercambiar si es decreciente)
		for(int j = 0; j<comparaciones; j++){
			if(datos[j]>datos[j+1]){
				auxiliar = datos[j];
				datos[j] = datos[j+1];
				datos[j+1] = auxiliar;
			}
		}
		comparaciones--;
	}
	
	//Print del arreglo ordenado
	printf("Arreglo ordenado:\n");
	mostrar_arreglo(datos,20,1);
	system("pause");
	return 0;
}
