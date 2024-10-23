#include <iostream>;
#include <string>;

void main()
{
	int numerobase;
	int numerosuma;
	int numeroresta;
	int numeromultiplicacion;
	int numerodivision;
	int numeromodulo;

	std::cout << "Escribe un numero base: " << std::endl;
	std::cin >> numerobase;
	std::cout << "Escribe un numero para realizar una suma: " << std::endl;
	std::cin >> numerosuma;
	int resultadosuma = numerobase + numerosuma;

	std::cout << "Elige un nuevo numero con el que restar : " << std::endl;
	std::cin >> numeroresta;
	std::cout << "Elige un nuevo numero con el que multiplicar : " << std::endl;
	int resultadoresta = numerosuma - numeroresta;

	std::cin >> numeromultiplicacion;
	std::cout << "Elige un nuevo numero con el que dividir: " << std::endl;
	int resultadomultiplicacion = numeroresta * numeromultiplicacion;

	std::cin >> numerodivision;
	std::cout << "Elige un nuevo numero del cual dar un residuo: " << std::endl;
	int resultadodivision = numeromultiplicacion / numerodivision;

	std::cin >> numeromodulo;
	float resultadomodulo = numerodivision % numeromodulo;
	std::cout << "El resultado final es: " << resultadomodulo;
}