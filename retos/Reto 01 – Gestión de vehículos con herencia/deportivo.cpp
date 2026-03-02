#include "deportivo.h"
#include <iostream>

Deportivo::Deportivo() : Coche() {
    velocidadMax = 0;
}

Deportivo::Deportivo(std::string marca, std::string modelo, int anio, int puertas, int velocidadMax)
    : Coche(marca, modelo, anio, puertas) {
    this->velocidadMax = velocidadMax;
}

void Deportivo::actualizarVelocidadMax(int nuevaVelocidad) {
    velocidadMax = nuevaVelocidad;
}

void Deportivo::mostrarInformacion() {
    Coche::mostrarInformacion();
    std::cout << "Velocidad máxima: " << velocidadMax << " km/h" << std::endl;
}
