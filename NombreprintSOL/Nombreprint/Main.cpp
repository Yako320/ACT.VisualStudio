//#Include == importar librerias
	//iostream = Inputs-Outputs...
	//string = Almacena un input
//n = Salto de linea nº1
//std::endl == Salto de linea nº2
//int = Almacena un numero entero
//std::cin >> ¿? = Almacena un input del usuario en una string o int
//std::cout << ¿? = Muestra por pantalla un string o int, o un input que ya este puesto asi como cualquier tipo de contenido que este programado para que se muestre
//Las strings o int que se muestran en un cout pueden estar concatenadas con + o << (Recomendable)
//float = numero decimal (Se usa en divisiones asi como en operaciones que puedan contener decimales) Tambien se puede usar poniendo (float) delante del int en el resultado

#include <iostream>
#include <string>

/*void main()
{
	std::string nom;
	std::string cognom;
	std::cout << "Quin es el teu nom?\n";
	std::cin >> nom;
	std::cout << "Quin es el teu cognom" <<std::endl;
	std::cin >> cognom;
	std::cout << "Benvingut "+nom+" "+cognom;
}
*/

void main()
{
	int numero1;
	int numero2;
	std::cout << "Escull un numero: " << std::endl;
	std::cin >> numero1;
	std::cout << "Escull un altre numero: " << std::endl;
	std::cin >> numero2;
	int numerofinalsuma = numero1 + numero2;
	int numerofinalresta = numero1 - numero2;
	int numerofinalmultiplicacion = numero1 * numero2;
	float numerofinaldivision = (float)numero1/numero2;
	std::cout << "La suma del numero "<< numero1<< " y "<< numero2 <<" es: " << numerofinalsuma << "\n";
	std::cout << "La resta del numero " << numero1 << " y " << numero2 << " es: " << numerofinalresta << "\n";
	std::cout << "La multiplicacio del numero " << numero1 << " y " << numero2 << " es: " << numerofinalmultiplicacion << "\n";
	std::cout << "La divisio del numero " << numero1 << " y " << numero2 << " es: " << numerofinaldivision << "\n";
}