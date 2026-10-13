//Ejercicio 3. Índice de masa corporal
#include<iostream>
#include<string>
using namespace std; 
int main(){
    float peso;
    cout <<"Ingrese su peso en kilogramos: "; //Se ingresa el peso 
    cin>> peso;

    float altura;
    cout <<"Ingrese su altura: "; // Se ingresa la altura
    cin >> altura;
// Validacion de que peso y altura deben ser mayores que 0
    if(peso <= 0 or altura <= 0){
        cout<<"##ERROR";
    } else{
        float IMC = peso / (altura * altura); //Formula del IMC
        if (IMC < 18.5){ // Se evalúa de menor a mayor para poder pasando a la siguiente evalucion 
        cout << "Bajo peso " "\n";
        } 
        else if (IMC < 25) {
         cout << "Peso normal" "\n";
            } 
        else if (IMC < 30) {
         cout << "Sobrepeso" "\n";
            } 
        else{ 
            cout << "Obesidad" "\n"  ;   
            }
     
    return 0;
    }




}