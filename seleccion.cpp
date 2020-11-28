#include "seleccion.h"

void Seleccion::setNombre(const string &nombre){
    this->nombre = nombre;
}

string Seleccion::getNombre(){
    return nombre;
}

void Seleccion::agregarFinal(const Jugador &j){
    jugadores.push_back(j);
}

void Seleccion::agregarInicio(const Jugador &j){
    jugadores.push_front(j);
}

void Seleccion::print(){
    for (auto it = jugadores.begin(); it != jugadores.end(); it++){
        cout << *it << endl;
    }
    
}