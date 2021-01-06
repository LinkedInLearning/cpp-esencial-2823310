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
    int identificador;
    float salarioMensualMedio;
    Categoria bonificacionAsociada;
    string nombre, apellido;
    static int proximaEvaluacion;
private:

};

int main(){

    Empleado empleado, empleado2;
    empleado.proximaEvaluacion = 2025;
    
    float salarios[12];
    char categoriaALaQuePertenece;
    bool salarioPorEncimaDeLaMedia;

    cout << "Hola!" << endl;
    cout << "Por favor, introduce la siguiente información: " << endl;

    cout << "Identificador: ";
    cin >> empleado.identificador;

    cout << "Nombre: ";
    cin >> empleado.nombre;

    cout << "Apellido: ";
    cin >> empleado.apellido;

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

    empleado.salarioMensualMedio = (salarios[0] + salarios[1] + salarios[2] + salarios[3] + salarios[4] + salarios[5] + salarios[6] + salarios[7] + salarios[8] + salarios[9] + salarios[10] + salarios[11])/12;

    salarioPorEncimaDeLaMedia = (empleado.salarioMensualMedio > 3500);

    cout << "El identificador del empleado " << empleado.nombre << " " << empleado.apellido << " es el número " << empleado.identificador <<"." << endl;
    cout << "El salario mensual medio de " << empleado.nombre << " " << empleado.apellido << " es " << empleado.salarioMensualMedio << " euros.";

    cout << "¿A qué categoría pertenece? (A, B, C): ";
    cin >> categoriaALaQuePertenece;

    switch(categoriaALaQuePertenece){
        case 'A': empleado.bonificacionAsociada = A; break;
        case 'B': empleado.bonificacionAsociada = B; break;
        case 'C': empleado.bonificacionAsociada = C; break;
        case 'D': empleado.bonificacionAsociada = D; break;
    }

    return 0;
}