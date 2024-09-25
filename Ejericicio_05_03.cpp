// Materia: Programación I, Paralelo 1
// Autor: Mateo Enrique Gutierrez 
// Fecha creación: 25/09/2024 
// Número de ejercicio: 3
// Problema planteado: Conversión de segundos a formato HH:MM:SS

#include <iostream>
using namespace std;

// Prototipo de la función para convertir segundos
void convertirSegundos(int segundos);

int main() {
    int segundos;

    cout << "Ingrese la cantidad de segundos: ";
    cin >> segundos;

    convertirSegundos(segundos);

    return 0;
}

// Definición de la función para convertir segundos a HH:MM:SS
void convertirSegundos(int segundos) {
    int horas = segundos / 3600;
    segundos %= 3600;
    int minutos = segundos / 60;
    int segundosRestantes = segundos % 60;

    cout << horas << " horas, " << minutos << " minutos, " << segundosRestantes << " segundos." << endl;
}
Ejericicio_05_01.cpp
