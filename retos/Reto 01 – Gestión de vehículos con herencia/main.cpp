#include <iostream>
#include "coche.h"
#include "moto.h"
#include "camion.h"
#include "autobus.h"

int main() {

    Coche coche1("Toyota", "Corolla", 2022, "ABC123", 4);
    Moto moto1("Yamaha", "R15", 2023, "XYZ789", 150);
    Camion camion1("Volvo", "FH16", 2021, "TRK456", 18.5);
    Autobus bus1("Mercedes", "Sprinter", 2020, "BUS321", 20);

    std::cout << "=== INFORMACIÓN INICIAL ===\n\n";

    coche1.mostrarInformacion();
    std::cout << std::endl;

    moto1.mostrarInformacion();
    std::cout << std::endl;

    camion1.mostrarInformacion();
    std::cout << std::endl;

    bus1.mostrarInformacion();
    std::cout << std::endl;

   //cambio de placas (joseph desde aqui empieza)
    coche1.actualizarPlaca("NEW111");
    moto1.actualizarPlaca("NEW222");

    std::cout << "\n=== DESPUÉS DEL CAMBIO DE PLACAS ===\n\n";

    coche1.mostrarInformacion();
    std::cout << std::endl;

    moto1.mostrarInformacion();
    std::cout << std::endl;

    return 0;
}
