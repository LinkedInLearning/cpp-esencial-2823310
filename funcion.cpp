/*
 * Curso: C++ Esencial
 * Plataforma: LinkedIn Learning
 * Instructor: @EliezerLopez
 * */

float calculaIvaEnEuros(float=1000);

int main(){

    float importeTotal = 1500.34;
    float ivaCalculadoEnEuros = calculaIvaEnEuros();
    
    return 0;
}

float calculaIvaEnEuros(float importeTotalEnEuros){
    return (importeTotalEnEuros * 0.21);
}