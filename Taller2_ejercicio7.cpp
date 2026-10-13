//Ejercicio 7. Nómina con horas extra
#include <iostream>
#include <string>
using namespace std;

int main() {
    double valorHora;
    cout << "Ingrese el valor de la hora: ";
    cin >> valorHora;
    double CantidadHoras;
    cout << "Ingrese la cantidad de horas trabajadas: ";
    cin >> CantidadHoras;
    if (valorHora <= 0 or CantidadHoras < 0) {
        cout << "Error: el valor de la hora debe ser positivo "
             << "y las horas no pueden ser negativas.";
    }
    else {
        double horasNormales, horasExtra, horasDobles;
        double salarioBruto, descuento, salarioNeto;

        if (CantidadHoras <= 40) {
            horasNormales = CantidadHoras;
            horasExtra = 0;
            horasDobles = 0;
        }
        else if (CantidadHoras <= 48) {
            horasNormales = 40;
            horasExtra = CantidadHoras - 40;
            horasDobles = 0;
        }
        else {
            horasNormales = 40;
            horasExtra = 8;
            horasDobles = CantidadHoras - 48;
        }

        salarioBruto = (horasNormales * valorHora)
                     + (horasExtra * valorHora * 1.5)
                     + (horasDobles * valorHora * 2);

        if (salarioBruto > 2000000) {
            descuento = salarioBruto * 0.08;
        }
        else {
            descuento = salarioBruto * 0.04;
        }

        salarioNeto = salarioBruto - descuento;

        cout << "\nHoras normales: " << horasNormales;
        cout << "\nHoras extra: " << horasExtra;
        cout << "\nHoras dobles: " << horasDobles;
        cout << "\nSalario bruto: $" << salarioBruto;
        cout << "\nDescuento: $" << descuento;
        cout << "\nSalario neto: $" << salarioNeto;
    }

    return 0;
}
