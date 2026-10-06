//Taller 1
//Planteamiento del Problema Planteamiento del Problema
/* Un centro de salud necesita digitalizar su proceso de admisión.
Los estudiantes deben construir un programa secuencial 
que capture la información de un paciente, calcule métricas de salud automáticamente 
y genere una ficha médica formateada en pantalla.*/


#include<iostream>
#include<string>
#include <limits>
using namespace std;

int main(){
    std::string nombreCompleto;
    cout <<"Ingrese su nombre completo: ";
    getline(cin, nombreCompleto);

    int edad;                    // entero: la edad se maneja en años
    cout <<"Ingrese su edad en años: ";
    cin>> edad;

    char genero;
    cout<<"Ingrese su genero (M/F/O): ";
    cin>> genero;
 // Pido el estrato (un solo carácter del 1 al 6)
    char estrato;
    cout<<"Ingrese su estrato socio economico del 1-6: ";
    cin>> estrato;
// Pido el peso (float porque puede tener decimales)
    float peso;
    cout<<"Ingrese su peso en kg: ";
    cin>> peso;
// Pido la altura (con punto, por ejemplo 1.78)
    float altura;
    cout<<"Ingrese su altura en metros: ";
    cin>> altura;

    bool alergias;
    cout<<"El paciente tiene alergias conocidas(1 para si o 0 para no)";
    cin>> alergias;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    //gestion de informacion 
    std::string direccion;
    std::string telefono;
    std::string correo;
// Pido la dirección, el teléfono y el correo con getline
    std::cout << "Ingrese su dirección de residencia: ";
    std::getline(std::cin, direccion);

    std::cout << "Ingrese su número de teléfono: ";
    std::getline(std::cin, telefono); 

    std::cout << "Ingrese su correo electrónico: ";
    std::getline(std::cin, correo);

    //Procesamiento de datos
    // Calculo el IMC con la fórmula: peso dividido altura al cuadrado
    float IMC = peso / (altura *altura);


    cout << "==========INFORMACION DEL PACIENTE========//" "\n";
    cout << "   -Nombre Completo:" << nombreCompleto<< "\n";
    cout << "   -Edad:" << edad << " años \n";
    cout << "   -Genero:" << genero<< " \n";
    cout << "   -Estrato socioeconomico:" << estrato << " \n";
    cout << "   -Peso:" << peso << " Kilogramos \n";
    cout << "   -Altura:" << altura << " metros \n";
    cout << "   -Alergias:" << (alergias ? "si" : "no") << "\n";;
    cout << "   -Direccion:" << direccion << "\n";
    cout << "   -Telefono:" << telefono << "\n";
    cout << "   -Correo electronico:" << correo << "\n";
    cout << "   -IMC:" << IMC << "\n";

    if (IMC < 18.5){
        cout << "Bajo peso " "\n";
    } 
    else if (IMC <= 24.9) {
         cout << "Peso normal" "\n";
    } 
    else { 
            cout << "Sobrepeso" "\n"  ;   
            }
     
    return 0;

}

