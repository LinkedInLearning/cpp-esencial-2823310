/*
 * Curso: C++ Esencial
 * Plataforma: LinkedIn Learning
 * Instructor: @EliezerLopez
 * */

int main(){
    
    enum Semaforo {ROJO, AMARILLO, VERDE};
    Semaforo semaforo1 = ROJO;
    semaforo1 = AZUL; // Valor no contemplado

    return 0;
}