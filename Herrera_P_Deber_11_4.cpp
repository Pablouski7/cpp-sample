// Deber 11.4
// Autor: Pablo Herrera
// Fecha: 5 de mayo de 2022
// Descripción: Programa que cálcula todos los movimientos posibles de un caballo para todos los casilleros del tablero de ajedrez con y sin peones aliados

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

int main() {
	setlocale(LC_ALL, "");	
	
	// Declaración e inicialización de variables y matrices
	int movimientos[8][2] = {{-2,1},{-2,-1},{2,1},{2,-1},{1,-2},{-1,-2},{1,2},{-1,2}};
	int tablero[8][8] = {0};
	int actual_x = 0, siguiente_x = 0, actual_y = 0, siguiente_y = 0;
	int cnt_moves = 0;
	
	// Primer par de ciclos for que recorren todas las posiciones del tablero. Y que asigna la cuenta de los movimientos posibles en cada casilla
	for(int p = 0; p<8; p++){
		for(int q = 0; q<8; q++){
			actual_x = p;
			actual_y = q;
			cnt_moves = 0;
			// Segundo par de ciclos for que validan cuantos movimientos del caballo son posibles desde la posición actual en el tablero
			for(int i = 0; i<8; i++){
				for(int j = 0; j<8; j++){
					siguiente_x = actual_x + movimientos[i][0];
					siguiente_y = actual_y + movimientos[i][1];
					// Condicional que revisa si las coordenadas de los movimientos del caballo estan dentro del tablero o no. 
					if(siguiente_x>=0 && siguiente_x<8 && siguiente_y>=0 && siguiente_y<8){
						cnt_moves++;
					}
				}
			}
			tablero[actual_x][actual_y] = cnt_moves/8;
		}
	}	
	
	// Print del tablero a
	printf("a)\n");
	for(int i = 0; i<8 ; i++){
		for(int j = 0; j<8; j++)
			 printf("%3d",tablero[i][j]);
		cout<<endl;
	}
	cout<<endl;
	
	// Declaración e inicialización de variables y matrices para el segundo problema
	int n_peones = 0;
	int tablero2[8][8] = {0};
	int x_aleatoria = 0, y_aleatoria = 0;
	cout<<"Ingrese el número de peones a colocar en el tablero: ";cin>>n_peones;
	
	// Ciclo que coloca a todos los peones en posiciones aleatorias
	while(n_peones>0){
		x_aleatoria = n_aleatorio(0,8);
		y_aleatoria = n_aleatorio(0,8);
		// Condicional que revisa que la casilla este disponible
		if(tablero2[x_aleatoria][y_aleatoria] == 0){
			tablero2[x_aleatoria][y_aleatoria] = 99;
			n_peones--;
		}	
	}
	
	// Primer par de ciclos for que recorren todas las posiciones del tablero. Y que asigna la cuenta de los movimientos posibles en cada casilla
	for(int p = 0; p<8; p++){
		for(int q = 0; q<8; q++){
			actual_x = p;
			actual_y = q;
			cnt_moves = 0;
			// Condicional que garantiza que donde hay peones no se cálcule nada
			if(tablero2[p][q] == 99)
				continue;
			// Segundo par de ciclos for que validan cuantos movimientos del caballo son posibles desde la posición actual en el tablero
			for(int i = 0; i<8; i++){
				for(int j = 0; j<8; j++){
					siguiente_x = actual_x + movimientos[i][0];
					siguiente_y = actual_y + movimientos[i][1];
					// Condicional que revisa si las coordenadas de los movimientos del caballo estan dentro del tablero o no. A su vez valida si hay un peon o no, para no considerarlo en la cuenta
					if(siguiente_x>=0 && siguiente_x<8 && siguiente_y>=0 && siguiente_y<8 && tablero2[siguiente_x][siguiente_y] != 99){
						cnt_moves++;
					}
				}
			}
			tablero2[actual_x][actual_y] = cnt_moves/8;
		}
	}	
	
	// Print del tablero b
	printf("b)\n");
	for(int i = 0; i<8 ; i++){
		for(int j = 0; j<8; j++){
			if(tablero2[i][j] == 99)
				printf("%3c",'X');
			else
				printf("%3d",tablero2[i][j]);
		}
		cout<<endl;
	}
	
	system("pause");
	return 0;
}
