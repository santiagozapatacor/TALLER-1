//Ejercicio 12. Riesgo y capacidad de pago
#include <iostream>
#include <string>
using namespace std;

int main(){
    
    float ingresoMensual;
    cout << "Ingrese el ingreso mensual";
    cin >> ingresoMensual;

    float DeudaMensual;
    cout << "Ingrese la Deuda mensual";
    cin >> DeudaMensual;

    int edad;
    cout << "Ingresa tu edad";
    cin >> edad;


    int HistorialCrediticio;
    cout << "Ingrese si tiene historial crediticio ( 1 para si y 0 para no)";
    cin >> HistorialCrediticio;

    if (ingresoMensual <= 0) {
        cout << "Error: el ingreso debe ser positivo.";
    }
    else if (DeudaMensual < 0) {
        cout << "Error: la deuda no puede ser negativa.";
    }
    else if (edad < 18 or edad > 100) {
        cout << "Error: la edad debe estar entre 18 y 100.";
    }
    else if (HistorialCrediticio != 0 and HistorialCrediticio != 1) {
        cout << "Error: el historial debe ser 0 o 1.";
    }else {
        double relacion;
        double capacidad;

        relacion = DeudaMensual / ingresoMensual;
        capacidad = ingresoMensual - DeudaMensual;

        cout << "Relacion deuda/ingreso: " << relacion << "\n";
        cout << "Capacidad de pago: $" << capacidad << "\n";

        if (relacion > 0.5 or capacidad < 0) {
            cout << "Nivel de riesgo: ALTO";
        }
        else if (relacion <= 0.3 and edad >= 25
                 and HistorialCrediticio == 1) {
            cout << "Nivel de riesgo: BAJO";
        }
        else {
            cout << "Nivel de riesgo: MEDIO";
        }
    }

    return 0;
}