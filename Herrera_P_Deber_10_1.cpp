// Deber 10.1
// Autor: Pablo Herrera
// Fecha: 28 de abril de 2022
// Descripción: Programa que genera 100 números aleatorios de 2 digitos. Y que lleva la vuenta de los ultimos digitos.

#include <ctime>  
#include <stdlib.h>
#include <iostream>
#include <iomanip>

using namespace std;

// Función para generar números aleatorios dentro de un rango
int n_aleatorio(int desde, int hasta){
	srand(time(NULL)+rand());
	return rand() % hasta + desde; 
}

// Función para mostrar arreglos en consola
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
	int n_aleatorios[100] = {0};
	int cuenta[10] = {0};
	
	// Se llena el arreglo de 100 posiciones con números aleatorios de dos cifras
	for(int i = 0; i<100 ; i++)
		n_aleatorios[i] = n_aleatorio(10,90);
	
	printf("Números generados aleatoriamente: \n");
	mostrar_arreglo(n_aleatorios,100,1);
	cout<<endl;
	
	// Se llena el arreglo de cuenta con las n repeticiones de cada digito
	for(int j = 0; j<100 ; j++)
		for(int q = 0; q<10 ; q++)
			if(n_aleatorios[j]%10==q)
				cuenta[q]+=1;
	
	printf("Cuenta de los digitos: \n");
	mostrar_arreglo(cuenta,10,0);
	
	system("pause");
	return 0;
}
