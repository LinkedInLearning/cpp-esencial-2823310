/*
 * Curso: C++ Esencial
 * Plataforma: LinkedIn Learning
 * Instructor: @EliezerLopez
 * */
#include <iostream>
using namespace std;

int main(){ 

    int identificador = 20;
    int *p_identificador = &identificador;

    int identificador2 = 40;
    int *p_identificador2 = &identificador2;

    int *p_asignacion;
    p_asignacion = p_identificador;

    cout << "Contenido de identificador: " << identificador << endl;
    cout << "Contenido de p_identificador: " << p_identificador << endl;

    cout << "Contenido de identificador2: " << identificador2 << endl;
    cout << "Contenido de p_identificador2: " << p_identificador2 << endl;

    cout << "Contenido de p_asignacion: " << p_asignacion << endl;

    return 0;
} 