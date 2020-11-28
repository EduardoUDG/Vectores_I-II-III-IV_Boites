#include<iostream>
#include "seleccion.h"


using namespace std;

int main(){
    Seleccion mexico("Mexico");

    Jugador j1("CUCEI", 43);
    Jugador j2("CUCBA", 33, 1);
    Jugador j3("CUCEA", 23, 3);

    mexico.agregarInicio(j1);
    mexico.agregarFinal(j2);
    mexico.agregarFinal(j3);

    mexico.print();

    return 0;
} 