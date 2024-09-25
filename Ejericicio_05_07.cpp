// Materia: Programación I, Paralelo 1
// Autor: Mateo Enrique Gutierrez 
// Fecha creación: 25/09/2024 
// Número de ejercicio: 7
// Problema planteado: Calcular el coeficiente binomial

#include <iostream>
using namespace std;

// Prototipo de la función para calcular el factorial
int factorial(int n);

// Prototipo de la función para calcular el coeficiente binomial
int coeficienteBinomial(int n, int m);

int main() {
    int n, m;

    cout << "Ingrese el valor de n: ";
    cin >> n;

    cout << "Ingrese el valor de m: ";
    cin >> m;

    if (m > n || n < 0 || m < 0) {
        cout << "Valores inválidos. Asegúrese de que m <= n y que ambos sean no negativos." << endl;
    } else {
        int resultado = coeficienteBinomial(n, m);
        cout << "El coeficiente binomial (" << n << " sobre " << m << ") es: " << resultado << endl;
    }

    return 0;
}

// Definición de la función para calcular el factorial
int factorial(int n) {
    if (n == 0) return 1;
    return n * factorial(n - 1);
}

// Definición de la función para calcular el coeficiente binomial
int coeficienteBinomial(int n, int m) {
    return factorial(n) / (factorial(m) * factorial(n - m));
}
