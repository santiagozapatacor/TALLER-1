//Ejercicio 4. Año bisiesto
#include<iostream>
#include<string>
using namespace std;

int main(){
    int anio;
    cout<< "Ingrese un año entero: "; //Ingreso del año a saber si es bisiesto o no 
    cin>> anio;

    if (anio < 0){ // Si año es menor a cero error 
        cout<<"#ERROR \n";
    } //Regla del año bisiesto
    else if ((anio % 4 == 0 and anio % 100 != 0) or (anio % 400 == 0)){
        cout<<"Año es bisiesto"; 
    //   Caso 1: divisible entre 4 Y no divisible entre 100
    //   Caso 2: divisible entre 400
    // "% == 0" significa "el residuo es 0", o sea, es divisible.
    } else{
        cout <<"Año no es bisisesto";
    }

}
