#ifndef JUGADOR_H
#define JUGADOR_H

#include <iostream>
#include <iomanip>
using namespace std;


class Jugador {
    public:
        Jugador() {}
        Jugador(const string &nombre, size_t numero, size_t goles = 0)
        : nombre(nombre), numero(numero), goles(goles) {}

        void setNombre(const string &nombre);
        string getNombre();

        void setNumero(size_t numero);
        size_t getNumero();

        void setGoles(size_t goles);
        size_t getGoles() const;

        friend ostream& operator<<(ostream &out, const Jugador &j){
            out << left;
            out << setw(10) << j.nombre;
            out << setw(3) << j.numero;
            out << setw(3) << j.goles;

            return out;
        }


    private:
        string nombre;
        size_t numero;
        size_t goles;
};


#endif