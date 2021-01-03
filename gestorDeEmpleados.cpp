/*
 * Curso: C++ Esencial
 * Plataforma: LinkedIn Learning
 * Instructor: @EliezerLopez
 * */
#include <iostream>
#include <string>
using namespace std;

int main(){

    int identificador;
    string nombre;
    string apellido;

    cout << "Hola!" << endl;
    cout << "Por favor, introduce la siguiente información: " << endl;

    cout << "Identificador: ";
    cin >> identificador;

    cout << "Nombre: ";
    cin >> nombre;

    cout << "Apellido: ";
    cin >> apellido;

    cout << "El identificador del empleado " << nombre << " " << apellido << " es el número " << identificador <<".";

    return 0;
} 