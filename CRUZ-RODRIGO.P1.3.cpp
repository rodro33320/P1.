#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main() {
    int n;
    cout << "Ingrese la cantidad de estudiantes: ";
    cin >> n;

    int codigos[n];
    string nombres[n];
    float notas1[n], notas2[n], notas3[n], promedios[n];

    for (int i = 0; i < n; ++i) {
        cout << "\nIngrese el codigo del estudiante: ";
        cin >> codigos[i];
        cout << "Ingrese el nombre del estudiante: ";
        cin.ignore(); // Para limpiar el buffer de entrada
        getline(cin, nombres[i]);
        cout << "Ingrese la nota 1: ";
        cin >> notas1[i];
        cout << "Ingrese la nota 2: ";
        cin >> notas2[i];
        cout << "Ingrese la nota 3: ";
        cin >> notas3[i];

        // Calcular el promedio
        promedios[i] = (notas1[i] + notas2[i] + notas3[i]) / 3;
    }

    // Contar estudiantes desaprobados
    int desaprobados = 0;
    for (int i = 0; i < n; ++i) {
        if (promedios[i] < 10.5) {
            desaprobados++;
        }
    }

    // Ordenar estudiantes por promedio (de mayor a menor)
    int indices[n];
    for (int i = 0; i < n; ++i) indices[i] = i;
    sort(indices, indices + n, [&](int a, int b) {
        return promedios[a] > promedios[b];
    });

    // Mostrar los datos ordenados
    cout << "\nLista de estudiantes ordenados por promedio:\n";
    for (int i = 0; i < n; ++i) {
        int idx = indices[i];
        cout << "Codigo: " << codigos[idx] << ", Nombre: " << nombres[idx] << ", Promedio: " << promedios[idx] << endl;
    }

    // Mostrar cantidad de estudiantes desaprobados
    cout << "\nCantidad de estudiantes desaprobados: " << desaprobados << endl;

    return 0;
}

