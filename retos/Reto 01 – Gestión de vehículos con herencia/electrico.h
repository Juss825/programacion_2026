#ifndef ELECTRICO_H
#define ELECTRICO_H

#include "coche.h"

class Electrico : public Coche {
private:
    int autonomia;

public:
    Electrico();
    Electrico(std::string marca, std::string modelo, int anio, int puertas, int autonomia);

    void actualizarAutonomia(int nuevaAutonomia);
    void mostrarInformacion();
};

#endif
