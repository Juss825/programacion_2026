#ifndef CAMIONETA_H
#define CAMIONETA_H

#include "coche.h"

class Camioneta : public Coche {
private:
    bool dobleTraccion;

public:
    Camioneta();
    Camioneta(std::string marca, std::string modelo, int anio, int puertas, bool dobleTraccion);

    void actualizarDobleTraccion(bool valor);
    void mostrarInformacion(); 
};

#endif
