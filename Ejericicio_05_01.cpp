// Materia: Programación I, Paralelo 1
// Autor: Mateo Enrique Gutierrez 
// Fecha creación: 25/09/2024 
// Número de ejercicio: 1
// Problema planteado: Cálculo del pago mensual de un préstamo utilizando la fórmula de amortización

#include <iostream>
#include <cmath>
using namespace std;

// Prototipo de la función para calcular el pago mensual
double calcularPagoMensual(double prestamo, double tasaAnual, int años);

int main() {
    double prestamo, tasaAnual;
    int años;

    cout << "Ingrese el monto del préstamo: ";
    cin >> prestamo;

    cout << "Ingrese la tasa de interés anual (%): ";
    cin >> tasaAnual;

    cout << "Ingrese el número de años para pagar: ";
    cin >> años;

    double pagoMensual = calcularPagoMensual(prestamo, tasaAnual, años);
    cout << "El pago mensual es: " << pagoMensual << endl;

    return 0;
}

// Definición de la función para calcular el pago mensual
double calcularPagoMensual(double prestamo, double tasaAnual, int años) {
    double tasaMensual = tasaAnual / 12 / 100;
    int n = años * 12;

    return (prestamo * tasaMensual * pow(1 + tasaMensual, n)) / (pow(1 + tasaMensual, n) - 1);
}
