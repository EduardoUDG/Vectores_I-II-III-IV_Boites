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

void Seleccion::eliminarNombre(const string &nombre){
    for (auto it = jugadores.begin(); it != jugadores.end(); it++){
        Jugador &j = *it;

        if (nombre == j.getNombre()){
            jugadores.erase(it);
            break;
        }        
    }
}

bool comparador(const Jugador &j){
    return j.getGoles() == 0;
}

void Seleccion::eliminarGoles(){
    jugadores.remove_if(comparador);
}

void Seleccion::eliminarGoles(size_t goles){
    jugadores.remove_if([goles](const Jugador &j){ return j.getGoles() >= goles; });
}