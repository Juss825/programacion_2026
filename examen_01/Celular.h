#ifndef CELULAR_H
#define CELULAR_H

#include <string>

class Celular {
private:
    std::string marca;
    std::string modelo;
    float precio;
    int almacenamiento;   
    int bateria;          

public:
    // Constructor
    Celular(std::string marca, std::string modelo, float precio, int almacenamiento, int bateria);

    void mostrarInfo() const;
    void cargarBateria(int cantidad);
    void usarCelular(int minutos);
};

#endif
