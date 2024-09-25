// Materia: Programación I, Paralelo 1
// Autor: Mateo Enrique Gutierrez 
// Fecha creación: 25/09/2024 
// Número de ejercicio: 2
// Problema planteado: Cálculo de la edad exacta en años, meses y días

#include <iostream>
#include <ctime> 
using namespace std;

// Prototipo de la función para calcular la edad
void calcularEdad(int dia, int mes, int año);

int main() {
    int dia, mes, año;

    cout << "Ingrese el día de nacimiento: ";
    cin >> dia;

    cout << "Ingrese el mes de nacimiento: ";
    cin >> mes;

    cout << "Ingrese el año de nacimiento: ";
    cin >> año;

    calcularEdad(dia, mes, año);

    return 0;
}

// Definición de la función para calcular la edad
void calcularEdad(int dia, int mes, int año) {
    time_t t = time(0);
    tm* ahora = localtime(&t);
    int diaActual = ahora->tm_mday;
    int mesActual = ahora->tm_mon + 1;
    int añoActual = ahora->tm_year + 1900;

    int años = añoActual - año;
    int meses = mesActual - mes;
    int dias = diaActual - dia;

    if (dias < 0) {
        dias += 30;
        meses--;
    }
    if (meses < 0) {
        meses += 12;
        años--;
    }

    cout << "Edad exacta: " << años << " años, " << meses << " meses, " << dias << " días." << endl;
}
