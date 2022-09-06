// Deber 7
// Autor: Pablo Herrera
// Fecha: 22 de marzo de 2022
// Descripción: Programa que corre los 2 ejercicios planteados.
#include <iostream>
#include <iomanip>
#include <cmath>
#include <math.h>
using namespace std;

int main() {
	setlocale(LC_ALL, "");
	// Declaración de variables. (u = unidad, d - decena, c = centena)
	// Variables menú y recurrentes
	int  choice = 0, program = 0, n = 0, i = 0;
	// Variables problema 1
	int c = 0, d = 0, u = 0;
	// Variables problema 2
	int mod_n = 0;
	
	// Ciclo para ejecutar el programa hasta que el usuario quiera cerrarlo
	do{
		// Ciclo para que el usuario escoja un programa valido
		do{
			cout<<endl;
			cout<<"Programas:\n 1.Girar cheques\n 2.Horóscopo Chino\n"<<endl;
			cout<<"Elija un programa: ";cin>>program;
			cout<<endl;
			if((program<=0)||(program>4))
				cout<<"Por favor escoja una opción valida"<<endl;
		}while((program<=0)||(program>4));
		
		// Ejecución del programa elegido
		switch(program){
		case 1:
			cout<<"1) Girar cheques"<<endl;
			
			// Ciclo para que el usuario ingrese un número valido
			do{
				cout<<endl;
				cout<<"a) Ingrese un número menor a 1000: ";cin>>n;
				cout<<endl;
				if((n<=0)||(n>=1000))
					cout<<"Ingrese un número positivo menor a 1000 por favor"<<endl;
			}while((n<=0)||(n>=1000));
			
			cout<<"n: "<<n;
			
			// Ya que 100 es el unico caso no contemplado por los switch's, lo evaluo primero.
			if(n==100)
				cout<<"cien"<<endl;
			else{
				// Cálculo los valores de centena, decena y unidad del n ingresado
				u = n%10;
				n-= u;
				// Saco a la decena más la unidad para poder detectar los casos especiales
				d = (n%100) + u;
				n = n - d + u;
				c = n/100;
				cout<<endl;
				
				// Primero imprimo la centena, desde el ciento, porque 100 ya esta fuera de la ecuación
				switch(c){
					case 0:
						break;
				 	case 1:
					 	cout<<"ciento ";
					 	break;
					case 2:
					 	cout<<"doscientos ";
					 	break;
					case 3:
					 	cout<<"trescientos ";
					 	break;
					case 4:
					 	cout<<"cuatrocientos ";
					 	break;
					case 5:
					 	cout<<"quinientos ";
					 	break;
					case 6:
					 	cout<<"seiscientos ";
					 	break;
					case 7:
					 	cout<<"setecientos ";
					 	break;
					case 8:
					 	cout<<"ochocientos ";
					 	break;
					case 9:
					 	cout<<"novecientos ";
					 	break;
					default:
						cout<<"Algo fallo"<<endl;
				}
				// Segundo imprimo las irregularidades/casos especiales, es decir los números con nombre propio y nbo compuesto
				// Aqui llevo un contador (i) para saber si entre o no en un caso especial
				switch(d){
					case 0:
						break;
				 	case 10:
					 	cout<<"diez";
					 	i++;
					 	break;
					case 11:
						cout<<"once";
						i++;
						break;
					case 12:
						cout<<"doce";
						i++;
						break;
					case 13:
						cout<<"trece";
						i++;
						break;
					case 14:
						cout<<"catorce";
						i++;
						break;
					case 15:
						cout<<"quince";
						i++;
						break;
					case 16:
						cout<<"dieciséis";
						i++;
						break;
					case 17:
						cout<<"diecisiete";
						i++;
						break;
					case 18:
						cout<<"dieciocho";
						i++;
						break;
					case 19:
						cout<<"diecinueve";
						i++;
						break;
					case 20:
					 	cout<<"veinte";
					 	i++;
					 	break;
					case 21:
					 	cout<<"veintiuno";
					 	i++;
					 	break;
					case 22:
					 	cout<<"veintidos";
					 	i++;
					 	break;
					case 23:
					 	cout<<"veintitres";
					 	i++;
					 	break;
					case 24:
					 	cout<<"veinticuatro";
					 	i++;
					 	break;
					case 25:
					 	cout<<"veinticinco";
					 	i++;
					 	break;
					case 26:
					 	cout<<"veintiseis";
					 	i++;
					 	break;
					case 27:
					 	cout<<"veintisiete";
					 	i++;
					 	break;
					case 28:
					 	cout<<"veintiocho";
					 	i++;
					 	break;
					case 29:
					 	cout<<"veintinueve";
					 	i++;
					 	break;
					case 30:
					 	cout<<"treinta ";
					 	i++;
					 	break;
					case 40:
					 	cout<<"cuarenta ";
					 	i++;
					 	break;
					case 50:
					 	cout<<"cincuenta ";
					 	i++;
					 	break;
					case 60:
					 	cout<<"sesenta ";
					 	i++;
					 	break;
					case 70:
					 	cout<<"setenta ";
					 	i++;
					 	break;
					case 80:
					 	cout<<"ochenta ";
					 	i++;
					 	break;
					case 90:
					 	cout<<"noventa ";
					 	i++;
					 	break;
				}
				
				// Si es que no entre en ningun caso especial, continuo con la impresión normal de un número compuesto
				if(i==0){
					// Dejo a la decena sola, pues ya no hay casos especiales. Y solo necesito su nombre como decenas de diez
					d-= u;
					
					// Imprimo la decena correspondiente
					switch(d){
						case 30:
						 	cout<<"treinta y ";
						 	break;
						case 40:
						 	cout<<"cuarenta y ";
						 	break;
						case 50:
						 	cout<<"cincuenta y ";
						 	break;
						case 60:
						 	cout<<"sesenta y ";
						 	break;
						case 70:
						 	cout<<"setenta y ";
						 	break;
						case 80:
						 	cout<<"ochenta y ";
						 	break;
						case 90:
						 	cout<<"noventa y ";
						 	break;
						}
					// Y finalmene imprimo la unidad del n ingresado
					switch(u){
						case 0:
						 	break;
					 	case 1:
						 	cout<<"uno"<<endl;
						 	break;
						case 2:
						 	cout<<"dos"<<endl;
						 	break;
						case 3:
						 	cout<<"tres"<<endl;
						 	break;
						case 4:
						 	cout<<"cuatro"<<endl;
						 	break;
						case 5:
						 	cout<<"cinco"<<endl;
						 	break;
						case 6:
						 	cout<<"seis"<<endl;
						 	break;
						case 7:
						 	cout<<"siete"<<endl;
						 	break;
						case 8:
						 	cout<<"ocho"<<endl;
						 	break;
						case 9:
						 	cout<<"nueve"<<endl;
						 	break;
						default:
							cout<<"Algo fallo"<<endl;
					}	
				}
			}
			//Ciclo para volver al menu principal dejar de ejecutar el programa
			do{
				cout<<endl;
				cout<<"1. Volver al menú principal"<<endl;
				cout<<"2. Cerrar el programa"<<endl;
				cout<<endl;
				cout<<"Elija una opoción: ";cin>>choice;
				cout<<endl;
				if((choice>2)||(choice<=0))
					cout<<"Ingrese una opción valida por favor"<<endl;
			}while((choice>2)||(choice<=0));
			break;
			
		case 2:
			cout<<"2) Horóscopo Chino"<<endl;
			
			// Ciclo para que el usuario ingrese un número valido
			do{
				cout<<endl;
				cout<<"Ingrese el año de su nacimiento: ";cin>>n;
				cout<<endl;
				if(n<=0)
					cout<<"Ingrese un año valido por favor"<<endl;
			}while(n<=0);
			
			// Se saca el modulo de 12 del n ingresado, el cual nos da un número entre 0 y 11. Lo cual nosw dice cual signo es básicamente.
			mod_n = n%12;
			
			cout<<"Nacimiento: "<<n<<endl;
			
			// Imprimo los signos correspondientes. Iniciando en el Mono porque es donde se reinicia la serie de números (con incremento 12)
			switch(mod_n){
				case 0:
					cout<<"Signo del horóscopo chino: Mono"<<endl;
					break;
				case 1:
					cout<<"Signo del horóscopo chino: Gallo"<<endl;
					break;
				case 2:
					cout<<"Signo del horóscopo chino: Perro"<<endl;
					break;
				case 3:
					cout<<"Signo del horóscopo chino: Cerdo"<<endl;
					break;
				case 4:
					cout<<"Signo del horóscopo chino: Rata"<<endl;
					break;
				case 5:
					cout<<"Signo del horóscopo chino: Buey"<<endl;
					break;
				case 6:
					cout<<"Signo del horóscopo chino: Tigre"<<endl;
					break;
				case 7:
					cout<<"Signo del horóscopo chino: Conejo"<<endl;
					break;
				case 8:
					cout<<"Signo del horóscopo chino: Dragón"<<endl;
					break;
				case 9:
					cout<<"Signo del horóscopo chino: Serpiente"<<endl;
					break;
				case 10:
					cout<<"Signo del horóscopo chino: Caballo"<<endl;
					break;
				case 11:
					cout<<"Signo del horóscopo chino: Cabra"<<endl;
					break;
			}
		
			//Ciclo para volver al menu principal dejar de ejecutar el programa
			do{
				cout<<endl;
				cout<<"1. Volver al menú principal"<<endl;
				cout<<"2. Cerrar el programa"<<endl;
				cout<<endl;
				cout<<"Elija una opoción: ";cin>>choice;
				cout<<endl;
				if((choice>2)||(choice<=0))
					cout<<"Ingrese una opción valida por favor"<<endl;
			}while((choice>2)||(choice<=0));
			break;
			
		default:
			cout<<"ERROR \n Vuelve a ejecutarme"<<endl;	
			cout<<""<<endl;	
			break;
		}
	}while(choice<2);
	return 0;
}
