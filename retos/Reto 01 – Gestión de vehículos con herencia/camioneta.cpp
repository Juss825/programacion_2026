#include "camioneta.h"
#include <iostream>

Camioneta::Camioneta() : Coche() {
    dobleTraccion = false;
}

Camioneta::Camioneta(std::string marca, std::string modelo, int anio, int puertas, bool dobleTraccion)
    : Coche(marca, modelo, anio, puertas) {
    this->dobleTraccion = dobleTraccion;
}

void Camioneta::actualizarDobleTraccion(bool valor) {
    dobleTraccion = valor;
}

void Camioneta::mostrarInformacion() {
    Coche::mostrarInformacion();
    std::cout << "Doble tracción: " << (dobleTraccion ? "Sí" : "No") << std::endl;
}
