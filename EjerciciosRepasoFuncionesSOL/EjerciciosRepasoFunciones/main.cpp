#include <iostream>
#include <string>

const int maxPreguntas = 10;
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
}