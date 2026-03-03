#ifndef MOTO_H
#define MOTO_H

#include "vehiculo.h"

class Moto : public Vehiculo {
private:
    int cilindrada;

public:
    Moto(std::string marca, std::string modelo, int anio,
         std::string placa, int cilindrada);

    void mostrarInformacion() override;
};

#endif
