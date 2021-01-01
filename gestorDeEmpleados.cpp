/*
 * Curso: C++ Esencial
 * Plataforma: LinkedIn Learning
 * Instructor: @EliezerLopez
 * */
#include <iostream>
#include <vector>

using namespace std;

int main(){

    vector<float> ingresosPrimerTrimestre;

    ingresosPrimerTrimestre.push_back(1500);
    ingresosPrimerTrimestre.push_back(1400);
    ingresosPrimerTrimestre.push_back(1800);
    
    cout << ingresosPrimerTrimestre[0] << endl;
    cout << ingresosPrimerTrimestre.at(1) << endl;
    
    return 0;
}