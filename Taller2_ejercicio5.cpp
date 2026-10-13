#include <iostream>
#include <string>
using namespace std;

int main(){
    int lado1;
    cout << "Ingrese el lado uno del triangulo: ";
    cin >> lado1;

    int lado2;
    cout << "Ingrese el segundo lado del triangulo: ";
    cin >> lado2;

    int lado3;
    cout << "Ingrese el tercer lado del triangulo: ";
    cin >> lado3;
    
    if (lado1 <= 0 or lado2 <= 0 or lado3 <= 0 ){
        cout << "Error los lados deben ser mayores que cero";
    } else if (lado1 + lado2 <= lado3 or
    lado1 + lado3 <= lado2 or lado2 + lado3 <= lado1){
        cout << "Los lados no forman un triangulo";
    
    }else {
        int perimetro = lado1 + lado2 + lado3;
        cout << "El perimetro es: "<< perimetro << "\n";

        if (lado1 == lado2 and lado2 == lado3){
            cout << "El triangulo es equilatero";
        }else if (lado1 == lado2 or lado1 == lado3 or lado2 == lado3){
            cout << "El triangulo es isosceles";
        }else {
            cout << "El triangulo es escaleno";
        }
    
    }
    return 0;
}