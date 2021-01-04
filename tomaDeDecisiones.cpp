/*
 * Curso: C++ Esencial
 * Plataforma: LinkedIn Learning
 * Instructor: @EliezerLopez
 * */
#include <iostream>

int main(){    

    int puntuacionExamen = 8;

    switch (puntuacionExamen){
        case 0: std::cout << "Suspenso"; break;
        case 1: std::cout << "Suspenso"; break;
        case 2: std::cout << "Suspenso"; break;
        case 3: std::cout << "Suspenso"; break;
        case 4: std::cout << "Suspenso"; break;
        case 5: std::cout << "Suspenso"; break;
        case 10: std::cout << "Suspenso"; break;
        default: std::cout << "Puntuación no contemplada."; break;
    }

    return 0;
}