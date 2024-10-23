#include <string>
#include <iostream>

#pragma region Variables
void main()
{
	char respuesta1, respuesta2, respuesta3, respuesta4, respuesta5, respuesta6, respuesta7, respuesta8, respuesta9, respuesta10, respuestaExtra;
	short racha = 0;
	short puntos = 0;
	short mayorRacha = 0;
	short respuestasCorrectas = 0;
	short respuestasIncorrectas = 0;
#pragma endregion
#pragma region Pregunta 1
	std::cout << "Primera pregunta! Cual es la consola mas vendida de la historia?" << std::endl;
	std::cout << "a) Playstation 2" << std::endl; //<-- Correcta
	std::cout << "b) Nintendo GameCube" << std::endl;
	std::cout << "c) Nintendo Switch" << std::endl;
	std::cout << "d) Xbox 360" << std::endl; //Posibles respuestas
	std::cin >> respuesta1; //Respuesta del jugador
	std::cout << "" << std::endl;

	if (respuesta1 == 'a') {
		std::cout << "Respuesta Correcta!" << std::endl;
		racha++;
		puntos = puntos + racha;
		std::cout << "Puntos actuales: " << puntos << std::endl;
		mayorRacha++;
		respuestasCorrectas++;
	}
	else {
		std::cout << "Respuesta Incorrecta! La respuesta correcta era Playstation 2" << std::endl;
		puntos--;
		racha = 0;
		std::cout << "Puntos actuales: " << puntos << std::endl;
		respuestasIncorrectas++;
	}
#pragma endregion
#pragma region Pregunta 2
	std::cout << "Segunda Pregunta! Cual fue el ganador del GOTY 2018?" << std::endl;
	std::cout << "a) Red Dead Redemption 2" << std::endl;
	std::cout << "b) God Of War" << std::endl; //<-- Correcta
	std::cout << "c) Celeste" << std::endl;
	std::cout << "d) Monster Hunter World"; //Posibles respuestas
	std::cin >> respuesta2; //Respuesta del jugador
	std::cout << "" << std::endl;

	if (respuesta2 == 'b') {
		std::cout << "Respuesta Correcta!" << std::endl;
		racha++;
		puntos = puntos + racha;
		std::cout << "Puntos actuales: " << puntos << std::endl;
		mayorRacha++;
		respuestasCorrectas++;
	}
	else {
		std::cout << "Respuesta Incorrecta! La respuesta correcta era God Of War (Robo Historico)" << std::endl;
		puntos--;
		racha = 0;
		std::cout << "Puntos actuales: " << puntos << std::endl;
		respuestasIncorrectas++;
	}
#pragma endregion
#pragma region Pregunta 3
	std::cout << "Tercera Pregunta! Cual es el ultimo o proximo lanzamiento de Hideo Kojima?" << std::endl;
	std::cout << "a) Metal Gear Solid 3 Snake Eater" << std::endl;
	std::cout << "b) Metal Gear Solid V The Phantom Pain" << std::endl;
	std::cout << "c) P.T." << std::endl;
	std::cout << "d) Death Stranding 2" << std::endl; // <-- Correcta : Posibles respuestas
	std::cin >> respuesta3; //Respuesta del jugador
	std::cout << "" << std::endl;

	if (respuesta3 == 'd') {
		std::cout << "Respuesta Correcta!" << std::endl;
		racha++;
		puntos = puntos + racha;
		std::cout << "Puntos actuales: " << puntos << std::endl;
		mayorRacha++;
		respuestasCorrectas++;
	}
	else {
		std::cout << "Respuesta Incorrecta! La respuesta correcta era Death Stranding 2" << std::endl;
		puntos--;
		racha = 0;
		std::cout << "Puntos actuales: " << puntos << std::endl;
		respuestasIncorrectas++;
	}
#pragma endregion
#pragma region Pregunta 4
	std::cout << "Cuarta Pregunta! Que servicio de videojuegos en la nube murió?" << std::endl;
	std::cout << "a) Xbox Game Pass Cloud" << std::endl;
	std::cout << "b) Amazon Luna" << std::endl;
	std::cout << "c) Google Stadia" << std::endl; //<-- Correcta
	std::cout << "d) Blacknut Cloud Gaming" << std::endl; //Posibles respuestas
	std::cin >> respuesta4; //Respuesta del jugador
	std::cout << "" << std::endl;

	if (respuesta4 == 'c') {
		std::cout << "Respuesta Correcta!" << std::endl;
		racha++;
		puntos = puntos + racha;
		std::cout << "Puntos actuales: " << puntos << std::endl;
		mayorRacha++;
		respuestasCorrectas++;
	}
	else {
		std::cout << "Respuesta Incorrecta! La respuesta correcta era Google Stadia" << std::endl;
		puntos--;
		racha = 0;
		std::cout << "Puntos actuales: " << puntos << std::endl;
		respuestasIncorrectas++;
	}
#pragma endregion
#pragma region Pregunta 5
	std::cout << "Quinta pregunta! Cual fue el primer juego de ubisoft?" << std::endl;
	std::cout << "a) Zombi" << std::endl; //<-- Correcta
	std::cout << "b) Assassin's Creed" << std::endl;
	std::cout << "c) Tom Clancy's Rainbow Six" << std::endl;
	std::cout << "d) Rayman" << std::endl; //Posibles respuestas
	std::cin >> respuesta5; //Respuesta del jugador
	std::cout << "" << std::endl;

	if (respuesta5 == 'a') {
		std::cout << "Respuesta Correcta!" << std::endl;
		racha++;
		puntos = puntos + racha;
		std::cout << "Puntos actuales: " << puntos << std::endl;
		mayorRacha++;
		respuestasCorrectas++;
	}
	else {
		std::cout << "Respuesta Incorrecta! La respuesta correcta era Zombi" << std::endl;
		puntos--;
		racha = 0;
		std::cout << "Puntos actuales: " << puntos << std::endl;
		respuestasIncorrectas++;
	}
#pragma endregion
#pragma region Pregunta 6
	std::cout << "Sexta Pregunta! Cual es la proxima entrega de Grand Theft Auto?" << std::endl;
	std::cout << "a) Donkey Kong Country" << std::endl;
	std::cout << "b) Call Of Duty Black Ops 6" << std::endl;
	std::cout << "c) Grand Theft Auto VI" << std::endl; //<-- Correcta
	std::cout << "d) Gorilla Tag" << std::endl; //Posibles respuestas
	std::cin >> respuesta6; //Respuesta del jugador
	std::cout << "" << std::endl;

	if (respuesta6 == 'c') {
		std::cout << "Respuesta Correcta!" << std::endl;
		racha++;
		puntos = puntos + racha;
		std::cout << "Puntos actuales: " << puntos << std::endl;
		mayorRacha++;
		respuestasCorrectas++;
	}
	else {
		std::cout << "Respuesta Incorrecta! La respuesta correcta era Grand Theft Auto VI claramente" << std::endl;
		puntos--;
		racha = 0;
		std::cout << "Puntos actuales: " << puntos << std::endl;
		respuestasIncorrectas++;
	}
#pragma endregion
#pragma region Pregunta 7
	std::cout << "Septima Pregunta! Cuando es la gala de los Game Awards?" << std::endl;
	std::cout << "a) 15 de Octubre" << std::endl;
	std::cout << "b) 12 de Diciembre" << std::endl; //<-- Correcta
	std::cout << "c) 21 de Mayo" << std::endl;
	std::cout << "d) 30 de Julio" << std::endl; //Posibles respuestas
	std::cin >> respuesta7; //Respuesta del jugador
	std::cout << "" << std::endl;

	if (respuesta7 == 'b') {
		std::cout << "Respuesta Correcta!" << std::endl;
		racha++;
		puntos = puntos + racha;
		std::cout << "Puntos actuales: " << puntos << std::endl;
		mayorRacha++;
		respuestasCorrectas++;
	}
	else {
		std::cout << "Respuesta Incorrecta! La respuesta correcta era 12 de Diciembre ;)" << std::endl;
		puntos--;
		racha = 0;
		std::cout << "Puntos actuales: " << puntos << std::endl;
		respuestasIncorrectas++;
	}
#pragma endregion
#pragma region Pregunta 8
	std::cout << "Octava Pregunta! Ultimo juego de sony?" << std::endl;
	std::cout << "a) Astro Bot" << std::endl; // <-- Correcta
	std::cout << "b) Ghost of Yotei" << std::endl;
	std::cout << "c) Bloodborne remake" << std::endl;
	std::cout << "d) Uncharted 5" << std::endl; //Posibles respuestas
	std::cin >> respuesta8; //Respuesta del jugador
	std::cout << "" << std::endl;

	if (respuesta8 == 'a') {
		std::cout << "Respuesta Correcta!" << std::endl;
		racha++;
		puntos = puntos + racha;
		std::cout << "Puntos actuales: " << puntos << std::endl;
		mayorRacha++;
		respuestasCorrectas++;
	}
	else {
		std::cout << "Respuesta Incorrecta! La respuesta correcta era Mazda" << std::endl;
		puntos--;
		racha = 0;
		std::cout << "Puntos actuales: " << puntos << std::endl;
		respuestasIncorrectas++;
	}
#pragma endregion
#pragma region Pregunta 9
	std::cout << "Novena pregunta! Como se llama el juego de carreras mundo abierto de Microsoft?" << std::endl;
	std::cout << "a) Gran turismo" << std::endl;
	std::cout << "b) Dirt" << std::endl;
	std::cout << "c) Forza Horizon" << std::endl; //<-- Correcta
	std::cout << "d) Need For Speed" << std::endl; //Posibles respuestas
	std::cin >> respuesta9; //Respuesta del jugador
	std::cout << "" << std::endl;

	if (respuesta9 == 'c') {
		std::cout << "Respuesta Correcta!" << std::endl;
		racha++;
		puntos = puntos + racha;
		std::cout << "Puntos actuales: " << puntos << std::endl;
		mayorRacha++;
		respuestasCorrectas++;
	}
	else {
		std::cout << "Respuesta Incorrecta! La respuesta correcta es que era un politico" << std::endl;
		puntos--;
		racha = 0;
		std::cout << "Puntos actuales: " << puntos << std::endl;
		respuestasIncorrectas++;
	}
#pragma endregion
#pragma region Pregunta 10
	std::cout << "Ultima Pregunta! Cual es el juego de la saga Call Of Duty que se desarrolla en el 2025" << std::endl;
	std::cout << "a) Call Of Duty Black Ops 2" << std::endl; //<-- Correcta
	std::cout << "b) Call Of Duty Advance Warfare" << std::endl;
	std::cout << "c) Call Of Duty Ghosts" << std::endl;
	std::cout << "d) Call Of Duty Vanguard" << std::endl; //Posibles respuestas
	std::cin >> respuesta10; //Respuesta del jugador
	std::cout << "" << std::endl;

	if (respuesta10 == 'a') {
		std::cout << "Respuesta Correcta!" << std::endl;
		racha++;
		puntos = puntos + racha;
		std::cout << "Puntos actuales: " << puntos << std::endl;
		mayorRacha++;
		respuestasCorrectas++;
	}
	else {
		std::cout << "Respuesta Incorrecta! La respuesta correcta era que gano un premio de la paz, aunque no lo creas..." << std::endl;
		puntos--;
		racha = 0;
		std::cout << "Puntos actuales: " << puntos << std::endl;
		respuestasIncorrectas++;
	}
#pragma endregion
#pragma region Pregunta Extra!
	if (puntos < 20) {
		std::cout << "Pregunta Extra! Si aciertas ganas. Que empresa saco el juego E.T." << std::endl;
		std::cout << "Nintendo" << std::endl;
		std::cout << "Ubisoft" << std::endl;
		std::cout << "Atari" << std::endl; // <-- Correcta
		std::cout << "Sega" << std::endl; //Posibles respuestas
		std::cin >> respuestaExtra; //Respuesta del jugador
		std::cout << "" << std::endl;
		if (respuestaExtra == 'c') {
			std::cout << "Respuesta Correcta! Has ganado, por los pelos..." << std::endl;
			mayorRacha++;
			respuestasCorrectas++;
		}
		else {
			std::cout << "Has perdido igualmente. Decepcionante la verdad..." << std::endl;
			respuestasIncorrectas++;
		}
	}
	else {
		std::cout << "Has ganado! Bien hecho." << std::endl;
	}
#pragma endregion
#pragma region Datos Totales
	std::cout << "Datos Totales" << std::endl;
	std::cout << "-------------" << std::endl;
	std::cout << "Respuestas correctas: " << respuestasCorrectas << std::endl;
	std::cout << "Respuestas incorrectas: " << respuestasIncorrectas << std::endl;
	std::cout << "Mayor racha de respuestas correctas: " << mayorRacha << std::endl;
#pragma endregion
}