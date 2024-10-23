#include <iostream>
#include <string>

#pragma region EJERCICIO 19
/*void ejercicio19()
{
	int hora;
	int minuto;
	int segundos; //Creo variables de cada formato horario

	std::cout << "Que hora es? " << std::endl;
	std::cin >> hora; //Guardo la informacion proporcionada en la variable

	std::cout << "Que minuto es? " << std::endl;
	std::cin >> minuto; //Guardo la informacion proporcionada en la variable

	std::cout << "Que segundo es? " << std::endl;
	std::cin >> segundos; //Guardo la informacion proporcionada en la variable

	int horaMilisegundos;
	int minutosMilisegundos;
	int segundosMilisegundos; //Creo las variables para calcular los formatos horarios en milisegundos

	horaMilisegundos = hora*60*60 * 1000;
	minutosMilisegundos = minuto * 60 * 1000;
	segundosMilisegundos = segundos * 1000; //Hago las formulas de calculo

	int totalMilisegundos = horaMilisegundos + minutosMilisegundos + segundosMilisegundos; //Suma de todos los valores para que quede en un numero general

	std::cout << "La hora actual en milisegundos es: " << totalMilisegundos; //Imprimo por pantalla

}*/
#pragma endregion

#pragma region EJERCICIO 20
/* void Ejercicio20() 
{
	int milisegundos;

	std::cout << "Dime una cantidad de tiempo en formato milisegundos: " << std::endl;
	std::cin >> milisegundos;

	int hora;
	int minuto;
	int segundo;

	hora = milisegundos / 1000 / 60 / 60;
	minuto = milisegundos % 1000 / 60;
	segundo = milisegundos * 1000 % 60;

	std::cout << "Hora actual --> " << hora << ":" << minuto << ":" << segundo << ":" << milisegundos;
}*/


/*void correccionEjercicio20()
{
	int milisegundos;

	std::cout << "Dime la hora: " << std::endl;
	std::cin >> milisegundos;

	int segundos;
	int minutos = segundos / 60;
	int horas = minutos / 60;

	std::cout << horas << ":" << minutos % 60 << ":" << segundos % 60 << ":" << milisegundos % 1000;
}
*/
#pragma endregion

#pragma region EJERCICIO 22
/*
void main()
{
	float temperaturaCelsius; //Creacion de variable

	std::cout << "Dime una temperatura en grados Celsius: " << std::endl;
	std::cin >> temperaturaCelsius; //Almacenamiento de datos

	float temperaturaKelvin = temperaturaCelsius + 273.15;
	float temperaturaFarenheit = (temperaturaCelsius * 9 / 5) + 32; //Calculo de las operaciones de conversion

	std::cout << "La temperatura en Kelvin es: " << temperaturaKelvin << std::endl;
	std::cout << "La temperatura en Farenheit es: " << temperaturaFarenheit; //Impresion de resultados por pantalla
}
*/
#pragma endregion

#pragma region EJERCICIO BOOLEAN 1
/*void main()
{
	int nota;
	std::cout << "Vota del 1 al 10: " << std::endl;
	std::cin >> nota;

	bool juez1 = true;
	bool juez2 = true;
	bool juez3 = false; // :(

	std::cout << "La nota final es: " << nota * juez1 * juez2 * juez3;
} */
#pragma endregion

#pragma region EJERCICIO BOOLEAN 2
/*void main()
{
	int nota;
	std::cout << "Vota del 1 al 10: " << std::endl;
	std::cin >> nota;

	bool juez1 = true;
	bool juez2 = true;
	bool juez3 = true; // :)

	std::cout << "La nota final es: " << nota * (juez1+juez2+juez3);
} */
#pragma endregion

#pragma region OPERADORS LOGICS 1
/*
void main() {
	int numero1;
	int numero2;

	std::cout << "Introduce un numero: " << std::endl;
	std::cin >> numero1;

	std::cout << "Introduce otro numero: " << std::endl;
	std::cin >> numero2;

	bool test = numero1 == numero2;
	int resultat = (numero1 + numero2) * test;

	std::cout << resultat;
}*/
#pragma endregion

#pragma region OPERADORS LOGICS 2
/* void main()
{
	int numero1;
	int numero2;
	int numero3;

	std::cout << "Introdueix un numero: " << std::endl;
	std::cin >> numero1;

	std::cout << "Introdueix un altre numero: " << std::endl;
	std::cin >> numero2;

	std::cout << "Introdueix un alte numero: " << std::endl;
	std::cin >> numero3;

	bool test1 = numero1 < numero2;
	bool test2 = numero2 <= numero3;

	int resultat = (numero1 + numero2 + numero3) * test1 * test2;

	std::cout << resultat;
} */
#pragma endregion

#pragma region PORTES LOGIQUES 1
/*void main()
{
	int edad;
	int carnet;

	std::cout << "Que edad tienes? " << std::endl;
	std::cin >> edad;

	std::cout << "Tienes carnet de conducir? " << std::endl;
	std::cin >> carnet;

	bool MayorEdad = edad >= 18;
	bool TieneCarnet = carnet == 1;

	std::cout << "Puede conducir? " << (MayorEdad && TieneCarnet);
} */
#pragma endregion

#pragma region EJERCICIO 1
/*void main()
{
	int numero1;
	int numero2; //Creacion de las variables int

	std::cout << "Dime un numero: " << std::endl;
	std::cin >> numero1; //Se almacena un numero en la variable
	std::cout << "Dime otro numero: " << std::endl;
	std::cin >> numero2; //Se almacena otro numero en la variable

	if (numero1 == 1){
		std::cout << "El primer numero es 1"; //Primer condicional
	}
	else if (numero2 == 1) { 
		std::cout << "El segundo numero es 1"; //Segundo condicional
 	}
	else {
		std::cout << "Ninguno de los numeros es 1"; //Si ninguna de las dos condiciones anteriores se cumple
	}
} //FIN DEL CODIGO */
#pragma endregion

#pragma region EJERCICIO 2
/*void main()
{
	short numero1;

	std::cout << "Introduce un numero: " << std::endl;
	std::cin >> numero1;

	if (numero1 == 7) {
		std::cout << "El numero introducido es 7";
	}
	else if (numero1 >= 5){
		std::cout << "El numero es igual o mayor a 5";
	}
	else {
		std::cout << "El numero es menor a 5";
	}
} */
#pragma endregion

#pragma region EJERCICIO 3
/* void main()
{
	int diaSemana;

	std::cout << "Introduce un numero del 1 al 7: " << std::endl;
	std::cin >> diaSemana;

	switch (diaSemana) {
	case 1:
		std::cout << "Es lunes" << std::endl;
		break;
	case 2:
		std::cout << "Es martes" << std::endl;
		break;
	case 3:
		std::cout << "Es miercoles" << std::endl;
		break;
	case 4:
		std::cout << "Es jueves" << std::endl;
		break;
	case 5:
		std::cout << "Es viernes" << std::endl;
		break;
	case 6:
		std::cout << "Es sabado" << std::endl;
		break;
	case 7:
		std::cout << "Es domingo" << std::endl;
		break;
	}
} */
#pragma endregion

#pragma region EJERCICIO 4
/*void main()
{
	char letra;

	std::cout << "Introduce una letra" << std::endl;
	std::cin >> letra;

	switch (letra) {
	case 'a':case 'A':case 'e':case'E':case 'i':case 'I':case 'o':case 'O':case 'u':case 'U':
		std::cout << "La letra que has introducido es una vocal";
		break;
	}
}*/
#pragma endregion

#pragma region EJERCICIO 5
/*void main()
{
	int numero1;
	int numero2;

	std::cout << "Introduce un numero: " << std::endl;
	std::cin >> numero1;
	std::cout << "Introduce un numero: " << std::endl;
	std::cin >> numero2;

	(numero1 >= numero2) ? std::cout << "El numero "<< numero1 << " es mas grande" : std::cout << "El numero "<< numero2 << " es mas grande";
} */
#pragma endregion

#pragma region EJERCICIO 6
/*void main()
{
	bool booleano1 = false;
	short numero1;
	short numero2;
	short sumanumeros;

	std::cout << "Introduce un numero: " << std::endl;
	std::cin >> numero1;

	std::cout << "Introduce otro numero: " << std::endl;
	std::cin >> numero2;

	(booleano1 == true) ? sumanumeros = numero1 + numero2 : sumanumeros = numero1 - numero2;
	std::cout << sumanumeros;
} */
#pragma endregion

#pragma region EJERCICIO FINAL
void main()
{
	short respuesta1, respuesta2, respuesta3, respuesta4, respuesta5, respuesta6, respuesta7, respuesta8, respuesta9, respuesta10;

	std::cout << "Primera pregunta! Cual es la consola mas vendida de la historia?" << std::endl;
	std::cout << "- Playstation 2" << std::endl;
	std::cout << "- Nintendo GameCube" << std::endl;
	std::cout << "- Nintendo Switch" << std::endl;
	std::cout << "- Xbox 360" << std::endl; //Posibles respuestas
	std::cin >> respuesta1; //Respuesta del jugador

	std::cout << "Segunda Pregunta! Cual fue el ganador del GOTY 2018?" << std::endl;
	std::cout << "- Red Dead Redemption 2" << std::endl;
	std::cout << "- God Of War" << std::endl;
	std::cout << "- Celeste" << std::endl;
	std::cout << "- Monster Hunter World"; //Posibles respuestas
	std::cin >> respuesta2; //Respuesta del jugador
}
#pragma endregion