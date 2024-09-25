// Materia: Programación I, Paralelo 1
// Autor: Mateo Enrique Gutierrez 
// Fecha creación: 25/09/2024 
// Número de ejercicio: 5
// Problema planteado: Verificar si un número es perfecto

#include <iostream>
using namespace std;

// Prototipo de la función para verificar si un número es perfecto
bool esNumeroPerfecto(int num);

int main() {
    int numero;

    cout << "Ingrese un número: ";
    cin >> numero;

    if (esNumeroPerfecto(numero)) {
        cout << numero << " es un número perfecto." << endl;
    } else {
        cout << numero << " no es un número perfecto." << endl;
    }

    return 0;
}

// Definición de la función para verificar si un número es perfecto
bool esNumeroPerfecto(int num) {
    int suma = 0;
    
    for (int i = 1; i < num; i++) {
        if (num % i == 0) {
            suma += i;
        }
    }

    return suma == num;
}
