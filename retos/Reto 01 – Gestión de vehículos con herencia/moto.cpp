#include "moto.h"
#include <iostream>

Moto::Moto(std::string marca, std::string modelo, int anio,
           std::string placa, int cilindrada)
    : Vehiculo(marca, modelo, anio, placa) {
    this->cilindrada = cilindrada;
}

void Moto::mostrarInformacion() {
    Vehiculo::mostrarInformacion();
    std::cout << "Cilindrada: " << cilindrada << " cc" << std::endl;
}
