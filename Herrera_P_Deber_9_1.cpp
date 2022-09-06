// Deber 9
// Autor: Pablo Herrera
// Fecha: 12 de abril de 2022
// Descripción: Dibuja digitos en consola

#include <iostream>
#include <iomanip>

using namespace std;

int digitos_de_un_num(int numero){ //Función que cuenta el número de digitos de un entero
	int a = 0, incremento = 10;
	for(; numero!=0 ; a++){
		numero -= (numero%incremento);
		incremento *= 10;
	}
	return a;
}

int iesimo_digito(int numero, int i){// Función que retorna el i-esimo digito del n ingresado
	int digito = 0, decena = 10, n_digitos = digitos_de_un_num(numero);
	if(i<=n_digitos){
		for(int j = 0; j<n_digitos ; j++){
			decena *=10;
		}
		for(int k = 0; k<=i ; k++){
			decena /= 10;
			if(k==i){
				digito = numero%decena;
			}
		}
		if(digito<(decena/10))
			return 0;
		else{
			decena/=10;
			int cnt = 0;
			for(;digito>=decena;cnt++){
				digito -= decena;
			}
			digito = cnt;
			return digito;
		}	
	} else 
		return -1;
}

void dibujar_num(int n){//Función que dibuja números del 0 al 9
	switch(n){
		case 0:
			cout<<endl;
			cout<<" .oOOo. "<<endl;
			cout<<".O    O."<<endl;
			cout<<".O    O."<<endl;
			cout<<".O    O."<<endl;
			cout<<".O    O."<<endl;
			cout<<".O    O."<<endl;
			cout<<" 'oOOo' "<<endl;
			break;
		case 1:
			cout<<endl;
			cout<<"     .O."<<endl;
			cout<<"    O'O."<<endl;
			cout<<"   O' O."<<endl;
			cout<<"      O."<<endl;
			cout<<"      O."<<endl;
			cout<<"      O."<<endl;
			cout<<"      O."<<endl;
			break;
		case 2:
			cout<<endl;
			cout<<" .oOOo. "<<endl;
			cout<<"      O."<<endl;
			cout<<"      O."<<endl;
			cout<<" .oOOo' "<<endl;
			cout<<".O      "<<endl;
			cout<<".O      "<<endl;
			cout<<" 'oOOo' "<<endl;
			break;
		case 3:
			cout<<endl;
			cout<<" .oOOo. "<<endl;
			cout<<"      O."<<endl;
			cout<<"      O."<<endl;
			cout<<" .oOOo' "<<endl;
			cout<<"      O."<<endl;
			cout<<"      O."<<endl;
			cout<<" 'oOOo' "<<endl;
			break;
		case 4:
			cout<<endl;
			cout<<".O    O."<<endl;
			cout<<".O    O."<<endl;
			cout<<".O    O."<<endl;
			cout<<" 'oOOo' "<<endl;
			cout<<"      O."<<endl;
			cout<<"      O."<<endl;
			cout<<"      O."<<endl;
			break;
		case 5:
			cout<<endl;
			cout<<" .oOOO. "<<endl;
			cout<<".O      "<<endl;
			cout<<".O      "<<endl;
			cout<<".'oOOo. "<<endl;
			cout<<"      O."<<endl;
			cout<<"'O    O."<<endl;
			cout<<" 'oOOo' "<<endl;
			break;
		case 6:
			cout<<endl;
			cout<<" .oOOO. "<<endl;
			cout<<".O      "<<endl;
			cout<<".O      "<<endl;
			cout<<".'oOOo. "<<endl;
			cout<<"'O    O."<<endl;
			cout<<"'O    O."<<endl;
			cout<<" 'oOOo' "<<endl;
			break;
		case 7:
			cout<<endl;
			cout<<".OOOOo."<<endl;
			cout<<"     O."<<endl;
			cout<<"     O."<<endl;
			cout<<"     O."<<endl;
			cout<<"     O."<<endl;
			cout<<"     O."<<endl;
			cout<<"     O."<<endl;
			cout<<" "<<endl;
			break;
		case 8:
			cout<<endl;
			cout<<" .oOOo. "<<endl;
			cout<<".O    O."<<endl;
			cout<<".O    O."<<endl;
			cout<<" 'oOOo' "<<endl;
			cout<<".O    O."<<endl;
			cout<<".O    O."<<endl;
			cout<<" 'oOOo' "<<endl;
			break;
		case 9:
			cout<<endl;
			cout<<" .oOOo. "<<endl;
			cout<<".O    O."<<endl;
			cout<<".O    O."<<endl;
			cout<<" 'oOOo' "<<endl;
			cout<<"      O."<<endl;
			cout<<".O    O."<<endl;
			cout<<" 'oOOo' "<<endl;
			break;
	}	
}


int main() {
	setlocale(LC_ALL, "");	
	int n;
	cout<<"n: ";cin>>n;
	int digitos_totales = digitos_de_un_num(n);
	int n_a_dibujar;
	// Ciclo que recorre todos los digitos del n ingresado y los dibuja en consola
	for(int cnt = 0; cnt<digitos_totales; cnt++){
		n_a_dibujar = iesimo_digito(n,cnt);
		dibujar_num(n_a_dibujar);
	}
	system("pause");
	return 0;
}
