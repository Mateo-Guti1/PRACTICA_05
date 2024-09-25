// Materia: Programación I, Paralelo 1
// Autor: Mateo Enrique Gutierrez 
// Fecha creación: 25/09/2024 
// Número de ejercicio: 6
// Problema planteado: Generar 50 números al azar y contar cuántos son primos de manera sencilla

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// Prototipo de la función para verificar si un número es primo
bool esPrimo(int num);

int main() {
    srand(time(0)); // Inicializar la semilla para los números aleatorios
    int contadorPrimos = 0;

    // Generar 50 números aleatorios y contar los primos
    for (int i = 0; i < 50; i++) {
        int numero = rand() % 99 + 1; // Genera un número entre 1 y 99
        cout << "Número generado: " << numero << endl;

        if (esPrimo(numero)) {
            contadorPrimos++;
        }
    }

    // Mostrar el total de números primos
    cout << "Cantidad de números primos: " << contadorPrimos << endl;
    return 0;
}

// Definición de la función para verificar si un número es primo
bool esPrimo(int num) {
    if (num <= 1) return false; // Los números menores o iguales a 1 no son primos
    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) return false; // Si es divisible por algún número diferente de 1 y sí mismo
    }
    return true; // Si no encontró divisores, es primo
}

