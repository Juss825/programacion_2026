#include "coche.h"
#include <iostream>

// Constructor por defecto
Coche::Coche() : Vehiculo() {
    numeroPuertas = 0;
}

// Constructor con parámetros
Coche::Coche(std::string marca, std::string modelo, int anio, int numeroPuertas)
    : Vehiculo(marca, modelo, anio) {
    this->numeroPuertas = numeroPuertas;
}

// Setter
void Coche::actualizarNumeroPuertas(int nuevoNumero) {
    numeroPuertas = nuevoNumero;
}

// Sobrescritura del método mostrarInformacion
void Coche::mostrarInformacion() {
    Vehiculo::mostrarInformacion();
    std::cout << "Número de puertas: " << numeroPuertas << std::endl;
}

// Getter
int Coche::obtenerNumeroPuertas() {
    return numeroPuertas;
}
