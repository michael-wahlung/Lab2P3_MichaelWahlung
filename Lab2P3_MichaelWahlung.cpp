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
int calcular_Narcicistas(int tamanio, int num) {
	int acum = 0, pot = 0;
	while (num)
	{
		pot = num % 10;
		for (int i = 0; i < tamanio - 1; i++)
		{
			pot = pot * (num % 10);
		}
		acum += pot;
		num = num / 10;
	}
	return acum;
}
void narcicistas() {
	int num, cont = 0, acum, num_Guardado;
	cout << "Ingresa un numero entero positivo: ";
	cin >> num;
	num_Guardado = num;
	while (num)
	{
		num = num / 10;
		cont += 1;
	}
	acum = calcular_Narcicistas(cont, num_Guardado);
	if (acum == num_Guardado)
		cout << num_Guardado << " es un numero narcisista!" << endl;
	else
		cout << num_Guardado << " no es un numero narcicista (la suma dio " << acum << ")" << endl;
}
void montania() {
	int arreglo[8] = {};
	int temp;
	bool mitad1 = false, mitad2 = false;
	for (int i = 0; i < 8; i++)
	{
		cout << "Ingrese un numero al arreglo (pos: " << i << ")";
		cin >> arreglo[i];
	}
	for (int i = 0; i < 3; i++)
	{
		if ((arreglo[i] + 1) = arreglo[i + 1])
			mitad1 = true;
		else
			mitad1 = false;
	}
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
			narcicistas();
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