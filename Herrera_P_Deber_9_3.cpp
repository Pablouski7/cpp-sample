// Deber 9
// Autor: Pablo Herrera
// Fecha: 12 de abril de 2022
// Descripción: Juego adivina el número

#include <iostream>
#include <iomanip>
#include <ctime>  
#include <stdlib.h>

using namespace std;

//Prototipos
int mensaje_intentos(int intentos);
int menu();
void salida();
bool comparacion(int numero_usuario, int numero_aleatorio);

//Variables globales
int acumulado_intentos = 0, partidas_totales = 0, intentos = 0;
bool continua = 1;

int aleatorio_1_a_1000(){// Función que genera un número aleatorio entre 1 y 1000
	srand(time(NULL));
	return rand() % 1000 + 1;
}

void linea(int longitud, bool salta){ // Funcción que dibuja líneas
	for(int i = 0; i<longitud ; i++)
		cout<<"-";
	if(salta)
		cout<<endl;
}

int mensaje_intentos(int intentos){ // Función que devuelve un mensaje dependiendo del número de intentos del usuario en una partida
	if(intentos<10)
		cout<<"\nTuviste mucha suerte!"<<endl;
	else if(intentos==10)
		cout<<"\nSe nota que conoces el truco."<<endl;
	else if(intentos>10)
		cout<<"\nDeberías hacerlo mejor."<<endl;
}

int menu(){ // Función que imprime le menú hasta obtener opciones validas
	int choice = 0;
	while(true){
		cout<<"1.- Jugar\n2.- Salir"<<endl;
		cout<<"Opción: ";cin>>choice;
		cout<<endl;
		if(choice == 1||choice==2)
			return choice;
		else
			cout<<"Elija una opción valida\n"<<endl;
	}
}

void salida(){ // Función que retorna los datos de las partidas del usuario
	cout<<"Usted jugo "<<partidas_totales<<" partida(s)"<<endl;
	cout<<"El promedio de todos sus intentos fue "<<acumulado_intentos/partidas_totales<<endl;
}

void encabezado(){ // Función que dibuja el encabezado
	linea(40,1);
	linea(6,0);	cout<<" ADIVINA EL NÚMERO THE GAME "; linea(6,1);
	linea(40,1);
}

bool comparacion(int numero_usuario, int numero_aleatorio){ // Función que compara el número del usuario con el aleatorio. Y que le feedback sobre su número
	if(numero_usuario>numero_aleatorio)
		cout<<"Es muy alto\n"<<endl;
	else if(numero_usuario<numero_aleatorio)
		cout<<"Es muy bajo\n"<<endl;
	else
		continua = 0;
		
	return continua;
}
int main() {
	setlocale(LC_ALL, "");
	int sigue = 1;
	encabezado();
	cout<<endl;
	// Ciclo que se ejecutara hasta que el usuario decida salirse del programa
	while(sigue == 1){
		// Se genera el número a adivinar
		int n_por_adivinar = aleatorio_1_a_1000();
		float n_usuario = 0;
		continua = 1;
		// Se invoca al menú
		sigue = menu();
		// Si el usuario aun no gana y quiere seguir jugando se ejecuta el juego
		while(continua&&sigue==1){
			cout<<"Ingresa un número del 1 al 1000:";cin>>n_usuario;
			// Se valida que el número este entre el rango solicitado
			if((n_usuario>=1)&&(n_usuario<=1000)){
				comparacion(n_usuario, n_por_adivinar);
				// Se van sumando los intentos
				intentos++;
			} else
				cout<<"\nIngrese un número dentro del rango solicitado\n"<<endl;		
		}
		// Si el usuario sigue jugando se le dice que tan bien le fue en sus intentos y se contabiliza cuantas partidas juega
		if(sigue==1){
			mensaje_intentos(intentos);
			partidas_totales++;
		}
		// Se suman todos los intnetos para poder sacar el promedio
		acumulado_intentos+=intentos;
		// Se reinicia el contador de intentos para la proxima partida
		intentos = 0;
		cout<<endl;
	}
	// Y si el usuario ya no quiere jugar se ejecuta la función salida
	salida();
	system("pause");
	return 0;
}
