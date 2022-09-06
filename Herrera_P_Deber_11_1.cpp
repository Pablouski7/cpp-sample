// Deber 11.1
// Autor: Pablo Herrera
// Fecha: 5 de mayo de 2022
// Descripción: Programa que genera dos matrices aleatorias, las suma y las multiplica

#include <ctime>  
#include <stdlib.h>
#include <iostream>
#include <iomanip>

using namespace std;
int n_aleatorio(int desde, int hasta);

// Función para generar números aleatorios dentro de un rango
int n_aleatorio(int desde, int hasta){
	srand(time(NULL)+rand());
	return rand() % hasta + desde; 
}

int main() {
	setlocale(LC_ALL, "");	
	
	// Declaración e inicialización de matrices
	int matrizA[7][7] = {0};
	int matrizB[7][7] = {0};
	int sumaAB[7][7] = {0};
	int multiAB[7][7] = {0};
	
	// Ciclo for que llena ambas matrices con números aleatorios entre -5 y 5
	for(int i = 0; i<7 ; i++){
		for(int j = 0; j<7; j++){
			 matrizA[i][j]= n_aleatorio(-5,11);
			 matrizB[i][j]= n_aleatorio(-5,11);
		}
	}

	// Ciclo for que suma las matrices
	for(int i = 0; i<7 ; i++){
		for(int j = 0; j<7; j++)
			 sumaAB[i][j] = matrizA[i][j]+matrizB[i][j];
		
	}
	
	// Ciclo for que multiplica las matrices
	for(int i = 0; i<7; i++){
		for(int j = 0; j<7; j++)
			for(int q = 0; q<7; q++)
				multiAB[i][j] += matrizA[i][q]*matrizB[q][j];
		

	}
	
	// Print de datos
	printf(" %15c \t \t %15c \n",'A','B');
	for(int i = 0; i<7 ; i++){
		for(int j = 0; j<7; j++)
			 printf("%4d",matrizA[i][j]);
		cout<<"\t";
		for(int j = 0; j<7; j++)
			 printf("%4d",matrizB[i][j]);
		cout<<endl;
	}
	cout<<endl;
	printf("   %15s \t \t   %15s \n","A + B","A x B");
	for(int i = 0; i<7 ; i++){
		for(int j = 0; j<7; j++)
			 printf("%4d",sumaAB[i][j]);
		cout<<"\t";
		for(int j = 0; j<7; j++)
			 printf("%4d",multiAB[i][j]);
		cout<<endl;
	}
	
	system("pause");
	return 0;
}
