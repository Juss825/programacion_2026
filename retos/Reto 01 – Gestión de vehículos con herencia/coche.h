#ifndef COCHE_H
#define COCHE_H

#include <string>
#include "vehiculo.h"

class Coche : public Vehiculo {
private:
    int numeroPuertas;

public:
    // Constructores
    Coche();
    Coche(std::string marca, std::string modelo, int anio, int numeroPuertas);

    // Setter
    void actualizarNumeroPuertas(int nuevoNumero);

    // Sobrescritura del método mostrarInformacion
    void mostrarInformacion();

    // Getter
    int obtenerNumeroPuertas();
};

#endif // COCHE_H
