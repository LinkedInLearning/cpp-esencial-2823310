/*
 * Curso: C++ Esencial
 * Plataforma: LinkedIn Learning
 * Instructor: @EliezerLopez
 * */

int main(){

    bool resultadoLogico1 = 5.8 < 10;
    bool resultadoLogico2 = 16 > 16;
    bool resultadoLogico3 = 'e' != 'E';

    bool resultadoAND = resultadoLogico1 && resultadoLogico2;
    bool resultadoOR = resultadoLogico1 || resultadoLogico2;
    bool resultadoNOT = !resultadoLogico3;
    
    return 0;
}