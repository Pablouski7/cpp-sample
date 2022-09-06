// Deber 11.3
// Autor: Pablo Herrera
// Fecha: 5 de mayo de 2022
// Descripción: Programa que genera una tabla de notas, porcentajes y promedios para 10 alumnos.

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

// Función que genera porcentajes entre 2 y 15. Que dan un total de 100
int generar_porcentajes(int array[], int length){
	srand(time(NULL)+rand());
	int suma_porcentajes = 0;
	int sobrante = 0;
	// Ciclo do while que garantiza que los porcentajes generados den 100
	do{
		// Si los números generados superan al 100. Se clculara el excedente y se ira restando a todos los números que se pueda
		if(suma_porcentajes>100){
			sobrante = suma_porcentajes - 100;
			for(int i = 0; i<length; i++){
				while(sobrante>0){
					if(array[i]>2){
						array[i]--;
						sobrante--;
					}
					else
						break;
				}
			}
			suma_porcentajes = 100;
		}else{
			// Sino se generan los números aleatorios para llenar el array
			suma_porcentajes = 0;
			for(int i = 0; i<length; i++){
				array[i] = rand() % 14 + 2;
				suma_porcentajes += array[i];
			}
		}
	}while(suma_porcentajes!=100);
}

// Función que devuelve la nota de acuerdo al promedio
char calc_nota(float n){
	if(n>=8.5)
		return 'A';
	else if(n>=7)
		return 'B';
	else if(n>=5.5)
		return 'C';
	else if(n>=4)
		return 'D';
	else
		return 'F';
}


int main() {
	setlocale(LC_ALL, "");	
	
	// Declaración e inicialización de matrices y arreglos
	char alumnos[10][10]={"Pedro", "Susana", "Juan", "Emilia", "Felipe", "Mateo", "Ana", "Camila", "Elena", "Jorge"};
	int porcentajes[10] = {0};
	generar_porcentajes(porcentajes,10);
	float notas[10][10] = {0};
	double promedio[10] = {0};
	
	// Ciclo for para llenar las notas con números entre 2 y 10 (con un decimal)
	for(int i = 0; i<10; i++)
		for(int j = 0; j<10; j++)
			notas[i][j] = n_aleatorio(20,80)/10.0;
	
	// Ciclo for que cálcula el promedio final de cada estudiante
	for(int i = 0; i<10; i++){
		for(int j = 0; j<10; j++){
			promedio[i]+= notas[i][j]*porcentajes[j]/100.0;
		}
	}
	
	// Print de los datos
	printf("%5c",' ');
	for(int i = 1; i<=10 ; i++)
		printf("%6d",i);
	cout<<endl;
	printf("%7c",' ');
	for(int i = 0; i<10 ; i++){
		printf("%4d %%",porcentajes[i]);
	}
	printf("%5s %7s","Prm","Nota");
	cout<<endl;
	for(int i = 0; i<10 ; i++){
		printf("%6s",alumnos[i]);
		for(int j = 0; j<10; j++)
			 printf("%6.1f",notas[i][j]);
		printf(" %6.2f %3c",promedio[i], calc_nota(promedio[i]));
		cout<<endl;
	}

	system("pause");
	return 0;
}
