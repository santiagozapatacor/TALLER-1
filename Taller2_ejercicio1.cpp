//Ejercicio 1. Segundos a horas, minutos y segundos
#include<iostream>
#include<string>
using namespace std;
int main(){
    int segundos;
    cout << "Ingrese los segundos \n";
    cin >> segundos;
    if (segundos < 0){  //no se cuentan segundos negativos o menores a ceros
        cout<< "#ERROR# \n";
    } 
    else{
        int horas = segundos / 3600; //canditad de horas por la cantidad de seggundos que hay 
        int  minutos = (segundos % 3600 ) / 60; //minutos sobrantes despues de las horas
        int segundosfinal = segundos % 60; //segundos sobrantes despues de los minutos
    
            cout << segundos << " segundos equivalen a " << horas <<" horas y " << minutos << " minutos " << segundosfinal << " segundos ";
        } 

return 0;


}