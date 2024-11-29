#include <iostream>
#include <string>

/*const int maxPreguntas = 10;
const int maxOpciones = 4;
int userPuntuation = 0;

void {
    std::string preguntasYRespuestas[maxPreguntas][maxOpciones + 1];

    std::string preguntas[maxPreguntas] = {
            "¿Cuál es el nombre del personaje principal en 'Harry Potter'?",
            "¿En qué película aparece el personaje 'Darth Vader'?",
            "¿Quién dirigió la película 'Inception'?",
            "¿Qué actor interpreta a 'Iron Man' en el Universo Marvel?",
            "¿Cuál es el nombre del planeta natal de 'Avatar'?",
            "¿Cuál es el nombre del anillo en 'El Señor de los Anillos'?",
            "¿Qué película de Pixar trata de emociones en la mente de una niña?",
            "¿Quién protagoniza la película 'Gladiador'?",
            "¿En qué ciudad se desarrolla 'El Padrino'?",
            "¿Quién es el villano en 'Los Vengadores'?"
    };

    std::string opciones[maxPreguntas][maxOpciones] = {
          {"Harry Potter", "Ron Weasley", "Hermione Granger", "Draco Malfoy"},
          {"Star Wars", "Star Trek", "Guardianes de la Galaxia", "Matrix"},
          {"Christopher Nolan", "Steven Spielberg", "James Cameron", "Quentin Tarantino"},
          {"Robert Downey Jr.", "Chris Evans", "Mark Ruffalo", "Chris Hemsworth"},
          {"Pandora", "Tatooine", "Krypton", "Vulcano"},
          {"El Anillo Único", "Anillo de Poder", "Anillo de Fuego", "Anillo de los Enanos"},
          {"Intensamente", "Toy Story", "Buscando a Nemo", "Coco"},
          {"Russell Crowe", "Brad Pitt", "Leonardo DiCaprio", "Joaquin Phoenix"},
          {"Nueva York", "Los Ángeles", "Las Vegas", "Chicago"},
          {"Loki", "Ultron", "Thanos", "Red Skull"}
    };


    for (int i = 0; i < maxPreguntas; i++) {
        preguntasYRespuestas[i][0] = preguntas[i]; // Colocamos la pregunta en la primera columna
        for (int j = 0; j < maxOpciones; j++) {
            preguntasYRespuestas[i][j + 1] = opciones[i][j]; // Colocamos las opciones en las siguientes columnas
        }
    }

    int userImput;

    //Loop gameplay
    for (int preguntaIndex = 0; preguntaIndex < maxPreguntas; preguntaIndex++)
    {
        std::cout << preguntasYRespuestas[preguntaIndex][0] << std::endl;

        for (int resuestaIndex = 1; resuestaIndex <= maxOpciones; resuestaIndex++)
        {
            std::cout << "  " << resuestaIndex << "- " << preguntasYRespuestas[preguntaIndex][resuestaIndex] << std::endl;
        }

        std::cout << "Que respuesta das?:";
        std::cin >> userImput;
    }
}*/

/*int suma(int numero1, int numero2) {
    int resultadoSuma = numero1 + numero2;
    return resultadoSuma;
}

int suma(int numero1, int numero2, int numero3) {
    int resultadoSuma = numero1 + numero2 + numero3;
    return resultadoSuma;
}

float suma(float numero1, float numero2) {
    double resultadoSuma = numero1 + numero2;
    return resultadoSuma;
}

int main() {
    int numero1, numero2, numero3;
    float numero1d, numero2d;

    numero1 = 2;
    numero2 = 3;
    numero3 = 7;

    numero1d = 2.5;
    numero2d = 5.6;

    std::cout << suma(numero1, numero2);
}*/

/*void recursividad(int numero1) {
    if (numero1 != 0) {
        std::cout << numero1 << std::endl;
        recursividad(numero1 - 1);
    }
}

void main() {
    int numero = 7;
    recursividad(numero);
}*/

unsigned long long factorial(int numero1) {
    if (numero1 == 1) {
        return 1;
    }
    else {
        return numero1 * factorial(numero1 - 1);
    }
}

void main() {
    int numero = 7;
    unsigned long long resultado = factorial(numero);

    std::cout << resultado;
}