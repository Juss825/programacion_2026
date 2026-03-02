#ifndef DEPORTIVO_H
#define DEPORTIVO_H

#include "coche.h"

class Deportivo : public Coche {
private:
    int velocidadMax;

public:
    Deportivo();
    Deportivo(std::string marca, std::string modelo, int anio, int puertas, int velocidadMax);

    void actualizarVelocidadMax(int nuevaVelocidad);
    void mostrarInformacion();
};

#endif
