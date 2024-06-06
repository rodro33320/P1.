#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
    int n;
    double bonificacion,sueldoBasico,sueldoNeto;
    string nombre;
    char tipo;
   
    cout << "Ingrese la cantidad de empleados: ";
    cin >> n;

    double totalSueldosContratados = 0;
    double totalSueldosNombrados = 0;

    for (int i = 0; i < n; ++i) {
        cout << "\nEmpleado " << i + 1 << ":" << endl;
        cout << "Nombre del empleado: ";
        cin >> nombre;
        cout << "Tipo de empleado (C-contratado o N-nombrado): ";
        cin >> tipo;
        cout << "Sueldo básico: ";
        cin >> sueldoBasico;
        
    double afp = sueldoBasico * 0.08;
    double seguro = sueldoBasico * 0.05;
        
        
        if (tipo == 'C') {
            bonificacion = sueldoBasico * 0.08;
            sueldoNeto = sueldoBasico - afp - seguro + bonificacion;
            totalSueldosContratados += sueldoNeto;
        } else if (tipo == 'N') {
            bonificacion = sueldoBasico * 0.12;
            sueldoNeto = sueldoBasico - afp - seguro + bonificacion;
            totalSueldosNombrados += sueldoNeto;
        } else {
            cout << "Tipo de empleado inválido." << endl;
            continue;
        }

        cout << "\nDetalles del empleado:" << endl;
        cout << "Nombre: " << nombre << endl;
        cout << "Tipo: " << tipo << endl;
        cout << "Sueldo básico: $" << fixed << setprecision(2) << sueldoBasico << endl;
        cout << "AFP (8%): /s" << afp << endl;
        cout << "Seguro (5%): /s" << seguro << endl;
        cout << "Bonificación: /s" << bonificacion << endl;
        cout << "Sueldo neto: /s" << sueldoNeto << endl;
    }

    cout << "\nResumen:" << endl;
    cout << "Total sueldos netos de empleados contratados: /s" << totalSueldosContratados << endl;
    cout << "Total sueldos netos de empleados nombrados: /s" << totalSueldosNombrados << endl;

    return 0;
}

    

