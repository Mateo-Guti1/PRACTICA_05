// Materia: Programación I, Paralelo 1
// Autor: Mateo Enrique Gutierrez 
// Fecha creación: 25/09/2024 
// Número de ejercicio: 10
// Problema planteado: Dibujar el triángulo de Pascal con un tamaño dado

#include <iostream>
using namespace std;

// Prototipo de la función para calcular el coeficiente binomial
int coeficienteBinomial(int n, int m);

// Prototipo de la función para dibujar el triángulo de Pascal
void dibujarTrianguloPascal(int tamaño);

int main() {
    int tamaño;

    cout << "Ingrese el tamaño del lado del triángulo de Pascal: ";
    cin >> tamaño;

    dibujarTrianguloPascal(tamaño);

    return 0;
}

// Definición de la función para calcular el coeficiente binomial
int coeficienteBinomial(int n, int m) {
    if (m == 0 || m == n) {
        return 1;
    } else {
        return coeficienteBinomial(n - 1, m - 1) + coeficienteBinomial(n - 1, m);
    }
}

// Definición de la función para dibujar el triángulo de Pascal
void dibujarTrianguloPascal(int tamaño) {
    for (int i = 0; i < tamaño; i++) {
        // Imprimir los espacios para alinear el triángulo
        for (int j = 0; j < tamaño - i - 1; j++) {
            cout << " ";
        }

        // Imprimir los números del triángulo de Pascal
        for (int k = 0; k <= i; k++) {
            cout << coeficienteBinomial(i, k) << " ";
        }

        cout << endl;
    }
}
