// Autor: Pablo Herrera
// Fecha: 22 de febrero de 2022
// Descripción: Programa que corre varios programas
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main() {
	setlocale(LC_ALL, "");
	//Elección del programa
	int choise = 0;
	cout<<"Programas:\n 1.Convertidor de unidades\n 2.Calculadora para latas y cajas\n 3.Sistema de ecuaciones\n 4.Datos de evento promocional\n 5.Repartición del tesoro de Barba Negra\n"<<endl;
	cout<<"Elija un programa: ";cin>>choise;
	cout<<""<<endl;
	//Variables problema 1
	float estatura_m = 0, float_estatura_ft = 0, restante_estatura = 0, estatura_inch = 0;
	int int_estatura_ft = 0;
	
	float peso_kg = 0, float_peso_lb = 0, restante_peso = 0, peso_oz = 0;
	int int_peso_lb = 0;

	//Variables problema 2 (v = volumen, p = peso, s = superficie)
	float diametro = 0, altura_lata = 0,p_lata = 0, v_lata = 0, radio = 0, p_total_latas = 0;
	float largo = 0, ancho = 0, altura_caja = 0, v_caja = 0, p_caja = 0, s_caja=0;
	double pi = M_PI;
	
	int n_latas = 0, n_latas_ancho = 0, n_latas_largo = 0, n_latas_alto = 0;
	float v_bolitas = 0, v_total_latas= 0;
	float peso_t = 0, p_bolitas = 0; 
	
	//Variables problema 3
	float a=0,b=0,c=0,d=0,m=0,n=0,x=0,y=0;
	float denominador_y = 0;
	
	//Variables problema 4 (I = individual, T = total)
	int total_personas = 0, personas_mayores = 0, personas_colegio = 0, personas_normales = 0;
	float precio_entrada = 0, costoI_producto = 0, costoI_refrigerio = 0, costoI_servicio = 0;
	float entrada_mayores = 0, entrada_colegio = 0, entrada_normales = 0, precio_entrada_IVA = 0;
	float total_venta_entradas = 0, IVA = 0, gasto_total = 0, resultado;
	
	//Variables problema 5
	float polvo_original = 0, parte_Juan = 0, porcentaje_Juan = 0, parte_Pedro =0, porcentaje_Pedro = 0, parte_Manuel = 0, porcentaje_Manuel = 0, parte_Iglesia = 0, porcentaje_Iglesia = 0, parte_mar = 0, porcentaje_mar = 0;
	float polvo_mermado1 = 0, polvo_mermado2 = 0, polvo_mermado3 = 0, polvo_mermado4 = 0;
	float parte_final_Juan = 0, parte_final_Pedro = 0, parte_final_Manuel = 0, parte_final_Mar = 0;
	int monedas_originales = 0, int_parte_Juan = 0, int_porcentaje_Juan = 0, int_parte_Pedro = 0, int_porcentaje_Pedro = 0, int_parte_Manuel = 0, int_porcentaje_Manuel = 0, int_parte_Iglesia = 0, int_porcentaje_Iglesia = 0, int_parte_mar = 0, int_porcentaje_mar = 0;
	int monedas_mermado1 = 0, monedas_mermado2 = 0, monedas_mermado3 = 0, monedas_mermado4 = 0;
	int int_parte_final_Juan = 0, int_parte_final_Pedro = 0, int_parte_final_Manuel = 0, int_parte_final_Mar = 0;
	
	//Ejecución del programa elegido
	switch(choise){
		case 1://Convertidor de unidades
		
			// De metros a pies/pulgadas
			cout<<"Ingrese su estatura en metros: ";cin>>estatura_m;
			cout<<""<<endl;
			
			cout<<"Estatura ingresada: "<<estatura_m<<"[m]"<<endl;
			
			//Conversión de metros a pies y el sobrante a pulgadas
			int_estatura_ft=estatura_m*3.2808;
			float_estatura_ft=estatura_m*3.2808;
			restante_estatura = float_estatura_ft - int_estatura_ft;
			estatura_inch=restante_estatura*12;
			
			cout<<"Estatura en pies/pulgadas: "<<int_estatura_ft<<"[ft] "<<estatura_inch<<"[inch]"<<endl;
			cout<<"--------------------------------"<<endl;
			cout<<""<<endl;
			
			// De pies/pulgadas a metros
			cout<<"Ingrese su estatura en pies: ";cin>>float_estatura_ft;
			cout<<"Ingrese su estatura en pulgadas: ";cin>>estatura_inch;
			cout<<""<<endl;
			
			cout<<"Estatura ingresada: "<<float_estatura_ft<<"[ft] "<<estatura_inch<<"[inch]"<<endl;
			
			//Conversión de pulgadas a pies. Conversión de los pies totales a metros
			restante_estatura=estatura_inch/12;
			float_estatura_ft=float_estatura_ft+restante_estatura;
			estatura_m=float_estatura_ft/3.2808;
			
			cout<<"Estatura en metros: "<<estatura_m<<"[m] "<<endl;
			cout<<"--------------------------------"<<endl;
			cout<<""<<endl;
			// De kilos a libras/onzas
			
			cout<<"Ingrese su peso en kilos: ";cin>>peso_kg;
			cout<<""<<endl;
			
			cout<<"Peso ingresado: "<<peso_kg<<"[kg]"<<endl;
			
			//Conversión de kilos a libras y el sobrante a onzas
			int_peso_lb=peso_kg*2.20462;
			float_peso_lb=peso_kg*2.20462;
			restante_peso = float_peso_lb - int_peso_lb;
			peso_oz=restante_peso*16;
			
			cout<<"Peso en libras/onzas: "<<int_peso_lb<<"[lb] "<<peso_oz<<"[oz]"<<endl;
			cout<<"--------------------------------"<<endl;
			cout<<""<<endl;
			// De libras/onzas a kilos
			
			cout<<"Ingrese su peso en libras: ";cin>>float_peso_lb;
			cout<<"Ingrese su peso en onzas: ";cin>>peso_oz;
			cout<<""<<endl;
			
			cout<<"Peso ingresado: "<<float_peso_lb<<"[lb] "<<peso_oz<<"[oz]"<<endl;
			
			//Conversión de onzas a libras. Conversión de las libras totales a kilos
			restante_peso=peso_oz/16;
			float_peso_lb=float_peso_lb+restante_peso;
			peso_kg=float_peso_lb/2.20462;
			
			cout<<"Peso en kilos: "<<peso_kg<<"[lb] "<<endl;
			cout<<"--------------------------------"<<endl;
			cout<<""<<endl;
			break;
			
		case 2://Calculadora para latas y cajas
			cout<<"Ingrese las especificaciones de la lata:"<<endl;
			cout<<"Diametro en centimetros: ";cin>>diametro;
			cout<<"Altura en centimetros: ";cin>>altura_lata;
			cout<<"Peso en gramos: ";cin>>p_lata;
			cout<<""<<endl;
			cout<<"Ahora ingrese las dimensiones de la caja:"<<endl;
			cout<<"Largo en centimetros: ";cin>>largo;
			cout<<"Ancho en centimetros: ";cin>>ancho;
			cout<<"Altura en centimetros: ";cin>>altura_caja;
			
			//Cálculo de datos caja (volumen, superficie y peso)
			v_caja=largo*ancho*altura_caja;
			s_caja= 2*(largo*ancho)+2*(largo*altura_caja)+2*(ancho*altura_caja);
			p_caja = s_caja*0.1;
			
			//Cálculo datos lata (radio y volumen)
			radio = diametro/2;
			v_lata = pi*radio*radio*altura_lata;
			
			//Cálculo de número de latas de acuerdo a cada eje cordenado (es decir de acuerdo a altura, ancho y largo)
			n_latas_ancho = ancho/diametro;
			n_latas_largo = largo/diametro;
			n_latas_alto = altura_caja/altura_lata;
			//Validación para evitar multiplicar por 0
			if(n_latas_alto!=0){
				n_latas = n_latas_ancho*n_latas_largo*n_latas_alto;
			}else{
				n_latas = n_latas_ancho*n_latas_largo;
			}
			
			//Cálculo del volumen y peso total de todas las latas
			v_total_latas = v_lata*n_latas;
			p_total_latas = p_lata*n_latas;
			
			//Cálculo datos de bolas de poliestireno (volumen y peso)
			v_bolitas = v_caja-v_total_latas;
			p_bolitas = v_bolitas*0.5;
			
			//Cálculo peso total
			peso_t = p_bolitas + p_caja + p_total_latas;
			
			cout<<"Resultados:"<<endl;
			cout<<"a) "<<n_latas<<" latas caben en una caja de "<<largo<<"x"<<ancho<<"x"<<altura_caja<<" centimetros"<<endl;
			cout<<"b) Es necesario "<<v_bolitas<<"cm^3 de bolitas de poliestierno para rellenar la caja"<<endl;
			cout<<"c) El peso total de la caja con latas y bolitas es de "<<peso_t<<"g"<<endl;
			
			break;
		case 3://Sistema de ecuaciones
			cout<<"Dado el sistema de ecuaciones:\n ax + bx = m\n cx + dy = n\nIngrese valores para:"<<endl;
			cout<<"a: ";cin>>a;
			cout<<"b: ";cin>>b;
			cout<<"m: ";cin>>m;
			cout<<"c: ";cin>>c;
			cout<<"d: ";cin>>d;
			cout<<"n: ";cin>>n;
			cout<<""<<endl;
			
			//Validaciones que confirman que el sistema planteado tiene una solución
			//Fórmulas para resolver un sistema de ecuaciones por medio de sustitución
			if (a!=0){
				denominador_y = ((c*b)-(a*d));
				if(denominador_y!=0){
					y=((m*c)-(n*a))/denominador_y;
					x=(m-(b*y))/a;
					
					cout<<"Resultados:"<<endl;
					cout<<"x = "<<x<<endl;
					cout<<"y = "<<y<<endl;
					cout<<""<<endl;
				}else{cout<<"Las variables ingresadas no son validas. No generan una solución."<<endl;break;}
			}else{cout<<"Las variables ingresadas no son validas. No generan una solución."<<endl;break;}
			break;
			
		case 4://Datos de evento promocional 
			cout<<"Ingrese los datos del evento: "<<endl;
			cout<<"Número total de asistentes: ";cin>>total_personas;
			cout<<"Precio de la entrada (sin IVA): ";cin>>precio_entrada;
			cout<<"Costo individual del producto: ";cin>>costoI_producto;
			cout<<"Costo individual del refrigerio: ";cin>>costoI_refrigerio;
			cout<<"Costo individual del servicio del local: ";cin>>costoI_servicio;
			
			//Cálculo de personas dependiendo su estatus
			personas_mayores = total_personas*0.35;
			personas_colegio = total_personas*0.25;
			personas_normales = total_personas*0.40;
			
			//Cálculo precio de las entradas dependiendo del tipo de persona
			precio_entrada_IVA = precio_entrada*1.12;
			entrada_mayores = personas_mayores*(precio_entrada*0.5);
			entrada_colegio = personas_colegio*(precio_entrada_IVA*0.9);
			entrada_normales = personas_normales*precio_entrada_IVA;
			
			//Cálculo de los datos solicitados
			
			total_venta_entradas = entrada_mayores + entrada_colegio + entrada_normales;
			IVA = total_venta_entradas*0.12;
			gasto_total = (total_personas*(costoI_refrigerio+costoI_servicio+costoI_producto));
			resultado = total_venta_entradas - gasto_total;
			
			cout<<"Datos del evento:\n"<<endl;
			cout<<"Total de ingresos por venta de entradas: $"<<total_venta_entradas<<endl;
			cout<<"Total de IVA a pagar: $"<<IVA<<endl;
			cout<<"Gasto total: $"<<gasto_total<<endl;
			cout<<"Resultado del evento: $"<<resultado<<endl;
			break;
			
		case 5://Repartición del tesoro de Barba Negra
			//Ejercicio con polvo de oro
			cout<<"Ingrese la cantidad original de polvo de oro presente en el barril: ";cin>>polvo_original;
			cout<<""<<endl;
			//Primera repartición
			parte_Juan = polvo_original/2;
			parte_Pedro = polvo_original/3;
			parte_final_Manuel = polvo_original/9;
			parte_mar = polvo_original - parte_Juan - parte_Pedro - parte_final_Manuel;
			polvo_mermado1 = polvo_original-parte_final_Manuel - parte_mar;
			
			//Segunda repartición
			parte_Juan = polvo_mermado1/2;
			parte_final_Pedro = polvo_mermado1/3;
			parte_Manuel = polvo_mermado1/9;
			parte_mar = polvo_mermado1 - parte_Juan - parte_final_Pedro - parte_Manuel;
			polvo_mermado2 = polvo_mermado1-parte_final_Pedro-parte_mar;
			
			//Tercera repartición
			parte_final_Juan = polvo_mermado2/2;
			parte_Pedro = polvo_mermado2/3;
			parte_Manuel = polvo_mermado2/9;
			parte_mar = polvo_mermado2 - parte_final_Juan - parte_Pedro - parte_Manuel;
			polvo_mermado3 = polvo_mermado2-parte_final_Juan-parte_mar;
			
			//Cuarta repartición
			parte_Juan = polvo_mermado3/2;
			parte_Pedro = polvo_mermado3/3;
			parte_Manuel = polvo_mermado3/9;
			parte_final_Juan = parte_final_Juan + parte_Juan;
			parte_final_Pedro = parte_final_Pedro + parte_Pedro;
			parte_final_Manuel = parte_final_Manuel + parte_Manuel;
			parte_Iglesia = polvo_mermado3 - parte_Juan - parte_Pedro - parte_Manuel;
			polvo_mermado4 = parte_final_Juan+parte_final_Pedro+parte_final_Manuel+parte_Iglesia;
			parte_mar = polvo_original-polvo_mermado4;

			// Porcentajes
			porcentaje_Juan = (parte_final_Juan/polvo_original)*100;
			porcentaje_Pedro = (parte_final_Pedro/polvo_original)*100;
			porcentaje_Manuel = (parte_final_Manuel/polvo_original)*100;
			porcentaje_Iglesia = (parte_Iglesia/polvo_original)*100;
			porcentaje_mar = (parte_mar/polvo_original)*100;
			
			cout<<"Resultados:"<<endl;
			cout<<"a) 1. Parte en gramos de Juan "<<parte_final_Juan<<"g; y su porcentaje es "<<porcentaje_Juan<<"%"<<endl;
			cout<<"   2. Parte en gramos de Pedro "<<parte_final_Pedro<<"g; y su porcentaje es "<<porcentaje_Pedro<<"%"<<endl;
			cout<<"   3. Parte en gramos de Manuel "<<parte_final_Manuel<<"g; y su porcentaje es "<<porcentaje_Manuel<<"%"<<endl;
			cout<<"   4. Parte en gramos de la iglesia "<<parte_Iglesia<<"g; y su porcentaje es "<<porcentaje_Iglesia<<"%"<<endl;
			cout<<"   5. Parte en gramos arrojados al mar "<<parte_mar<<"g; y su porcentaje es "<<porcentaje_mar<<"%"<<endl;
			cout<<""<<endl;

			//Ejercicio con monedas de oro
			cout<<"Ingrese la cantidad original de monedas de oro presentes en el barril: ";cin>>monedas_originales;
			cout<<""<<endl;
			//Primera repartición
			int_parte_Juan = monedas_originales/2;
			int_parte_Pedro = monedas_originales/3;
			int_parte_final_Manuel = monedas_originales/9;
			int_parte_mar = monedas_originales - int_parte_Juan - int_parte_Pedro - int_parte_final_Manuel;
			monedas_mermado1 = monedas_originales-int_parte_final_Manuel - int_parte_mar;
			
			//Segunda repartición
			int_parte_Juan = monedas_mermado1/2;
			int_parte_final_Pedro = monedas_mermado1/3;
			int_parte_Manuel = monedas_mermado1/9;
			int_parte_mar = monedas_mermado1 - int_parte_Juan - int_parte_final_Pedro - int_parte_Manuel;
			monedas_mermado2 = monedas_mermado1-int_parte_final_Pedro-int_parte_mar;
			
			//Tercera repartición
			int_parte_final_Juan = monedas_mermado2/2;
			int_parte_Pedro = monedas_mermado2/3;
			int_parte_Manuel = monedas_mermado2/9;
			int_parte_mar = monedas_mermado2 - int_parte_final_Juan - int_parte_Pedro - int_parte_Manuel;
			monedas_mermado3 = monedas_mermado2-int_parte_final_Juan-int_parte_mar;
			
			//Cuarta repartición
			int_parte_Juan = monedas_mermado3/2;
			int_parte_Pedro = monedas_mermado3/3;
			int_parte_Manuel = monedas_mermado3/9;
			int_parte_final_Juan = int_parte_final_Juan + int_parte_Juan;
			int_parte_final_Pedro = int_parte_final_Pedro + int_parte_Pedro;
			int_parte_final_Manuel = int_parte_final_Manuel + int_parte_Manuel;
			int_parte_Iglesia = monedas_mermado3 - int_parte_Juan - int_parte_Pedro - int_parte_Manuel;
			monedas_mermado4 = int_parte_final_Juan+int_parte_final_Pedro+int_parte_final_Manuel+int_parte_Iglesia;
			int_parte_mar = monedas_originales-monedas_mermado4;

			// Porcentajes
			int_porcentaje_Juan = (int_parte_final_Juan*100/monedas_originales);
			int_porcentaje_Pedro = (int_parte_final_Pedro*100/monedas_originales);
			int_porcentaje_Manuel = (int_parte_final_Manuel*100/monedas_originales);
			int_porcentaje_Iglesia = (int_parte_Iglesia*100/monedas_originales);
			int_porcentaje_mar = (int_parte_mar*100/monedas_originales);
			
			cout<<"Resultados:"<<endl;
			cout<<"b) 1. Monedas de oro de Juan "<<int_parte_final_Juan<<"; y su porcentaje es "<<int_porcentaje_Juan<<"%"<<endl;
			cout<<"   2. Monedas de oro de Pedro "<<int_parte_final_Pedro<<"; y su porcentaje es "<<int_porcentaje_Pedro<<"%"<<endl;
			cout<<"   3. Monedas de oro de Manuel "<<int_parte_final_Manuel<<"; y su porcentaje es "<<int_porcentaje_Manuel<<"%"<<endl;
			cout<<"   4. Monedas de oro de la iglesia "<<int_parte_Iglesia<<"; y su porcentaje es "<<int_porcentaje_Iglesia<<"%"<<endl;
			cout<<"   5. Monedas de oro arrojados al mar "<<int_parte_mar<<"; y su porcentaje es "<<int_porcentaje_mar<<"%"<<endl;
			cout<<""<<endl;
			break;
			
		default:
			cout<<"Por favor escoja una opción valida"<<endl;	
			cout<<""<<endl;	
			break;
	}
	system("pause");
	return 0;
}
