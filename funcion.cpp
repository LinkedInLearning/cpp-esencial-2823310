/*
 * Curso: C++ Esencial
 * Plataforma: LinkedIn Learning
 * Instructor: @EliezerLopez
 * */

float calculaIvaEnEuros(float, int, float);

int main(){

    float importeTotal = 1500.34;
    float ivaCalculadoEnEuros = calculaIvaEnEuros(importeTotal, 12, 13.4);
    
    return 0;
}

float calculaIvaEnEuros(float importeTotalEnEuros, int a, float b){
    return (importeTotalEnEuros * 0.21);
}