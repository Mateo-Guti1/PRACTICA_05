// Materia: Programación I, Paralelo 1
// Autor: Mateo Enrique Gutierrez 
// Fecha creación: 25/09/2024 
// Número de ejercicio: 9
// Problema planteado: Calcular el MCD y MCM de dos números enteros

#include <iostream>
using namespace std;

// Prototipo de las funciones para calcular el MCD y MCM
int calcularMCD(int a, int b);
int calcularMCM(int a, int b);

int main() {
    int a, b;

    cout << "Ingrese el primer número: ";
    cin >> a;

    cout << "Ingrese el segundo número: ";
    cin >> b;

    cout << "El MCD de " << a << " y " << b << " es: " << calcularMCD(a, b) << endl;
    cout << "El MCM de " << a << " y " << b << " es: " << calcularMCM(a, b) << endl;

    return 0;
}

// Definición de la función para calcular el MCD usando el algoritmo de Euclides
int calcularMCD(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Definición de la función para calcular el MCM
int calcularMCM(int a, int b) {
    return (a * b) / calcularMCD(a, b);
}
