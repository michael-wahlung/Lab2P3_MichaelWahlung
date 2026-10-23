// Lab2P3_MichaelWahlung.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


void figura() {
	int tamanio;
	cout << "Ingrese el tamanio del logo (numero impar mayor a 5): ";
	cin >> tamanio;
	while (tamanio % 2 == 0) {
		cout << "El numero no puede ser par" << endl;
		cout << "Ingrese el tamanio del logo (numero impar mayor a 5): ";
	}
	for (int i = 0; i < tamanio; i++) {
		for (int j = 0; j < tamanio; j++) {
			if (i == j) {
				cout << "*";
			}
			else if (j == 0) {
				cout << "*";
			}
			else if (j == tamanio - 1) {
				cout << "*";
			}
			else if (i + j == tamanio - 1) {
				cout << "*";
			}
			else {
				cout << " ";
			}
		}
		cout << endl;
	}
	cout << endl;
}
void collatz() {
	int num, cont = 0;
	cout << "Ingresa un numero positivo mayor a 0: ";
	cin >> num;
	while (num <= 0) {
		cout << "Favor seguir instrucciones" << endl;
		cout << "Ingresa un numero positivo entero: ";
		cin >> num;
	}
	while (num != 1) {
		if (num % 2 == 0)
		{
			num = num / 2;
			cont += 1;
		}
		else if (num % 2 != 0)
		{
			num = (num * 3) + 1;
			cont += 1;
		}
	}
	cout << "Resultado: El numero " << num << " tomo " << cont << " pasos para llegar a 1" << endl;
}
void narcicistas() {
	int num,cont=0,acum=0;
	cout << "Ingresa un numero entero positivo";
	cin >> num;
	while (num)
	{
		num = num / 10;
		cont+=1;
	}
	calcular_Narcicistas(cont, num);
}
int calcular_Narcicistas(int tamanio,int num) {

}
int main() {
	int opcion;
	do {
		cout << "1. Visual Studio Logo" << endl;
		cout << "2. Numeros narcicistas" << endl;
		cout << "3. Conjetura de collatz" << endl;
		cout << "4. Arreglo montania" << endl;
		cout << "0. Salir" << endl;
		cout << "Ingrese una opcion de la lista: " << endl;
		cin >> opcion;
		switch (opcion) {
		case (1):
			figura();
			break;
		case (2):
			break;
		case (3):
			collatz();
			break;
		case (4):
			break;
		default:
			cout << "Ingrese una opcion valida" << endl;
			break;
		}
	} while (opcion);
}