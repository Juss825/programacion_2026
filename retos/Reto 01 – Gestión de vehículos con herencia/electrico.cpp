#include "electrico.h"
#include <iostream>

Electrico::Electrico() : Coche() {
    autonomia = 0;
}

Electrico::Electrico(std::string marca, std::string modelo, int anio, int puertas, int autonomia)
    : Coche(marca, modelo, anio, puertas) {
    this->autonomia = autonomia;
}

void Electrico::actualizarAutonomia(int nuevaAutonomia) {
    autonomia = nuevaAutonomia;
}

void Electrico::mostrarInformacion() {
    Coche::mostrarInformacion();
    std::cout << "Autonomía: " << autonomia << " km" << std::endl;
}
