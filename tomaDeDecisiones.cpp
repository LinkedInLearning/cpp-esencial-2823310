/*
 * Curso: C++ Esencial
 * Plataforma: LinkedIn Learning
 * Instructor: @EliezerLopez
 * */
#include <iostream>
using namespace std;

int main(){

    bool usuarioTieneSanciones;
    bool usuarioTuvoSancionesEnElPasado;
    
    if (usuarioTieneSanciones){
        cout << "Lo sentimos, pero el usuario tiene sanciones pendientes." << endl;
    }
    else if(usuarioTuvoSancionesEnElPasado) {
        cout << "Lo sentimos, pero el usuario tuvo sanciones pendientes en el pasado." << endl;
    }
    else {
        cout << "Usuario libre de sanciones. ¡Genial!";
    }

    return 0;
}