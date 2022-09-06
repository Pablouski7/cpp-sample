// Deber 10
// Autor: Pablo Herrera
// Fecha: 28 de abril de 2022
// Descripción: Dibuja digitos en consola

#include <stdlib.h>
#include <iostream>
#include <iomanip>

using namespace std;

// Función que cálcula el promedio de los números de un array
double promedio(double array[],int length){
	double suma = 0;
	for(int i = 0; i<length ; i++){
		suma += array[i];
	}
	return suma/length;
}

// Función que devuelve la nota de acuerdo al promedio
char nota(int n){
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

// Función que copia los elementos de un array a otro
void copiar_array(double array_original[], double array_copia[], int length){
	for(int i = 0; i<length; i++)
		array_copia[i] = array_original[i];
}

int main() {
	setlocale(LC_ALL, "");	
	int pruebas_tomadas = 0;
	double nota_ingresar = 0;
	
	cout<<"Pruebas tomadas: ";cin>>pruebas_tomadas;
	
	const int n_elemnetos = pruebas_tomadas;
	double notas[n_elemnetos] = {0};
	double notas_modificadas[n_elemnetos] = {0};
	
	// Ciclo que rellena el arreglo con los datos que ingresa el usuario
	for(int j = 0; j<n_elemnetos; j++){
		// Ciclo do while que comprueba que los datos ingresados esten dentro del rango deseado
		do{
			cout<<"Prueba "<<j+1<<": ";cin>>nota_ingresar;
			notas[j] = nota_ingresar;
			if((nota_ingresar<0)||(nota_ingresar>10))
				cout<<"La nota debe de estar entre 0 y 10"<<endl;
		}while((nota_ingresar<0)||(nota_ingresar>10));
	}
	
	// Cálculo del promedio de las notas originales. Y generación de una copia del array de las notas originales
	double promedio_antes = promedio(notas,n_elemnetos);
	copiar_array(notas,notas_modificadas,n_elemnetos);
	
	// Ciclo for que determina cual es el n menor y donde esta dentro del array
	int menor = notas_modificadas[0], pos_menor = 0;
	for(int i = 1; i<n_elemnetos ; i++){
		if(notas_modificadas[i]<menor){
			menor = notas_modificadas[i];	
			pos_menor = i;		
		}
	}
	// Reemplazo de la nota menor
	notas_modificadas[pos_menor] = notas_modificadas[n_elemnetos-1];
	
	// Cálculo de las notas modificadas
	double promedio_despues = promedio(notas_modificadas,n_elemnetos);
	
	// Print de los datos en consola. Dependiendo de si benefician al alumno o no
	printf("\nNotas: %i\n\n",pruebas_tomadas);
	if(promedio_despues>promedio_antes){
		printf("Informe Inicial \t Informe Ajustado\n");
		for(int j = 0; j<n_elemnetos-1; j++)
			printf("Prueba %i: %.2f  \t Prueba %i: %.2f\n",j+1,notas[j],j+1,notas_modificadas[j]);
		printf("Final  %i: %.2f  \t Final  %i: %.2f\n",n_elemnetos,notas[n_elemnetos-1],n_elemnetos,notas_modificadas[n_elemnetos-1]);
		printf("Promedio: %.2f  \t Promedio: %.2f\n",promedio_antes,promedio_despues);
		printf("Nota: %c        \t\t Nota %c\n", nota(promedio_antes),nota(promedio_despues));
	}else{
		printf("Informe Inicial\n");
		for(int j = 0; j<n_elemnetos-1; j++)
			printf("Prueba %i: %.2f\n",j+1,notas[j]);
		printf("Final  %i: %.2f\n",n_elemnetos,notas[n_elemnetos-1]);
		printf("Promedio: %.2f\n",promedio_antes);
		printf("Nota: %c\n", nota(promedio_antes));
	}
	cout<<endl;
	
	system("pause");
	return 0;
}
