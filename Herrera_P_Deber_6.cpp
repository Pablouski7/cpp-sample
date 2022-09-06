// Deber 6
// Autor: Pablo Herrera
// Fecha: 22 de marzo de 2022
// Descripción: Programa que corre los 4 ejercicios planteados.
#include <iostream>
#include <iomanip>
#include <cmath>
#include <math.h>
using namespace std;

int main() {
	setlocale(LC_ALL, "");
	// Declaración de variables
	int n = 0, i = 0, j = 0, espacios = 0, choise = 0, program = 0;
	
	// Ciclo para ejecutar el programa hasta que el usuario quiera cerrarlo
	do{
		// Ciclo para que el usuario escoja un programa valido
		do{
			cout<<endl;
			cout<<"Programas:\n 1.Dibuja cuadrados\n 2.Dibuja patrones con asteriscos\n 3.Dibuja V's\n 4.Dibuja una piramide de números\n"<<endl;
			cout<<"Elija un programa: ";cin>>program;
			cout<<endl;
			if((program<=0)||(program>4))
				cout<<"Por favor escoja una opción valida"<<endl;
		}while((program<=0)||(program>4));
		
		// Ejecución del programa elegido
		switch(program){
		case 1: // Programa que dibuja cuadrados
			cout<<"1) Cuadrados"<<endl;
			
			// Ciclo para que el usuario ingrese un número valido
			do{
				cout<<endl;
				cout<<"a) Ingrese el lado de un cuadrado: ";cin>>n;
				cout<<endl;
				if(n<=0)
					cout<<"Ingrese un número positivo que no sea cero por favor"<<endl;
			}while(n<=0);
			
			// Ciclo for que dibuja solo los lados de un cuadrado
			for(i = 0; i<n ; i++){
				for(j = 0; j<n ; j++){
					//Condicional que dibuja la primera y ultima línea del cuadrado
					if((i==0)||(i==(n-1)))
						cout<<"X";
					//Condicional que dibuja la primera y ultima columna del cuadrado
					else if((j==0)||(j==(n-1)))
						cout<<"X";
					//Espacios para rellenar el cuadrado
					else
						cout<<" ";
				}
				cout<<endl;
			}
			
			// Ciclo para que el usuario ingrese un número valido
			do{
				cout<<endl;
				cout<<"b) Ingrese el lado de un cuadrado: ";cin>>n;
				cout<<endl;
				if(n<=0)
					cout<<"Ingrese un número positivo que no sea cero por favor"<<endl;
			}while(n<=0);
			
			// Ciclo for que dibuja los lados de un cuadrado y la x que tiene adentro
			for(i = 0; i<n ; i++){
				for(j = 0; j<n ; j++){
					//Condicional que dibuja la primera y ultima línea del cuadrado
					if((i==0)||(i==(n-1)))
						cout<<"X";
					//Condicional que dibuja la primera y ultima columna del cuadrado
					else if((j==0)||(j==(n-1)))
						cout<<"X";
					//Condicional que dibuja la diagonal de izquierda a derecha (\)
					else if(i==j)
						cout<<"X";
					//Condicional que dibuja la diagonal de derecha a izquierda (/)
					else if(i==((n-1)-j))
						cout<<"X";
					//Espacios para rellenar el cuadrado
					else
						cout<<" ";
				}
				cout<<endl;
			}
			
			//Ciclo para volver al menu principal dejar de ejecutar el programa
			do{
				cout<<endl;
				cout<<"1. Volver al menú principal"<<endl;
				cout<<"2. Cerrar el programa"<<endl;
				cout<<endl;
				cout<<"Elija una opoción: ";cin>>choise;
				cout<<endl;
				if((choise>2)||(choise<=0))
					cout<<"Ingrese una opción valida por favor"<<endl;
			}while((choise>2)||(choise<=0));
			break;
			
		case 2:
			cout<<"2) Patrones con asteriscos"<<endl;
			
			// Ciclo para que el usuario ingrese un número valido
			do{
				cout<<endl;
				cout<<"Ingrese un número: ";cin>>n;
				cout<<endl;
				if(n<=0)
					cout<<"Ingrese un número positivo que no sea cero por favor"<<endl;
			}while(n<=0);
			
			
			// Print del encabezado
			cout<<"(a)";
			for(espacios = 0; espacios<(n+1) ; espacios++)
				cout<<" ";
			cout<<"(b)";
			for(espacios = 0; espacios<(n+1) ; espacios++)
				cout<<" ";
			cout<<"(c)";
			for(espacios = 0; espacios<(n+1) ; espacios++)
				cout<<" ";
			cout<<"(d)";
			cout<<endl;
			
			// Ciclo for que imprime todas las primeras líneas de los cuatro ejercicios
			// Lógica general: los if's "dtectan" donde ira un asterisco y en los espacios que no rellena con espacios. Para alinear los prints
			for(i = 0 ; i < n ; i++){
				// a)
				for(j = 0 ; j < n ; j++){
					if(i>=j)
						cout<<"*";
					else 
						cout<<" ";
				}
				for(espacios = 0; espacios<4 ; espacios++)
				cout<<" ";
				// b)
				for(j = 0 ; j < n ; j++){
					if(j<(n-i))
						cout<<"*";
					else 
						cout<<" ";	
				}
				for(espacios = 0; espacios<4 ; espacios++)
				cout<<" ";
				// c)
				for(j = 0 ; j < n ; j++){
					if(i<=j)
						cout<<"*";
					else 
						cout<<" ";
				}
				for(espacios = 0; espacios<4 ; espacios++)
				cout<<" ";
				// d)
				for(j = 0 ; j < n ; j++){
					if(i>=((n-1)-j))
						cout<<"*";
					else
						cout<<" ";
				}
				cout<<endl;
			}
			
			//Ciclo para volver al menu principal dejar de ejecutar el programa
			do{
				cout<<endl;
				cout<<"1. Volver al menú principal"<<endl;
				cout<<"2. Cerrar el programa"<<endl;
				cout<<endl;
				cout<<"Elija una opoción: ";cin>>choise;
				cout<<endl;
				if((choise>2)||(choise<=0))
					cout<<"Ingrese una opción valida por favor"<<endl;
			}while((choise>2)||(choise<=0));
			break;
			
		case 3:
			cout<<"3) Dibujardor de V's"<<endl;
			
			// Ciclo para que el usuario ingrese un número valido
			do{
				cout<<endl;
				cout<<"Ingrese un número impar: ";cin>>n;
				cout<<endl;
				if(n<=0)
					cout<<"Ingrese un número impar por favor"<<endl;
			}while(n<=0);
			
			//Ciclo for que imprime una V
			for(i = 0 ; i < n ; i++){
				for(j = 0 ; j < n ; j++){
					// Imprime X cuando i y j son iguales, y sino imprime espacios
					if(j==i)
						cout<<"X";
					else
						cout<<" ";
				}
				// Empieza desde 1 porque la última X (la punta) la imrpime el anterior for.
				for(j = 1 ; j < n ; j++){
					// Imprime X cuandp la coincidencia se da de derecha a izquierda (por ello (n-1)-j). Y sino imprime un espacio
					if(i==((n-1)-j))
						cout<<"X";
					else
						cout<<" ";
				}
				cout<<endl;
			}
			
			//Ciclo para volver al menu principal dejar de ejecutar el programa
			do{
				cout<<endl;
				cout<<"1. Volver al menú principal"<<endl;
				cout<<"2. Cerrar el programa"<<endl;
				cout<<endl;
				cout<<"Elija una opoción: ";cin>>choise;
				cout<<endl;
				if((choise>2)||(choise<=0))
					cout<<"Ingrese una opción valida por favor"<<endl;
			}while((choise>2)||(choise<=0));
			break;
			
		case 4:
			cout<<"4)Piramide de números"<<endl;
			
			// Ciclo para que el usuario ingrese un número valido
			do{
				cout<<endl;
				cout<<"Ingrese un número: ";cin>>n;
				cout<<endl;
				if(n<=0)
					cout<<"Ingrese un número positivo por favor"<<endl;
			}while(n<=0);
			
			//Ciclo for que dibuja una piramide de números dependiendo del n ingresado
			for(i = 0 ; i < n ; i++){
				// Primero se imprimen los espacios para que parezca una piramide
				for(j = 0 ; j < n ; j++){
					if(j<(n-i))cout<<" ";
				}
				// Se imprime el lado izquierda de la piramide incluyendo la mitad
				for(j = 0 ; j<=n ; j++){
					// Se imprime la evolución de j + 1 porque empieza en 0. Y j porque esta va cambiando de caracter a caracter. Lo cual da como resultado la piramide deseada
					if(i>=j)
						cout<<j+1;
				}
				// Se imprime el lado restante de la piramide
				for(j = n ; j>0 ; j--){// Se hace el cilo for a la inversa (de n a 0) para imprimir precisamente la priamide dada la vuelta (que sería ir restando)
					// La misma lógica que el for anterior pero a la inversa 
					if(i>=j)
						cout<<j;
				}
				cout<<endl;
			}
			
			//Ciclo para volver al menu principal dejar de ejecutar el programa
			do{
				cout<<endl;
				cout<<"1. Volver al menú principal"<<endl;
				cout<<"2. Cerrar el programa"<<endl;
				cout<<endl;
				cout<<"Elija una opoción: ";cin>>choise;
				cout<<endl;
				if((choise>2)||(choise<=0))
					cout<<"Ingrese una opción valida por favor"<<endl;
				
			}while((choise>2)||(choise<=0));
			break;
			
		default:
			cout<<"ERROR \n Vuelve a ejecutarme"<<endl;	
			cout<<""<<endl;	
			break;
		}
	}while(choise<2);
	return 0;
}
