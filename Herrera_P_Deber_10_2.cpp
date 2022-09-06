// Deber 10.2
// Autor: Pablo Herrera
// Fecha: 28 de abril de 2022
// Descripción: Programa que genera las posiciones de llegada de diez carros aleatoriamente

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
		for(int g = 0; g<length; g++)
			cout<<array[g]<<" ";
	else
		for(int g = 0; g<length; g++)
			cout<<array[g]<<endl;
	cout<<endl;
}

// Función que valida si un n ya esta dentro de un arreglo o no
bool se_repite(int array[], int n, int pos){
	for(int i = 0 ; i<pos ; i++)
		if(n == array[i])
			return true;
	return false;
}

int main() {
	setlocale(LC_ALL, "");	

	string posiciones[10] = {"Primero llego el ", " , segundo el ", " , tercero el ", " , cuarto el ", " , quinto el ", " , sexto el ", " , septimo el ", " , octavo el ", " , noveno el ", " y decimo el "};
	int carros[10] = {0};
	int n_generado = 0;
	
	// Ciclo que genera números aleatorios hasta que no se repita ninguno en el array
	for(int i = 0; i<10 ; i++){
		n_generado = n_aleatorio(1,10);
		
		while(se_repite(carros,n_generado,i)){
			n_generado = n_aleatorio(1,10);
		}
		carros[i] = n_generado;
	}
	
	// Display de datos
	for(int i = 0; i<10 ; i++)
		cout<<posiciones[i]<<carros[i];
	cout<<"\n"<<endl;
	
	system("pause");
	return 0;
}
