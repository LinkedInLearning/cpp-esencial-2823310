/*
 * Curso: C++ Esencial
 * Plataforma: LinkedIn Learning
 * Instructor: @EliezerLopez
 * */
#include <iostream>
using namespace std;

int main(){

    int diaNacimiento, mesNacimiento, anioNacimiento;

    cout << "¡Nos encantaría poder felicitarte por el día de tu cumpleaños!" << endl;
    cout << "¿Podrías facilitarnos tu fecha de nacimiento, por favor?" << endl;
    
    cout << "Introduce tu día de nacimiento: ";
    cin >> diaNacimiento;

    cout << "Introduce tu mes de nacimiento: ";
    cin >> mesNacimiento;
    
    cout << "Introduce tu año de nacimiento: ";
    cin >> anioNacimiento;

    return 0;
}