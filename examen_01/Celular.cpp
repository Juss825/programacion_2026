#include "Celular.h"
#include <iostream>

Celular::Celular(std::string marca, std::string modelo, float precio, int almacenamiento, int bateria)
    : marca(marca), modelo(modelo), precio(precio), almacenamiento(almacenamiento), bateria(bateria) {}

void Celular::mostrarInfo() const {
    std::cout << "Marca: " << marca << "\n"
              << "Modelo: " << modelo << "\n"
              << "Precio: $" << precio << "\n"
              << "Almacenamiento: " << almacenamiento << " GB\n"
              << "Bateria: " << bateria << " mAh\n";
}

void Celular::cargarBateria(int cantidad) {
    bateria += cantidad;
    std::cout << "Bateria cargada. Nivel actual: " << bateria << " mAh\n";
}

void Celular::usarCelular(int minutos) {
    int consumo = minutos * 5; 
    if (consumo > bateria) {
        std::cout << "La bateria no es suficiente para " << minutos << " minutos de uso.\n";
    } else {
        bateria -= consumo;
        std::cout << "Usaste el celular por " << minutos << " minutos. Bateria restante: " << bateria << " mAh\n";
    }
}
