// Deber 11.2
// Autor: Pablo Herrera
// Fecha: 5 de mayo de 2022
// Descripci�n: Programa que dibuja patrones geometricos en una matriz nxn desde donde indique el usuario

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

int main() {
	setlocale(LC_ALL, "");	
	
	// Declaraci�n e inicializaci�n de matrices y variables
	int n = 0;
	cout<<"Ingrese las dimensiones para una matriz cuadrada: ";cin>>n;
	const int dimensiones = n;
	int x = 0, y = 0;
	int matriz[dimensiones][dimensiones] = {0};
	cout<<"Ingrese las coordenadas del centro"<<endl;
	cout<<"x: ";cin>>x;
	cout<<"y: ";cin>>y;
	
	// Parte A (Cuadrados)	
	// Ciclo for que dibuja desde adentreo hacia afuera
	for(int i = 0; i<dimensiones ; i++){
		for(int j = 0; j<dimensiones; j++){
			for(int q = 0; q<=dimensiones; q++){
				// Condicionales que ponen un n�mero q adiacente a la region anterior/interior (encierra en un cuadrado la region correspondiente a la ejecuci�n). Empezando desde la coordenada que ingreso el usuario
				if(i == y+q)
					matriz[i][j] = q;
				if(i == y-q)
					matriz[i][j] = q;
				if(j == x+q)
					matriz[i][j] = q;
				if(j == x-q)
					matriz[i][j] = q;
			}
		}
	}
	// Print parte A
	for(int i = 0; i<dimensiones ; i++){
		for(int j = 0; j<dimensiones; j++)
			 printf("%4d",matriz[i][j]);
		cout<<endl;
	}
	cout<<endl;
	
	// Parte B (Cruces)
	// Ciclo for que dibuja afuera (las esquinas) hacia adentro (al centro)
	for(int i = 0; i<dimensiones ; i++){
		for(int j = 0; j<dimensiones; j++){
			for(int k = dimensiones; k>=0; k--){
				// Misma l�gica que el for anterior, pero empezando la comparaci�n desde el n�mero m�s alto
				if(i == y+k)
					matriz[i][j] = k;
				if(i == y-k)
					matriz[i][j] = k;
				if(j == x+k)
					matriz[i][j] = k;
				if(j == x-k)
					matriz[i][j] = k;
			}
		}
	}
	
	// Print parte B
	for(int i = 0; i<dimensiones ; i++){
		for(int j = 0; j<dimensiones; j++)
			 printf("%4d",matriz[i][j]);
		cout<<endl;
	}

	system("pause");
	return 0;
}
