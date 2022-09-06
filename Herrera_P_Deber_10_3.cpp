// Deber 10
// Autor: Pablo Herrera
// Fecha: 28 de abril de 2022
// Descripción: Dibuja digitos en consola

#include <stdlib.h>
#include <iostream>
#include <iomanip>

using namespace std;

// Función para mostrar arreglos en consola
void mostrar_arreglo(int array[],int length, bool fila_o_columna){
	if(fila_o_columna)
		for(int g = 0; g<length; g++){
			if(g==length-1)
				cout<<array[g]<<endl;
			else
				cout<<array[g]<<",";
		}
			
	else
		for(int g = 0; g<length; g++)
			cout<<array[g]<<endl;
	cout<<endl;
}

// Función recursiva que mueve los elementos de un array hacia la derecha
void mover_elementos_arreglo(int array[],int n_elementos,int n_a_ingresar, int pos_inicio){
	int auxiliar = 0;
	int i = pos_inicio;
	auxiliar = array[i];
	array[i] = n_a_ingresar;
	if(pos_inicio==n_elementos)
		return;
	mover_elementos_arreglo(array,n_elementos,auxiliar,i+1);
}

int main() {
	setlocale(LC_ALL, "");	
	int datos[20] = {0};
	int n_ingresado = 0, pos_ingresada = 0;
	while(true){
		// Serie de ciclos do while que se aseguran que los datos ingresados sean correctos. Además de verificar cuando salir del programa
		do{
			cout<<"Ingrese un número: ";cin>>n_ingresado;
			if((n_ingresado<=0)&&(n_ingresado!=-99))
				cout<<"Solo se permiten números enteros mayores a 0"<<endl;
			cout<<endl;
		}while((n_ingresado<=0)&&(n_ingresado!=-99));
		if(n_ingresado==-99)
				break;
		do{
			cout<<"Ingrese la posición: ";cin>>pos_ingresada;
			if((pos_ingresada<0)||(pos_ingresada>19))
				cout<<"Solo se permiten números entre 0 y 19"<<endl;
			cout<<endl;
		}while((pos_ingresada<0)||(pos_ingresada>19));
		
		// Ingreso de datos en el array
		if(datos[pos_ingresada]==0)
			datos[pos_ingresada] = n_ingresado;
		else
			mover_elementos_arreglo(datos,20,n_ingresado,pos_ingresada);
		
		
		// Muestra en consola la evolución del array
		mostrar_arreglo(datos, 20, 1);
	}
	system("pause");
	return 0;
}
