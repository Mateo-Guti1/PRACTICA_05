// Materia: Programación I, Paralelo 1
// Autor: Mateo Enrique Gutierrez 
// Fecha creación: 25/09/2024 
// Número de ejercicio: 8
// Problema planteado: Encontrar todos los números narcisistas de n dígitos

#include <iostream>
#include <cmath>
using namespace std;

// Prototipo de la función para verificar si un número es narcisista
bool esNarcisista(int num, int n);

int main() {
    int n;

    cout << "Ingrese la cantidad de dígitos (n): ";
    cin >> n;

    int limiteInferior = pow(10, n - 1);
    int limiteSuperior = pow(10, n) - 1;

    cout << "Números narcisistas de " << n << " dígitos:" << endl;
    for (int i = limiteInferior; i <= limiteSuperior; i++) {
        if (esNarcisista(i, n)) {
            cout << i << endl;
        }
    }

    return 0;
}

// Definición de la función para verificar si un número es narcisista
bool esNarcisista(int num, int n) {
    int suma = 0, temp = num;

    while (temp > 0) {
        int digito = temp % 10;
        suma += pow(digito, n);
        temp /= 10;
    }

    return suma == num;
}
