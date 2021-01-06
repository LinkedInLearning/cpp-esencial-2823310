/*
 * Curso: C++ Esencial
 * Plataforma: LinkedIn Learning
 * Instructor: @EliezerLopez
 * */
#include <iostream>
#include <string>
using namespace std;

enum Categoria {A = 300,B = 350,C = 400, D = 0};

class Empleado {

public:

private:

};

int main(){

    int identificador;
    float salarioMensualMedio, salarios[12];
    string nombre, apellido;
    bool salarioPorEncimaDeLaMedia;
    Categoria bonificacionAsociada;

    cout << "Hola!" << endl;
    cout << "Por favor, introduce la siguiente información: " << endl;

    cout << "Identificador: ";
    cin >> identificador;

    cout << "Nombre: ";
    cin >> nombre;

    cout << "Apellido: ";
    cin >> apellido;

    cout << "Salario Enero: ";
    cin >> salarios[0];

    cout << "Salario Febrero: ";
    cin >> salarios[1];
    
    cout << "Salario Marzo: ";
    cin >> salarios[2];
    
    cout << "Salario Abril: ";
    cin >> salarios[3];
    
    cout << "Salario Mayo: ";
    cin >> salarios[4];
    
    cout << "Salario Junio: ";
    cin >> salarios[5];
    
    cout << "Salario Julio: ";
    cin >> salarios[6];
    
    cout << "Salario Agosto: ";
    cin >> salarios[7];
    
    cout << "Salario Septiembre: ";
    cin >> salarios[8];
    
    cout << "Salario Octubre: ";
    cin >> salarios[9];
    
    cout << "Salario Noviembre: ";
    cin >> salarios[10];

    cout << "Salario Diciembre: ";
    cin >> salarios[11];

    salarioMensualMedio = (salarios[0] + salarios[1] + salarios[2] + salarios[3] + salarios[4] + salarios[5] + salarios[6] + salarios[7] + salarios[8] + salarios[9] + salarios[10] + salarios[11])/12;

    salarioPorEncimaDeLaMedia = (salarioMensualMedio > 3500);

    cout << "El identificador del empleado " << nombre << " " << apellido << " es el número " << identificador <<"." << endl;
    cout << "El salario mensual medio de " << nombre << " " << apellido << " es " << salarioMensualMedio << " euros.";
    
    char categoriaALaQuePertenece;

    cout << "¿A qué categoría pertenece? (A, B, C): ";
    cin >> categoriaALaQuePertenece;

    switch(categoriaALaQuePertenece){
        case 'A': bonificacionAsociada = A; break;
        case 'B': bonificacionAsociada = B; break;
        case 'C': bonificacionAsociada = C; break;
        case 'D': bonificacionAsociada = D; break;
    }

    return 0;
} 