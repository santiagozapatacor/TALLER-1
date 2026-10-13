//Ejercicio 11. Cotización de un envío
#include <iostream>
#include <string>
using namespace std;
int main() {

    float peso;
    cout << "Ingrese el peso en kilogramos: ";
    cin >> peso;

    double distancia;
    cout << "Ingrese la distancia en kilometros: ";
    cin >> distancia;

    int zona;
    cout << "Ingrese la zona (1 Nacional, 2 Internacional): ";
    cin >> zona;

    char fragil;
    cout << "El paquete es fragil? (S/N): ";
    cin >> fragil;

     if (peso <= 0 or distancia <= 0) {
        cout << "Error: el peso y la distancia deben ser positivos.";
    }
    else if (peso > 30) {
        cout << "Error: el peso no puede superar los 30 kg.";
    }else if (zona != 1 and zona != 2){
        cout << "Error: la zona debe ser 1 o 2." ;
    }else if (fragil != 'n' and fragil != 'N' and fragil != 's'
    and fragil != 'S'){
        cout << "Error: ingrese S o N para indicar si es fragil.";
    }else {
        double tarifa = 8000 + (1200 * peso) + (50 * distancia);
        if (zona == 2) {
            tarifa = tarifa * 1.5;
        }
        if (fragil == 'S' or fragil == 's') {
            tarifa = tarifa * 1.20;
        }
        cout << "El valor final a pagar es: $" << tarifa << "\n";
    }

    return 0;
}
