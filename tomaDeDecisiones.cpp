/*
 * Curso: C++ Esencial
 * Plataforma: LinkedIn Learning
 * Instructor: @EliezerLopez
 * */
#include <iostream>
using namespace std;

int main(){    

    int nota;

    if (nota >= 0 && nota < 5){
        cout << "Suspenso";
    }
    else if (nota >= 5 && nota < 6){
        cout << "Aprobado";
    }
    else if (nota >= 6 && nota < 7){
        cout << "Bien";
    }
    else if (nota >= 7 && nota < 9){
        cout << "Notable";
    }
    else if (nota >= 9 && nota < 10){
        cout << "Sobresaliente";
    }
    else if (nota == 10){
        cout << "Matrícula";
    }
    else {
        cout << "Puntuación no contemplada";
    }

    return 0;
}