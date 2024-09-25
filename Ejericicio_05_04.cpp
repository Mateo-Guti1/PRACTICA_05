// Materia: Programación I, Paralelo 1
// Autor: Mateo Enrique Gutierrez 
// Fecha creación: 25/09/2024 
// Número de ejercicio: 4
// Problema planteado: Calcular el cambio con el menor número de monedas posibles

#include <iostream>
using namespace std;

// Prototipo de la función para calcular el cambio
void calcularCambio(double precio, double pago);

int main() {
    double precio, pago;

    cout << "Ingrese el precio del artículo: ";
    cin >> precio;

    cout << "Ingrese la cantidad pagada por el cliente: ";
    cin >> pago;

    if (pago < precio) {
        cout << "El pago es insuficiente." << endl;
    } else {
        calcularCambio(precio, pago);
    }

    return 0;
}

// Definición de la función para calcular el cambio
void calcularCambio(double precio, double pago) {
    double cambio = pago - precio;
    int monedas[5] = {5, 10, 0.50, 0.20, 0.10};  // Representamos en centavos
    int cantidadMonedas[5] = {0};  // Array para almacenar el número de monedas

    cambio *= 100;  // Convertimos a centavos para evitar problemas con los decimales

    for (int i = 0; i < 5; i++) {
        cantidadMonedas[i] = cambio / monedas[i];
        cambio = fmod(cambio, monedas[i]);
    }

    cout << "El cambio es:" << endl;
    for (int i = 0; i < 5; i++) {
        if (cantidadMonedas[i] > 0) {
            cout << cantidadMonedas[i] << " moneda(s) de " << monedas[i] / 100.0 << " Bs." << endl;
        }
    }
}
