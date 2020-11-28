#include "jugador.h"

void Jugador::setNombre(const string &nombre){
    this->nombre = nombre;
}

string Jugador::getNombre(){
    return nombre;
}

void Jugador::setNumero(size_t numero){
    this->numero = numero;
}

size_t Jugador::getNumero(){
    return numero;
}

void Jugador::setGoles(size_t goles){
    this->goles = goles;
}

size_t Jugador::getGoles(){
    return goles;
}