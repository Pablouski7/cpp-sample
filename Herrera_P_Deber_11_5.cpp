// Deber 11.5
// Autor: Pablo Herrera
// Fecha: 5 de mayo de 2022
// Descripción: Programa que cálcula los resultados de un torneo de futbol

#include <ctime>  
#include <stdlib.h>
#include <string.h>
#include <iostream>
#include <iomanip>

using namespace std;

// Función para generar números aleatorios dentro de un rango
int n_aleatorio(int desde, int hasta){
	srand(time(NULL)+rand());
	return rand() % hasta + desde; 
}

int main() {
	setlocale(LC_ALL, "");	
	// Declaración e inicialización de matrices y arreglos
	char selecciones[6][10] = {"Bolivia","Chile","Colombia","Ecuador","Peru","Venezuela"};
	char abreviaciones[6][4] = {"Bol","Chi","Col","Ecu","Per","Ven"};
	char parametros[7][3] = {"PG","PE","PP","GF","GC","DG","PT"};
	int resumen[6][7] = {{0}};
	int resultados[6][2] = {{0}};
	int goles[6][6] = {{0}};
	int posiciones[6] = {0};
	
	// Ciclo for que llena aleatoriamente los goles
	for(int i = 0; i<6; i++)
		for(int j = 0; j<6; j++)
			if(i!=j)
				goles[i][j] = n_aleatorio(0,4);
					
	
	// Print de los goles
	printf("%11c",' ');
	for(int i = 0; i<6 ; i++){
		printf("%4s",abreviaciones[i]);
	}
	cout<<endl;
	for(int i = 0; i<6 ; i++){
		printf("%9s :",selecciones[i]);
		for(int j = 0; j<6; j++)
			 printf("%4d",goles[i][j]);
		cout<<endl;
	}
	cout<<endl;
	
	// Ciclo for que llena la matriz de resumen
	for(int i = 0; i<6; i++){
		for(int j = 0; j<6; j++){
			if(goles[i][j] > goles[j][i])
				resumen[i][0]++;
			else if((goles[i][j] < goles[j][i]))
				resumen[i][2]++;
			else if(i!=j)
				if((goles[i][j] == goles[j][i]))
					resumen[i][1]++;
			resumen[i][3] += goles[i][j]; 
			resumen[i][4] += goles[j][i]; 
			resumen[i][5] = resumen[i][3] - resumen[i][4]; 
			resumen[i][6] = resumen[i][0]*3;
			if(resumen[i][1]>0)
				resumen[i][6] += resumen[i][1];
		}
	}
	
	// Print del resumen
	printf("%11c",' ');
	for(int i = 0; i<7 ; i++){
		printf("%4s",parametros[i]);
	}
	cout<<endl;
	for(int i = 0; i<6 ; i++){
		printf("%9s :",selecciones[i]);
		for(int j = 0; j<7; j++)
			 printf("%4d",resumen[i][j]);
		cout<<endl;
	}
	
	// Ciclo for que copia los datos de PT y DG de la matriz resumen a la matriz resultados
	for(int i = 0; i<6; i++)
		for(int j = 0; j<2; j++)
			resultados[i][j] = resumen[i][5+j];
	cout<<endl;
	
	// Humilde intento de ordenar decrecientmente los equipos con sus respectivos datos
	int auxiliar = 0, pos_mayor = 0, mayor = 0;
	char aux[10];
	// Algoritmo selection sort para hallar los mayores
	for(int i = 0; i<6 ; i++){
		for(int j = 0; j<2; j++){
			mayor = resultados[i][j], pos_mayor = i;
			for(int p = i+1; p<6 ; p++){
				for(int q = 0; q<2; q++){
					if(resultados[p][q]>mayor){
						mayor = resultados[p][q];
						pos_mayor = p;
					}
				}
			}
			auxiliar = resultados[i][j];
			resultados[i][j] = resultados[pos_mayor][j];
			resultados[pos_mayor][j] = auxiliar;
//			selecciones[i].swap(selecciones[pos_mayor])
			// No entiendo por qué no funciona el ordenamiento de los nombres, pero aqui esta mi intento
//			strcpy(aux, selecciones[i]);
//			strcpy(selecciones[i], selecciones[pos_mayor]);
//			strcpy(selecciones[pos_mayor], aux);
		}
	}
	
	// Print de los resultados
	printf("                 PT  DG\n");
	for(int i = 0; i<6 ; i++){
		printf("%2d. %9s :",i+1,selecciones[i]);
		for(int j = 1; j>=0; j--)
			 printf("%4d",resultados[i][j]);
		cout<<endl;
	}
	cout<<endl;
	
	// Print de los partidos jugados
	printf("Partidos:\n");
	for(int i = 0; i<6; i++)
		for(int j = 0; j<6; j++){
			if(i!=j)
				printf("%9s : %3d vs %9s : %3d\n", selecciones[i],goles[i][j],selecciones[j],goles[j][i]);
		}

	system("pause");
	return 0;
}
