// Deber 9
// Autor: Pablo Herrera
// Fecha: 12 de abril de 2022
// Descripci�n: Dibuja una tablilla de 5x5 de pictogramas aleatoriamente

#include <iostream>
#include <iomanip>
#include <ctime>  
#include <stdlib.h>

using namespace std;

int aleatorio_1_a_5(){ // Funci�n que genera un n�mereo aleatorio
	srand( 2 + time(NULL) + rand());
	return rand() % 5 + 1;
}

void pictrograma_1(int n){ //Funci�n que dibuja un pictograma
	for(int i = 0 ; i<n ; i++){
		cout<<"  #   ";
	}
	cout<<endl;
	for(int i = 0 ; i<n ; i++){
		cout<<" # #  ";
	}
	cout<<endl;
	for(int i = 0 ; i<n ; i++){
		cout<<"# # # ";
	}
	cout<<endl;
	for(int i = 0 ; i<n ; i++){
		cout<<"  #   ";
	}
	cout<<endl;
	for(int i = 0 ; i<n ; i++){
		cout<<"  #   ";
	}
	cout<<endl;
}

void pictrograma_2(int n){ //Funci�n que dibuja un pictograma
	for(int i = 0 ; i<n ; i++){
		cout<<"##  # ";
	}
	cout<<endl;
	for(int i = 0 ; i<n ; i++){
		cout<<" # ## ";
	}
	cout<<endl;
	for(int i = 0 ; i<n ; i++){
		cout<<"  #   ";
	}
	cout<<endl;
	for(int i = 0 ; i<n ; i++){
		cout<<"## #  ";
	}
	cout<<endl;
	for(int i = 0 ; i<n ; i++){
		cout<<"#  ## ";
	}
	cout<<endl;
}

void pictrograma_3(int n){ //Funci�n que dibuja un pictograma
	for(int i = 0 ; i<n ; i++){
		cout<<" ###  ";
	}
	cout<<endl;
	for(int i = 0 ; i<n ; i++){
		cout<<"# # # ";
	}
	cout<<endl;
	for(int i = 0 ; i<n ; i++){
		cout<<"## ## ";
	}
	cout<<endl;
	for(int i = 0 ; i<n ; i++){
		cout<<"# # # ";
	}
	cout<<endl;
	for(int i = 0 ; i<n ; i++){
		cout<<" ###  ";
	}
	cout<<endl;
}

void pictrograma_4(int n){ //Funci�n que dibuja un pictograma
	for(int i = 0 ; i<n ; i++){
		cout<<" ###  ";
	}
	cout<<endl;
	for(int i = 0 ; i<n ; i++){
		cout<<"#   # ";
	}
	cout<<endl;
	for(int i = 0 ; i<n ; i++){
		cout<<" # #  ";
	}
	cout<<endl;
	for(int i = 0 ; i<n ; i++){
		cout<<"# # # ";
	}
	cout<<endl;
	for(int i = 0 ; i<n ; i++){
		cout<<"# # # ";
	}
	cout<<endl;
}

void pictrograma_5(int n){ //Funci�n que dibuja un pictograma
	for(int i = 0 ; i<n ; i++){
		cout<<"####  ";
	}
	cout<<endl;
	for(int i = 0 ; i<n ; i++){
		cout<<"#   # ";
	}
	cout<<endl;
	for(int i = 0 ; i<n ; i++){
		cout<<"####  ";
	}
	cout<<endl;
	for(int i = 0 ; i<n ; i++){
		cout<<"#     ";
	}
	cout<<endl;
	for(int i = 0 ; i<n ; i++){
		cout<<"#     ";
	}
	cout<<endl;
}

int main() {
	setlocale(LC_ALL, "");	
	int n_aleatorio;
	// Ciclo for que dibuja la tablilla 5x5. Cada ejec ucdci�n es una l�nea
	for(int lineas = 0; lineas<5 ; lineas++){
		// Genera un nuevo n�mero aleatorio con cada ejecuci�n y lo utiliza para dibujar n pictogramas y para escoger aleatoriamente cual pictograma dibujar
		n_aleatorio = aleatorio_1_a_5();
		switch(n_aleatorio){
			case 1:
				pictrograma_1(n_aleatorio);
				cout<<endl;
				break;
			case 2:
				pictrograma_2(n_aleatorio);
				cout<<endl;
				break;
			case 3:
				pictrograma_3(n_aleatorio);
				cout<<endl;
				break;
			case 4:
				pictrograma_4(n_aleatorio);
				cout<<endl;
				break;
			case 5:
				pictrograma_5(n_aleatorio);
				cout<<endl;
				break;
		}
	}
	system("pause");
	return 0;
}
