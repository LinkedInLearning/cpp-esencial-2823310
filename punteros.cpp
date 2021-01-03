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

    cout << "Contenido de identificador: " << identificador << endl;
    cout << "Contenido de p_identificador: " << p_identificador << endl;

    return 0;
} 