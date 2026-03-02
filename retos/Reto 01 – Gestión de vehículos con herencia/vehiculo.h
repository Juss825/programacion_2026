#ifndef VEHICULO_H
#define VEHICULO_H

#include <string>

class Vehiculo {
protected:
    std::string marca;
    std::string modelo;
    int anio;

public:
    // Constructores
    Vehiculo(); 
    Vehiculo(std::string marca, std::string modelo, int anio);

    // Setters (actualizar atributos)
    void actualizarMarca(std::string nuevaMarca);
    void actualizarModelo(std::string nuevoModelo);
    void actualizarAnio(int nuevoAnio);

    // Método para mostrar información
    void mostrarInformacion();

    // Getters
    std::string obtenerMarca();
    std::string obtenerModelo();
    int obtenerAnio();
};

#endif // VEHICULO_H
