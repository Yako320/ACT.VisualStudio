#include <iostream>
#include <string>
#include <queue>
#include <stack>
#include <vector>
#include <list>

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

/*void main()
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
}*/

/*void main()
{
    int numero = 0;
    int variable1 = numero;
    int* variable2 = &variable1;
    int* variable3 = variable2;

    std::cout << "Introduce un numero: " << std::endl;
    std::cin >> numero;
    variable1 = numero;

    std::cout << "Introduce un numero para cambiar el anterior: " << std::endl;
    std::cin >> numero;
    *variable3 = numero;

    std::cout << "Numero1: " << variable1 << std::endl;
    std::cout << "Numero2: " << *variable2 << std::endl;
    std::cout << "Numero3: " << *variable3 << std::endl;
}*/

/*void main()
{
    std::list<int> numeros;
    std::list<int>::iterator it = numeros.begin();
    numeros.push_back(7);
    numeros.push_front(8);
    numeros.push_back(9);
    numeros.push_front(2);

    for (std::list<int>::iterator it = numeros.begin(); it != numeros.end(); it = std::next(it)) {
        std::cout << *it << std::endl;
    }
}*/

void main()
{
    std::list<int> numeros = { 1, 2, 3, 4, 5 };
    int numero = 0;
    bool rompeBucle = false;

    std::cout << "introduce numeros hasta parar con el -1:" << std::endl;

    while (!rompeBucle) {
        std::cin >> numero;
        if (numero == -1)
        {
            rompeBucle = true;
        }
        else
        {
            int posicion;
            std::cout << "Introduce la posicion para introducirlo (0 para inicio): ";
            std::cin >> posicion;

            std::list<int>::iterator it = numeros.begin();
            int limite = posicion;
            if (posicion >= numeros.size()) {
                limite = numeros.size();
            }
            for (int i = 0; i < limite; ++i) {
                ++it;
            }
            numeros.insert(it, numero);
        }
    }
    int posicionConsulta;
    std::cout << "Introduce una posicion para ver el valor en la lista: ";
    std::cin >> posicionConsulta;

    if (posicionConsulta >= 0 && posicionConsulta < numeros.size()) {
        std::list<int>::iterator it = numeros.begin();
        std::advance(it, posicionConsulta);
        std::cout << "Valor en la posicion " << posicionConsulta << " es: " << *it << std::endl;
    }
    else {
        std::cout << "Posicion incorrecta." << std::endl;
    }
}