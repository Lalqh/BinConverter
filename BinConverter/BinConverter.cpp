#include <iostream>
#include "Binario.h"
#include "Decimal.h"
#include "Hexa.h"

using namespace std;

int main()
{
	int op, dec;
	char bin[100], hex[100];
	string binario;

	Binario binaro;
	Decimal decimal;
	Hexa hexa;

	cout << "Bienvenido a el convetidor de numeros\n";

	do {
		cout << "1.- De binario a decimal\n";
		cout << "2.- De decimal a binario\n";
		cout << "3.- De hexadecimal a decimal\n";
		cout << "4.- De decimal a hexadecimal\n";
		cout << "5.- De hexadecimal a binario\n";
		cout << "6.- De binario a hexadecimal\n";
		cout << "7.- Salir\n";
		cout << "Ingrese su opcion: ";
		cin >> op;
		switch (op)
		{
		case 1:
			cout << "Ingrese su numero en binario: ";
			cin >> bin;
			cout << "El numero decimal es: "<< binaro.binToDec(bin) <<endl;
			
			break;
		case 2:
			cout << "Ingrese su numero en decimal: ";
			cin >> dec;
			cout << "El numero binario es: " << decimal.decToBin(dec) << endl;
			
			break;
		case 3:
			cout << "Ingrese un hexadecimal: ";
			cin >> hex;
			cout << "El numero decimal es: " << hexa.hexToDec(hex) << endl;
			
			break;
		case 4:

			break;
		case 5:
			cout << "Ingrese un hexadecimal: ";
			cin >> hex;
			hexa.hexToBin(hex);
			break;
		case 6:
			cout << "Ingrese un binario: ";
			cin >> binario;
			cout << "El hexadecimal: " << binaro.binToHex(binario) << endl;
			break;
		default:
			break;
		}
	} while (op!=7);
}