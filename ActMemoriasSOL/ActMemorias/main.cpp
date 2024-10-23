#include <iostream>
#include <string>
#include <queue>
#include <stack>
#include <vector>

/*void main() {

    std::queue <std::string> palabras;
    std::string palabra;

    std::cout << "Introduce palabras para formar una frase, introduce -1 para mostrar la frase completa:" << std::endl;
    while (palabra != "-1") {
        std::cin >> palabra;
        if (palabra == "-1")
        {
            break;
        }
        else
        {
            palabras.push(palabra);
        }
    }
    while (!palabras.empty())
    {
        std::cout << palabras.front() << " ";
        palabras.pop();
    }
}*/

/*void main()
{
    std::queue <short> numeros;
    std::queue <short> numerosCopia;

    numeros.push(1);
    numeros.push(2);
    numeros.push(3);
    numeros.push(4);
    numeros.push(5);

    while (!numeros.empty()) {
        numerosCopia.push(numeros());
        numeros.pop;
    }
    while (!numerosCopia.empty()) {

    }
}*/

/*void main()
{
    std::queue < int > numeros;
    std::stack < int > numerosStack;
    int numero;
    bool breakBucle = false;

    std::cout << "Introduce todos los numeros que quieras. Para acabar el programa pon -1" << std::endl;
    while (!breakBucle) {
        std::cin >> numero;
            if (numero == -1) {
                breakBucle = true;
            }
            else {
                numeros.push(numero);
            }
    }
    while (!numeros.empty()) {
        numerosStack.push(numeros.front());
        numeros.pop();
    }
    while (!numerosStack.empty()) {
        std::cout << numerosStack.top();
        numerosStack.pop();
    }
}*/

/*void main() {

    std::vector <short> numeros;
    short numero = 0;
    short suma = 0;
    bool breakcode = false;

    std::cout << "Introduce palabras para formar una frase, introduce -1 para mostrar la frase completa:" << std::endl;
    while (numero != -1) {
        std::cin >> numero;
        if (numero == -1)
        {
            breakcode = true;
        }
        else
        {
            numeros.push_back(numero);
        }
    }
    for (int i = 0; i < numeros.size(); i++) {
        suma += numeros[i];
    }
    std::cout << suma;
}*/

/*void main() {

    std::vector <short> numeros;
    short numero = 0;
    short suma = 0;
    short numeroEliminar = 0;
    bool breakcode = false;

    std::cout << "Introduce numeros, introduce -1 para mostrar los numeros introducidos:" << std::endl;
    while (numero != -1) {
        std::cin >> numero;
        if (numero == -1)
        {
            std::cout << "Introduce un numero para eliminar los que sean iguales: " << std::endl;
            std::cin >> numeroEliminar;
            breakcode = true;
        }
        else
        {
            numeros.push_back(numero);
        }
    }
    for (int i = 0; i < numeros.size(); i++) {
        if (numeros[i] == numeroEliminar) {
            numeros.erase(numeros.begin() + i);
        }
        else {
            i++;
        }
        std::cout << numeros.front();
        numeros.erase(numeros.begin() + i);
    }
    for (int i = 0; i < numeros.size(); i++) {
        std::cout << numeros[i];
    }
}*/
void main()
{
    std::vector <short> numeros;
    short numero = 0;
    short numeroIntroducir = 0;
    short posicion = 0;
    bool breakcode = false;

    std::cout << "Introduce numeros, introduce -1 para mostrar los numeros introducidos:" << std::endl;
    while (numero != -1) {
        std::cin >> numero;
        if (numero == -1)
        {
            std::cout << "Introduce un numero para introducir: " << std::endl;
            std::cin >> numeroIntroducir;
            std::cout << "Introduce una posicion: " << std::endl;
            std::cin >> posicion;
            numeros.insert(numeros.begin() + posicion, numeroIntroducir);
            breakcode = true;
        } else {
            numeros.push_back(numero);
        }
    }
    for (int i = 0; i < numeros.size(); i++) {
        std::cout << numeros[i];
    }
}