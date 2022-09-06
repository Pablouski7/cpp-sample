// Autor: Pablo Herrera
// Fecha: 8 de marzo de 2022
// Descripción: Deber 4: Programa que corre los 6 ejercicios planteados.
//Versión final
#include <iostream>
#include <iomanip>
#include <cmath>
#include <math.h>
using namespace std;

//Función para cálcular la hipotenusa
float calc_hipotenusa(float cateto1, float cateto2){
	float suma = 0;
	cateto1 = pow(cateto1,2);
	cateto2 = pow(cateto2,2);
	suma = cateto1 + cateto2;
	return pow(suma,0.5);
}

int main() {
	setlocale(LC_ALL, "");
	//Elección del programa
	int choise = 0;
	cout<<"Programas:\n 1.Identificador de triángulos\n 2.Cálculadora de descuentos\n 3.Aumentador de horas\n 4.Validador Rummy\n 5.Calculadora retiro de cartas en 40\n 6.Partido LDU vs Fluminisense\n"<<endl;
	cout<<"Elija un programa: ";cin>>choise;
	cout<<""<<endl;
	
	//Variables problema 1
	float lado_a = 0;
	float lado_b = 0;
	float lado_c = 0;
	float lado_mayor = 0;
	float hipotenusa = 0;
	
	//Variables problema 2
	float precio1 = 0;
	float precio2 = 0;
	float precio3 = 0;
	float precio_descontado_a = 0;
	float precio_descontado_b = 0;
	float total = 0;
	float descuento = 0;
	
	//Variables problema 3
	int hora = 0;
	int minuto = 0;
	int segundo = 0;
	int hora_aumentada = 0;
	int minuto_aumentado = 0;
	int segundo_aumentado = 0;
	
	
	//Variables problema 4
	int carta1 = 0;
	int carta2 = 0;
	int carta3 = 0;
	int primera = 0;
	int segunda = 0;
	int tercera = 0;
	int primera_aumentada = 0;
	int segunda_aumentada = 0;
	
	//Variables problema 5
	int cartaA = 0;
	int cartaB = 0;
	int cartaC = 0;
	int carta_lanzada = 0;
	int cartas_a_retirar = 0;
	int carta_mayor = 0;
	int carta_mediana = 0;
	int carta_menor = 0;
	int carta_menor_aumentada = 0;
	int carta_mediana_aumentada = 0;
	int carta_lanzada_aumentada = 0;
	int suma_posible1 = 0;
	int suma_posible2 = 0;
	int suma_posible3 = 0;
	int suma_posible4 = 0;
	
	//Variables problema 6
	int goles_LDU_brasil = 0;
	int goles_Flu_brasil = 0;
	int goles_LDU_quito = 0;
	int goles_Flu_quito = 0;
	int LDU_puntos_logrados = 0;
	int LDU_goles_penales = 0;
	int LDU_goles_favor = 0;
	int LDU_goles_contra = 0;
	int LDU_gol_diferencia = 0;
	int LDU_goles_visitante = 0;
	int Flu_puntos_logrados = 0;
	int Flu_goles_penales = 0;
	int Flu_goles_favor = 0;
	int Flu_goles_contra = 0;
	int Flu_gol_diferencia = 0;
	int Flu_goles_visitante = 0;			
	
	//Ejecución dle programa elegido
	switch(choise){
		case 1://Identificador de triángulos
			cout<<"Ingrese la longitud de los lados de un triángulo: "<<endl;
			cout<<"Lado a: ";cin>>lado_a;
			cout<<"Lado b: ";cin>>lado_b;
			cout<<"Lado c: ";cin>>lado_c;
			cout<<""<<endl;
			
			//Validación de si los datos ingresados formano o no un triángulo. Si lo hacen, el programa se ejecuta, sino no.
			if((lado_a<lado_b+lado_c)&&(lado_b<lado_a+lado_c)&&(lado_c<lado_a+lado_b)){
				cout<<" a. Los datos ingresados si corresponden con un triángulo real\n"<<endl;
				//Validación de triángulos equilateros, que por definición no pueden ser triángulos rectángulos
				if((lado_a==lado_b)&&(lado_b==lado_c))cout<<" b. El triángulo ingresado es un Equilatero \n\n c. No es un triángulo rectángulo\n"<<endl;
				//Validación de triángulos isóceles, que por definición no pueden ser triángulos rectángulos
				else if((lado_a==lado_b)||(lado_b==lado_c)||(lado_c==lado_a))cout<<" b. El triángulo ingresado es un Isóceles \n\n c. No es un triángulo rectángulo\n"<<endl;
				//Validación de triángulos escalenos
				else if((lado_a!=lado_b)&&(lado_b!=lado_c)&&(lado_c!=lado_a)){
					cout<<" b. El triángulo ingresado es un Escaleno"<<endl;
					//Serie de validaciones que comparan la hipotenusa de los catetos, con la hipotenusa ingresada por el usuario. Para validar si es o no u ntriángulo rectángulo
					if((lado_a>lado_b)&&(lado_a>lado_c)){
						lado_mayor=lado_a;
						hipotenusa = calc_hipotenusa(lado_b,lado_c);
						if(hipotenusa==lado_mayor)cout<<" c. Si es un triángulo rectángulo\n"<<endl;
						else cout<<"Algo fallo"<<endl; 
						
					}
					else if((lado_b>lado_a)&&(lado_b>lado_c)){
						lado_mayor=lado_b;
						hipotenusa = calc_hipotenusa(lado_a,lado_c);
						if(hipotenusa==lado_mayor)cout<<" c. Si es un triángulo rectángulo\n"<<endl;
						else cout<<"Algo fallo"<<endl; 
						
					}
					else if((lado_c>lado_a)&&(lado_c>lado_b)){
						lado_mayor=lado_c;
						hipotenusa = calc_hipotenusa(lado_a,lado_b);
						if(hipotenusa==lado_mayor)cout<<" c. Si es un triángulo rectángulo\n"<<endl;
						else cout<<"Algo fallo"<<endl; 
						
					}else cout<<"Algo fallo"<<endl;
					
				}else cout<<"Algo fallo"<<endl;
			}
			else cout<<"Los datos ingresados no corresponden con un triángulo real"<<endl;
			break;
			
		case 2://Cálculadora de descuentos 
			cout<<"Ingrese el precio de las tres prendas que va a comprar: "<<endl;
			cout<<"Prenda 1: ";cin>>precio1;
			cout<<"Prenda 2: ";cin>>precio2;
			cout<<"Prenda 3: ";cin>>precio3;
			cout<<""<<endl;
			
			//Serie de validaciones que cálculan los resultados para cada posible caso (cuando cada precio es mayor). Es decir que identifica cual es el precio mayor para proceder con los descuentos respectivos
			if((precio1>precio2)&&(precio1>precio3)){
				precio_descontado_a = precio2*0.5;
				precio_descontado_b = precio3*0.5;
				descuento = (precio2-precio_descontado_a)+(precio3-precio_descontado_b);
				total = precio1+precio_descontado_a+precio_descontado_b;
				cout<<"Precio Original:"<<endl;
				cout<<"1: $"<<precio1<<endl;
				cout<<"2: $"<<precio2<<endl;
				cout<<"3: $"<<precio3<<endl;
				cout<<""<<endl;
				
				cout<<"Precio a Pagar:"<<endl;
				cout<<"1: $"<<precio1<<endl;
				cout<<"2: $"<<precio_descontado_a<<endl;
				cout<<"3: $"<<precio_descontado_b<<endl;
				cout<<"Total: $"<<total<<endl;
				cout<<"Descuento: $"<<descuento<<endl;
				cout<<""<<endl;
		
			}
			else if((precio2>precio1)&&(precio2>precio3)){
				precio_descontado_a = precio1*0.5;
				precio_descontado_b = precio3*0.5;
				descuento = (precio1-precio_descontado_a)+(precio3-precio_descontado_b);
				total = precio2+precio_descontado_a+precio_descontado_b;
				cout<<"Precio Original:"<<endl;
				cout<<"1: $"<<precio1<<endl;
				cout<<"2: $"<<precio2<<endl;
				cout<<"3: $"<<precio3<<endl;
				cout<<""<<endl;
				
				cout<<"Precio a Pagar:"<<endl;
				cout<<"1: $"<<precio_descontado_a<<endl;
				cout<<"2: $"<<precio2<<endl;
				cout<<"3: $"<<precio_descontado_b<<endl;
				cout<<"Total: $"<<total<<endl;
				cout<<"Descuento: $"<<descuento<<endl;
				cout<<""<<endl;
				
			}
			else if((precio3>precio1)&&(precio3>precio2)){
				precio_descontado_a = precio2*0.5;
				precio_descontado_b = precio1*0.5;
				descuento = (precio2-precio_descontado_a)+(precio1-precio_descontado_b);
				total = precio3+precio_descontado_a+precio_descontado_b;
				cout<<"Precio Original:"<<endl;
				cout<<"1: $"<<precio1<<endl;
				cout<<"2: $"<<precio2<<endl;
				cout<<"3: $"<<precio3<<endl;
				cout<<""<<endl;
				
				cout<<"Precio a Pagar:"<<endl;
				cout<<"1: $"<<precio_descontado_b<<endl;
				cout<<"2: $"<<precio_descontado_a<<endl;
				cout<<"3: $"<<precio3<<endl;
				cout<<"Total: $"<<total<<endl;
				cout<<"Descuento: $"<<descuento<<endl;
				cout<<""<<endl;
				
			}else cout<<"Algo fallo"<<endl;
			break;
			
		case 3://Aumentador de horas
			cout<<"Ingrese una hora: "<<endl;
			cout<<"Hora: ";cin>>hora;
			cout<<"Minuto: ";cin>>minuto;
			cout<<"Segundo: ";cin>>segundo;
			cout<<""<<endl;
			
			//Validación de los datos ingresados, para saber si es o no una hora real.
			if((hora>=0&&hora<=23)&&(minuto>=0&&minuto<=59)&&(segundo>=0&&segundo<=59)){
				hora_aumentada = hora + 1;
				minuto_aumentado = minuto + 1;
				segundo_aumentado = segundo + 1;
				
				cout<<"Hora ingresada: "<<hora<<":"<<minuto<<":"<<segundo<<endl;
				
				//Serie de condicionales para saber que cambios hay que hacer en cada caso(como pasar un 23+1 a 00, o 59+1 a (hora+1):00).
				if(hora_aumentada==24) cout<<"a) "<<"00:"<<minuto<<":"<<segundo<<endl;
				else cout<<"a) "<<hora_aumentada<<":"<<minuto<<":"<<segundo<<endl;
				
				if(minuto_aumentado==60){
					if(hora_aumentada==24)	cout<<"b) "<<"00:00"<<":"<<segundo<<endl;
					else cout<<"b) "<<hora_aumentada<<":00:"<<segundo<<endl;				
				} else	cout<<"b) "<<hora<<":"<<minuto_aumentado<<":"<<segundo<<endl;
				
				if(segundo_aumentado==60){
					if(minuto_aumentado==60){
						if(hora_aumentada==24)	cout<<"c) "<<"00:00:00"<<endl;
						else cout<<"c) "<<hora_aumentada<<":"<<"00:00"<<endl;				
					} else	cout<<"c) "<<hora<<":"<<minuto_aumentado<<":00"<<endl;
				} else cout<<"c) "<<hora<<":"<<minuto<<":"<<segundo_aumentado<<endl;
				cout<<"Funco"<<endl;

			}else cout<<"Los datos ingresados no correspenden con una hora real"<<endl;
			
			break;
			
		case 4://Validador Rummy 
			cout<<"Ingrese tres cartas entre 2 y 10: "<<endl;
			cout<<"Carta 1: ";cin>>carta1;
			cout<<"Carta 2: ";cin>>carta2;
			cout<<"Carta 3: ";cin>>carta3;
			cout<<""<<endl;
			
			//Validación de los datos ingresados. Si las cartas estan en el rango solicitado o no
			if((carta1>=2&&carta1<=10)&&(carta2>=2&&carta2<=10)&&(carta3>=2&&carta3<=10)){
				//Validación del primer caso, cuando todas las cartas son iguales. Trio
				if((carta1==carta2)&&(carta1==carta3)) cout<<"Las cartas ingresadas forman un trio"<<endl;
				else{
					//Segundo casoL escalera
					//Serie de condicionales para ordenar las cartas ingresadas
					if((carta1>carta2)&&(carta1>carta3)){
						tercera = carta1;
						if(carta2>carta3){
							segunda = carta2;
							primera = carta3;
						}else{
							segunda = carta3;
							primera = carta2;
						}
					} else if((carta2>carta1)&&(carta2>carta3)){
						tercera = carta2;
						if(carta1>carta3){
							segunda = carta1;
							primera = carta3;
						}else{
							segunda = carta3;
							primera = carta1;
						}
					} else if((carta3>carta2)&&(carta3>carta1)){
						tercera = carta3;
						if(carta2>carta1){
							segunda = carta2;
							primera = carta1;
						}else{
							segunda = carta1;
							primera = carta2;
						}
					} else {
						primera = carta1;
						segunda = carta2;
						tercera = carta3;
					}
					 
					primera_aumentada = primera+1;
					segunda_aumentada = segunda+1;
					
					//Validación de si hay o no una escalera entre las cartas ingresadas
					if((primera_aumentada==segunda)&&(segunda_aumentada==tercera)) cout<<"Las cartas ingresadas forman una escalera"<<endl;
					else cout<<"Las cartas ingresadas no forman ni un trio ni una escalera"<<endl;
				}
			}else{
				//Serie de condicionales que identifican cual input fue el incorrecto, y se lo notifican al usuario				
				if ((carta1<2||carta1>10)&&(carta2<2||carta2>10)&&(carta3<2||carta3>10)){
					cout<<"Ninguna de las cartas ingresadas esta dentro del rango aceptado"<<endl;
					break;
				} 
				if(!(carta1>=2&&carta1<=10)) cout<<"La carta 1 no esta dentro del rango de cartas aceptadas "<<endl;
				if (!(carta2>=2&&carta2<=10)) cout<<"La carta 2 no esta dentro del rango de cartas aceptadas "<<endl;
				if (!(carta3>=2&&carta3<=10)) cout<<"La carta 3 no esta dentro del rango de cartas aceptadas "<<endl;
			}
			break;
			
		case 5://Calculadora retiro de cartas en 40 
			cout<<"Ingrese las tres cartas que están en la mesa y la carta a lanzar: "<<endl;
			cout<<"Carta 1: ";cin>>cartaA;
			cout<<"Carta 2: ";cin>>cartaB;
			cout<<"Carta 3: ";cin>>cartaC;
			cout<<"Carta a lanzar: ";cin>>carta_lanzada;
			cout<<""<<endl;
			
			//Validación de los datos ingresados (que esten dentro del rango permitido)
			if((cartaA>=1&&cartaA<=7)&&(cartaB>=1&&cartaB<=7)&&(cartaC>=1&&cartaC<=7)&&(carta_lanzada>=1&&carta_lanzada<=7)){
				//Validación de la no repetición de cartas en la mesa. Para proceder con o no con el programa
				if((cartaA==cartaB)||(cartaA==cartaC)||(cartaC==cartaB)) cout<<"No pueden existir cartas iguales en la mesa"<<endl;
				else{
					//Serie de condicionales para ordenar las cartas en mesa ingresadas
					if((cartaA>cartaB)&&(cartaA>cartaC)){
						carta_mayor = cartaA;
						if(cartaB>cartaC){
							carta_mediana = cartaB;
							carta_menor = cartaC;
						}else{
							carta_mediana = cartaC;
							carta_menor = cartaB;
						}
					} else if((cartaB>cartaA)&&(cartaB>cartaC)){
						carta_mayor = cartaB;
						if(cartaA>cartaC){
							carta_mediana = cartaA;
							carta_menor = cartaC;
						}else{
							carta_mediana = cartaC;
							carta_menor = cartaA;
						}
					} else if((cartaC>cartaB)&&(cartaC>cartaA)){
						carta_mayor = cartaC;
						if(cartaB>cartaA){
							carta_mediana = cartaB;
							carta_menor = cartaA;
						}else{
							carta_mediana = cartaA;
							carta_menor = cartaB;
						}
					} else {
						carta_menor = cartaA;
						carta_mediana = cartaB;
						carta_mayor = cartaC;
					}
					
					carta_menor_aumentada = carta_menor + 1;
					carta_mediana_aumentada = carta_mediana + 1;
					
					//Validación de los casos en escalera y sus respectivos subcasos
					if((carta_lanzada==carta_menor)){
						cartas_a_retirar = 1;
						if((carta_menor_aumentada==carta_mediana)&&(carta_mediana_aumentada==carta_mayor)) cartas_a_retirar = cartas_a_retirar + 2;
						else if (carta_menor_aumentada==carta_mediana) cartas_a_retirar++;
						//Validación de si las cartas a retirar son el número más alto, es decir la mejor posibilidad. Con el segundo gran caso: suma de cartas en mesa
						if(cartas_a_retirar==1){
							suma_posible1 = carta_menor + carta_mediana + carta_mayor;
							suma_posible2 = carta_menor + carta_mediana;
							suma_posible3 = carta_mediana + carta_mayor;
							suma_posible4 = carta_menor + carta_mayor;
							carta_lanzada_aumentada = carta_lanzada + 1;
							
							if (carta_lanzada==suma_posible1) cout<<"Las cartas que se puede llevar son 3"<<endl;
							else if (carta_lanzada==suma_posible2){
								if(carta_lanzada_aumentada==carta_mayor) cout<<"Las cartas que se puede llevar son 3"<<endl;
								else cout<<"Las cartas que se puede llevar son 2"<<endl;
							}
							else if (carta_lanzada==suma_posible3) cout<<"Las cartas que se puede llevar son 2"<<endl;
							else if (carta_lanzada==suma_posible4) cout<<"Las cartas que se puede llevar son 2"<<endl;
							else cout<<"Las cartas que se puede llevar son 1"<<endl;
						}cout<<"Las cartas que se puede llevar son "<<cartas_a_retirar<<endl;
						
					} else if(carta_lanzada==carta_mediana){
						cartas_a_retirar = 1;
						if (carta_mediana_aumentada==carta_mayor) cartas_a_retirar++;
						//Validación de si las cartas a retirar son el número más alto, es decir la mejor posibilidad. Con el segundo gran caso: suma de cartas en mesa
						if(cartas_a_retirar==1){
							suma_posible1 = carta_menor + carta_mediana + carta_mayor;
							suma_posible2 = carta_menor + carta_mediana;
							suma_posible3 = carta_mediana + carta_mayor;
							suma_posible4 = carta_menor + carta_mayor;
							carta_lanzada_aumentada = carta_lanzada + 1;
							
							if (carta_lanzada==suma_posible1) cout<<"Las cartas que se puede llevar son 3"<<endl;
							else if (carta_lanzada==suma_posible2){
								if(carta_lanzada_aumentada==carta_mayor) cout<<"Las cartas que se puede llevar son 3"<<endl;
								else cout<<"Las cartas que se puede llevar son 2"<<endl;
							}
							else if (carta_lanzada==suma_posible3) cout<<"Las cartas que se puede llevar son 2"<<endl;
							else if (carta_lanzada==suma_posible4) cout<<"Las cartas que se puede llevar son 2"<<endl;
							else cout<<"Las cartas que se puede llevar son 1"<<endl;
						}cout<<"Las cartas que se puede llevar son "<<cartas_a_retirar<<endl;
						
					} else if(carta_lanzada==carta_mayor) {
						cartas_a_retirar = 1;
						//Validación de si las cartas a retirar son el número más alto, es decir la mejor posibilidad. Con el segundo gran caso: suma de cartas en mesa
						if(cartas_a_retirar==1){
							suma_posible1 = carta_menor + carta_mediana + carta_mayor;
							suma_posible2 = carta_menor + carta_mediana;
							suma_posible3 = carta_mediana + carta_mayor;
							suma_posible4 = carta_menor + carta_mayor;
							carta_lanzada_aumentada = carta_lanzada + 1;
							
							if (carta_lanzada==suma_posible1) cout<<"Las cartas que se puede llevar son 3"<<endl;
							else if (carta_lanzada==suma_posible2){
								if(carta_lanzada_aumentada==carta_mayor) cout<<"Las cartas que se puede llevar son 3"<<endl;
								else cout<<"Las cartas que se puede llevar son 2"<<endl;
							}
							else if (carta_lanzada==suma_posible3) cout<<"Las cartas que se puede llevar son 2"<<endl;
							else if (carta_lanzada==suma_posible4) cout<<"Las cartas que se puede llevar son 2"<<endl;
							else cout<<"Las cartas que se puede llevar son 1"<<endl;
						}else cout<<"Las cartas que se puede llevar son 1"<<endl;

					} else {
						//Casos posibles en el segundo caso: suma de cartas en mesa
						suma_posible1 = carta_menor + carta_mediana + carta_mayor;
						suma_posible2 = carta_menor + carta_mediana;
						suma_posible3 = carta_mediana + carta_mayor;
						suma_posible4 = carta_menor + carta_mayor;
						carta_lanzada_aumentada = carta_lanzada + 1;
						
						//Validación de cada subcaso del sefgundo caso
						if (carta_lanzada==suma_posible1) cout<<"Las cartas que se puede llevar son 3"<<endl;
						else if (carta_lanzada==suma_posible2){
							if(carta_lanzada_aumentada==carta_mayor) cout<<"Las cartas que se puede llevar son 3"<<endl;
							else cout<<"Las cartas que se puede llevar son 2"<<endl;
						}
						else if (carta_lanzada==suma_posible3) cout<<"Las cartas que se puede llevar son 2"<<endl;
						else if (carta_lanzada==suma_posible4) cout<<"Las cartas que se puede llevar son 2"<<endl;
						else cout<<"Las cartas que se puede llevar son 0"<<endl;
					}
				}
			} else {
				//Serie de condicionales que identifican cual input fue el incorrecto, y se lo notifican al usuario		
				if ((cartaA<1||cartaA>7)&&(cartaB<1||cartaB>7)&&(cartaC<1||cartaC>7)&&(carta_lanzada<1||carta_lanzada>7)){
					cout<<"Ninguna de las cartas ingresadas esta dentro del rango aceptado"<<endl;
					break;
				} 
				if(!(cartaA>=1&&cartaA<=7)) cout<<"La carta 1 no esta dentro del rango de cartas aceptadas "<<endl;
				if (!(cartaB>=1&&cartaB<=7)) cout<<"La carta 2 no esta dentro del rango de cartas aceptadas "<<endl;
				if (!(cartaC>=1&&cartaC<=7)) cout<<"La carta 3 no esta dentro del rango de cartas aceptadas "<<endl;
				if (!(carta_lanzada>=1&&carta_lanzada<=7)) cout<<"La carta a lanzar no esta dentro del rango de cartas aceptadas "<<endl;
			}
			break;
			
		case 6://Partido LDU vs Fluminisense
			cout<<"Ingrese los resultados del primer partido en Brasil: "<<endl;
			cout<<"Goles LDU: ";cin>>goles_LDU_brasil;
			cout<<"Goles Fluminense.: ";cin>>goles_Flu_brasil;
			cout<<""<<endl;
			cout<<"Ingrese los resultados del segundo partido en Quito: "<<endl;
			cout<<"Goles LDU: ";cin>>goles_LDU_quito;
			cout<<"Goles Fluminense.: ";cin>>goles_Flu_quito;
			cout<<""<<endl;
			
			//Inicialización de variables con los datos ingresados por el usuario
			LDU_goles_favor = goles_LDU_brasil + goles_LDU_quito;
			LDU_goles_contra = goles_Flu_brasil + goles_Flu_quito;
			LDU_goles_visitante = goles_LDU_brasil;
			LDU_gol_diferencia = LDU_goles_favor - LDU_goles_contra;
			
			Flu_goles_favor = goles_Flu_brasil + goles_Flu_quito;
			Flu_goles_contra = goles_LDU_brasil + goles_LDU_quito;
			Flu_goles_visitante = goles_Flu_quito;
			Flu_gol_diferencia = Flu_goles_favor - Flu_goles_contra;
			
			//Validaciones para agreagar puntos a los equipos
			if(goles_LDU_brasil==goles_Flu_brasil){
				LDU_puntos_logrados++;
				Flu_puntos_logrados++;
			} else if (goles_LDU_brasil>goles_Flu_brasil) {
				LDU_puntos_logrados = LDU_puntos_logrados + 3;
				Flu_puntos_logrados = Flu_puntos_logrados + 0;
			} else if (goles_LDU_brasil<goles_Flu_brasil) {
				LDU_puntos_logrados = LDU_puntos_logrados + 0;
				Flu_puntos_logrados = Flu_puntos_logrados + 3;
			}
			
			if(goles_LDU_quito==goles_Flu_quito){
				LDU_puntos_logrados++;
				Flu_puntos_logrados++;
			} else if (goles_LDU_quito>goles_Flu_quito) {
				LDU_puntos_logrados = LDU_puntos_logrados + 3;
				Flu_puntos_logrados = Flu_puntos_logrados + 0;
			} else if (goles_LDU_quito<goles_Flu_quito) {
				LDU_puntos_logrados = LDU_puntos_logrados + 0;
				Flu_puntos_logrados = Flu_puntos_logrados + 3;
			}
			
			//Cadena de condicionales para determinar los resultados de la clasificación
			//Primer caso: comparación entre puntos logrados
			if(LDU_puntos_logrados>Flu_puntos_logrados){
				cout<<"Resultados LDU"<<endl;
				cout<<"Puntos logrados: "<<LDU_puntos_logrados<<endl;
				cout<<"Goles a favor: "<<LDU_goles_favor<<endl;
				cout<<"Goles en contra: "<<LDU_goles_contra<<endl;
				cout<<"Gol diferencia: "<<LDU_gol_diferencia<<endl;
				cout<<"Goles como visitante: "<<LDU_goles_visitante<<endl;
				cout<<""<<endl;
				
				cout<<"Resultados Fluminense"<<endl;
				cout<<"Puntos logrados: "<<Flu_puntos_logrados<<endl;
				cout<<"Goles a favor: "<<Flu_goles_favor<<endl;
				cout<<"Goles en contra: "<<Flu_goles_contra<<endl;
				cout<<"Gol diferencia: "<<Flu_gol_diferencia<<endl;
				cout<<"Goles como visitante: "<<Flu_goles_visitante<<endl;
				cout<<""<<endl;
				
				cout<<"Resultado Final: LDU clasifica a la semifinal"<<endl;
				
			} else if(LDU_puntos_logrados<Flu_puntos_logrados) {
				cout<<"Resultados LDU"<<endl;
				cout<<"Puntos logrados: "<<LDU_puntos_logrados<<endl;
				cout<<"Goles a favor: "<<LDU_goles_favor<<endl;
				cout<<"Goles en contra: "<<LDU_goles_contra<<endl;
				cout<<"Gol diferencia: "<<LDU_gol_diferencia<<endl;
				cout<<"Goles como visitante: "<<LDU_goles_visitante<<endl;
				cout<<""<<endl;
				
				cout<<"Resultados Fluminense"<<endl;
				cout<<"Puntos logrados: "<<Flu_puntos_logrados<<endl;
				cout<<"Goles a favor: "<<Flu_goles_favor<<endl;
				cout<<"Goles en contra: "<<Flu_goles_contra<<endl;
				cout<<"Gol diferencia: "<<Flu_gol_diferencia<<endl;
				cout<<"Goles como visitante: "<<Flu_goles_visitante<<endl;
				cout<<""<<endl;
				
				cout<<"Resultado Final: Fluminense clasifica a la semifinal"<<endl;
				
			} else if (LDU_puntos_logrados==Flu_puntos_logrados){
				//Segundo caaso: comparación entre goles diferencia
				if(Flu_gol_diferencia>Flu_gol_diferencia){
					cout<<"Resultados LDU"<<endl;
					cout<<"Puntos logrados: "<<LDU_puntos_logrados<<endl;
					cout<<"Goles a favor: "<<LDU_goles_favor<<endl;
					cout<<"Goles en contra: "<<LDU_goles_contra<<endl;
					cout<<"Gol diferencia: "<<LDU_gol_diferencia<<endl;
					cout<<"Goles como visitante: "<<LDU_goles_visitante<<endl;
					cout<<""<<endl;
					
					cout<<"Resultados Fluminense"<<endl;
					cout<<"Puntos logrados: "<<Flu_puntos_logrados<<endl;
					cout<<"Goles a favor: "<<Flu_goles_favor<<endl;
					cout<<"Goles en contra: "<<Flu_goles_contra<<endl;
					cout<<"Gol diferencia: "<<Flu_gol_diferencia<<endl;
					cout<<"Goles como visitante: "<<Flu_goles_visitante<<endl;
					cout<<""<<endl;
					
					cout<<"Resultado Final: LDU clasifica a la semifinal"<<endl;
					
				} else if(Flu_gol_diferencia<Flu_gol_diferencia){
					cout<<"Resultados LDU"<<endl;
					cout<<"Puntos logrados: "<<LDU_puntos_logrados<<endl;
					cout<<"Goles a favor: "<<LDU_goles_favor<<endl;
					cout<<"Goles en contra: "<<LDU_goles_contra<<endl;
					cout<<"Gol diferencia: "<<LDU_gol_diferencia<<endl;
					cout<<"Goles como visitante: "<<LDU_goles_visitante<<endl;
					cout<<""<<endl;
					
					cout<<"Resultados Fluminense"<<endl;
					cout<<"Puntos logrados: "<<Flu_puntos_logrados<<endl;
					cout<<"Goles a favor: "<<Flu_goles_favor<<endl;
					cout<<"Goles en contra: "<<Flu_goles_contra<<endl;
					cout<<"Gol diferencia: "<<Flu_gol_diferencia<<endl;
					cout<<"Goles como visitante: "<<Flu_goles_visitante<<endl;
					cout<<""<<endl;
					
					cout<<"Resultado Final: Fluminense clasifica a la semifinal"<<endl;
					
				}  else if(Flu_gol_diferencia==Flu_gol_diferencia){
					//Tercer caso, comparación entre goles de visitante
					if(LDU_goles_visitante>Flu_goles_visitante){
						cout<<"Resultados LDU"<<endl;
						cout<<"Puntos logrados: "<<LDU_puntos_logrados<<endl;
						cout<<"Goles a favor: "<<LDU_goles_favor<<endl;
						cout<<"Goles en contra: "<<LDU_goles_contra<<endl;
						cout<<"Gol diferencia: "<<LDU_gol_diferencia<<endl;
						cout<<"Goles como visitante: "<<LDU_goles_visitante<<endl;
						cout<<""<<endl;
						
						cout<<"Resultados Fluminense"<<endl;
						cout<<"Puntos logrados: "<<Flu_puntos_logrados<<endl;
						cout<<"Goles a favor: "<<Flu_goles_favor<<endl;
						cout<<"Goles en contra: "<<Flu_goles_contra<<endl;
						cout<<"Gol diferencia: "<<Flu_gol_diferencia<<endl;
						cout<<"Goles como visitante: "<<Flu_goles_visitante<<endl;
						cout<<""<<endl;
						
						cout<<"Resultado Final: LDU clasifica a la semifinal"<<endl;
					
					} else if(LDU_goles_visitante<Flu_goles_visitante){
						cout<<"Resultados LDU"<<endl;
						cout<<"Puntos logrados: "<<LDU_puntos_logrados<<endl;
						cout<<"Goles a favor: "<<LDU_goles_favor<<endl;
						cout<<"Goles en contra: "<<LDU_goles_contra<<endl;
						cout<<"Gol diferencia: "<<LDU_gol_diferencia<<endl;
						cout<<"Goles como visitante: "<<LDU_goles_visitante<<endl;
						cout<<""<<endl;
						
						cout<<"Resultados Fluminense"<<endl;
						cout<<"Puntos logrados: "<<Flu_puntos_logrados<<endl;
						cout<<"Goles a favor: "<<Flu_goles_favor<<endl;
						cout<<"Goles en contra: "<<Flu_goles_contra<<endl;
						cout<<"Gol diferencia: "<<Flu_gol_diferencia<<endl;
						cout<<"Goles como visitante: "<<Flu_goles_visitante<<endl;
						cout<<""<<endl;
						
						cout<<"Resultado Final: Fluminense clasifica a la semifinal"<<endl;
						
					} else if(LDU_goles_visitante==Flu_goles_visitante){
						//Cuarto caso: penales
						cout<<"Ingrese el resultado de los penales: "<<endl;
						cout<<"Goles LDU: ";cin>>LDU_goles_penales;
						cout<<"Goles Fluminense.: ";cin>>Flu_goles_penales;
						cout<<""<<endl;
						
						if(LDU_goles_penales>Flu_goles_penales){
							LDU_puntos_logrados = LDU_puntos_logrados + 3;
							cout<<"Resultados LDU"<<endl;
							cout<<"Puntos logrados: "<<LDU_puntos_logrados<<endl;
							cout<<"Goles a favor: "<<LDU_goles_favor<<endl;
							cout<<"Goles en contra: "<<LDU_goles_contra<<endl;
							cout<<"Gol diferencia: "<<LDU_gol_diferencia<<endl;
							cout<<"Goles como visitante: "<<LDU_goles_visitante<<endl;
							cout<<""<<endl;
							
							cout<<"Resultados Fluminense"<<endl;
							cout<<"Puntos logrados: "<<Flu_puntos_logrados<<endl;
							cout<<"Goles a favor: "<<Flu_goles_favor<<endl;
							cout<<"Goles en contra: "<<Flu_goles_contra<<endl;
							cout<<"Gol diferencia: "<<Flu_gol_diferencia<<endl;
							cout<<"Goles como visitante: "<<Flu_goles_visitante<<endl;
							cout<<""<<endl;
							
							cout<<"Resultado Final: LDU clasifica a la semifinal"<<endl;
						
						} else if(LDU_goles_penales<Flu_goles_penales){
							Flu_puntos_logrados = Flu_puntos_logrados + 3;
							cout<<"Resultados LDU"<<endl;
							cout<<"Puntos logrados: "<<LDU_puntos_logrados<<endl;
							cout<<"Goles a favor: "<<LDU_goles_favor<<endl;
							cout<<"Goles en contra: "<<LDU_goles_contra<<endl;
							cout<<"Gol diferencia: "<<LDU_gol_diferencia<<endl;
							cout<<"Goles como visitante: "<<LDU_goles_visitante<<endl;
							cout<<""<<endl;
							
							cout<<"Resultados Fluminense"<<endl;
							cout<<"Puntos logrados: "<<Flu_puntos_logrados<<endl;
							cout<<"Goles a favor: "<<Flu_goles_favor<<endl;
							cout<<"Goles en contra: "<<Flu_goles_contra<<endl;
							cout<<"Gol diferencia: "<<Flu_gol_diferencia<<endl;
							cout<<"Goles como visitante: "<<Flu_goles_visitante<<endl;
							cout<<""<<endl;
							
							cout<<"Resultado Final: Fluminense clasifica a la semifinal"<<endl;
							
						} else if(LDU_goles_penales==Flu_goles_penales){
							cout<<"Resultados LDU"<<endl;
							cout<<"Puntos logrados: "<<LDU_puntos_logrados<<endl;
							cout<<"Goles a favor: "<<LDU_goles_favor<<endl;
							cout<<"Goles en contra: "<<LDU_goles_contra<<endl;
							cout<<"Gol diferencia: "<<LDU_gol_diferencia<<endl;
							cout<<"Goles como visitante: "<<LDU_goles_visitante<<endl;
							cout<<""<<endl;
							
							cout<<"Resultados Fluminense"<<endl;
							cout<<"Puntos logrados: "<<Flu_puntos_logrados<<endl;
							cout<<"Goles a favor: "<<Flu_goles_favor<<endl;
							cout<<"Goles en contra: "<<Flu_goles_contra<<endl;
							cout<<"Gol diferencia: "<<Flu_gol_diferencia<<endl;
							cout<<"Goles como visitante: "<<Flu_goles_visitante<<endl;
							cout<<""<<endl;
							
							cout<<"Resultado Final: Ninguno de los equipos clasifica a la semifinal"<<endl;
						}
					}
				}
			}
			break;
			
		default:
			cout<<"Por favor escoja una opción valida"<<endl;	
			cout<<""<<endl;	
			break;
	}
	system("pause");
	return 0;
}
