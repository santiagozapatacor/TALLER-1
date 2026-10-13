//Ejercicio 2. Promedio ponderado
#include<iostream>
#include<string>
using namespace std;
int main(){ 
    //se usa el float para que los numeros queden como decimales
    float nota1;
    cout<< "Ingrese la nota 1: ";
    cin>> nota1;
    
    float nota2;
    cout<< "Ingrese la nota 2: ";
    cin>> nota2;

    float nota3;
    cout<< "Ingrese la nota 3: ";
    cin>> nota3;
//Se usa una condicion para poder solo continuar con el promedio
    if (nota1 < 0 or nota1 > 5 or nota2 < 0 or nota2 > 5 or nota3 < 0 
    or nota3 > 5){
        cout<< "## ERROR ##";
    } else{
        float promedio;
        promedio= (nota1 * 0.30) + (nota2 * 0.30) + (nota3 * 0.40);
        cout<<"Promedio: "<<promedio <<"\n";
        if (promedio >= 4.5){
            cout<<"Excelente";
        } else if(promedio >= 4.0){
            cout<<"Bueno";
        } else if(promedio >= 3.0){
            cout<<"Aceptable";
        } else{
            cout<<"Reprobado";
        }
        return 0;
    }

}