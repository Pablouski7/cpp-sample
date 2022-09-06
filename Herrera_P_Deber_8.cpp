// Deber 8
// Autor: Pablo Herrera
// Fecha: 5 de abril de 2022
// Descripción: Listado de las funciones solicitadas

// 1. AREA TRIÁNGULO
double area_triangulo(double lado_a, double lado_b, double lado_c){
	// Validación de si los datos ingresados forman o no un triángulo
	if((lado_a<lado_b+lado_c)&&(lado_b<lado_a+lado_c)&&(lado_c<lado_a+lado_b)){
		// Resolución con la fórmula de Herón
		// Declaración e inicialización de variables
		double semiperimtero = (lado_a+lado_b+lado_c)/2;
		double expresion = semiperimtero*(semiperimtero-lado_a)*(semiperimtero-lado_b)*(semiperimtero-lado_c);
		double sqrt = expresion/2, cnt = 0;
		// Algoritmo para cáclular la raiz cuadrada de un número, que incia desde la mitad para ahorrar ejecuciones
	    while(sqrt != cnt){
	        cnt = sqrt;
	        sqrt = ( expresion/cnt + cnt) / 2;
	    }
		double area = sqrt;
		return area;
	} else return -1;
}

// 2. CONVERTIR TEMPERATURA
double convertir_temperatura(double temperatura, char unidad[1]){
	// Valifación de la conversión a realizar. Si de centigrados a farenheit o viceverse
	if((unidad=="F")||(unidad=="f")){
		// Aplicación de la fórmula correspondiente
		return (temperatura * 9/5) + 32;
	}else if((unidad=="C")||(unidad=="c")){
		// Aplicación de la fórmula correspondiente
		return (temperatura - 32) * 5/9;
	}else return temperatura;
}

// 3. SUMA DE DIGITOS Y MULTIPLOS DE TRES
	// a) Suma de digitos
	int suma_digitos(int num){
		int suma = 0;
		// Cambio de swigno para ignorar cualquier signo negativo
		if (num<0){
			num*=-1;
		}
		// Ciclo que saca cada digito, los suma y va minorizando el númeoro original
		while(num>0){
			suma += num%10;
			num = (num - num%10)/10;
		}
		return suma;
	}
	
	// b) Multiplos de tres
	// Función tipo string que con un puntero puede devolver una cadena de caracteres
	const char* es_multiplo_de_tres(int num){
		// Validación de si es multiplo de 3 o no
		if (suma_digitos(num)%3==0)
			return "true";
		else return "false";
	}

// 4. CAMBIO DE BASE
int cambio_base(int num, int base){
	// Declaración e inicialización de variables
	int resultado = 0;
	int cnt = 1;
	// Validación de si los datos ingresados estan o no dentro del rango deseado
	if((num>0)&&((base>=2)&&(base<=10))){
		// Ciclo while que va sumando los residuos de las divisiones al número ingresado. Hasta dejarlo menor que la base ingresada
		while (num>=base){
			resultado += (num%base)*cnt;
			num /= base;
			cnt*=10;
		}
		resultado += num*cnt;
		return resultado;
	} else return -1;
	
}

// 3. FUNCIONES SENO Y COSENO
	// a) Seno
	long double seno(double radianes){
		// Declaración e inicialización de variables
		long double factorial = 1;
		long double potencia = 1;
		int paridad = 1;
		double radian_a_utilizar = 0;
		// Validación de si el radian ingresado da "más de una vuelta a una circunfenrencia". Es decir si el radian ingresado supera 2*pi, quiere decir que tiene un radian equivalente entre 1 y 6.28....
		if(radianes>7){
			// Si el radian es mayor a 7 se cambia el radian a utilizar por un equivalente. Restando el número de revoluciones hechas por lo que vale cada revolución
			int n_revoluciones = radianes/(2*3.14159265359);
			n_revoluciones -= n_revoluciones%1;
			double radian_equivalente = radianes - n_revoluciones*(2*3.14159265359) ;
			radian_a_utilizar = radian_equivalente;
		} else {
			radian_a_utilizar = radianes;
		}
		// Declaración e incialización de seno con el radian resultante
		long double seno_x = radian_a_utilizar;
		
		// Ciclo for que utiliza el teorema de Taylor para aproximar una respuesta.
		for(int a = 3; a<=2000; a+= 2){
			factorial = 1;
			potencia = 1;
			for(int cnt = 1; cnt<=a; cnt++){
				factorial*=cnt;
			}
			for(int j = 0; j<a; j++){
				potencia*=radian_a_utilizar;
			}
			if(paridad%2==0){
				seno_x += (potencia/factorial);
			} else {
				seno_x -= (potencia/factorial);
			}
			paridad++;
			}
			return seno_x;
	}
	
	// b) Coseno
	double coseno(double radianes){
		// Declaración e inicialización de variables
		long double factorial = 1;
		long double potencia = 1;
		int paridad = 1;
		double radian_a_utilizar = 0;
		long double coseno_x = 1;
		// Validación del número de revoluciones dadas por los radianes ingresados. Para reducir y eficientar los cálculos
		if(radianes>7){
			int n_revoluciones = radianes/(2*3.14159265359);
			n_revoluciones -= n_revoluciones%1;
			double radian_equivalente = radianes - n_revoluciones*(2*3.14159265359) ;
			radian_a_utilizar = radian_equivalente;
		} else {
			radian_a_utilizar = radianes;
		}
		
		// Ciclo for que utiliza el teorema de Taylor para aproximar una respuesta.
		for(int a = 2; a<=2000; a+= 2){
			factorial = 1;
			potencia = 1;
			for(int cnt = 1; cnt<=a; cnt++){
				factorial*=cnt;
			}
			for(int j = 0; j<a; j++){
				potencia*=radian_a_utilizar;
			}
			if(paridad%2==0){
				coseno_x += (potencia/factorial);
			} else {
				coseno_x -= (potencia/factorial);
			}
			paridad++;
			}
			return coseno_x;
	}
