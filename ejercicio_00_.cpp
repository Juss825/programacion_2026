#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Estudiante {
private:
    string nombre;
    string codigo;
    int edad;
    float promedio;
    bool activo;

public:
    // Constructor
    Estudiante(string n, string c, int e, float p, bool a)
        : nombre(n), codigo(c), edad(e), promedio(p), activo(a) {}

    // Métodos de actualización
    void actualizarNombre(string nuevoNombre) { nombre = nuevoNombre; }
    void actualizarCodigo(string nuevoCodigo) { codigo = nuevoCodigo; }
    void actualizarEdad(int nuevaEdad) { edad = nuevaEdad; }
    void actualizarPromedio(float nuevoPromedio) {
        if (nuevoPromedio >= 0.0 && nuevoPromedio <= 10.0)
            promedio = nuevoPromedio;
        else
            cout << "Promedio inválido. Debe estar entre 0.0 y 10.0\n";
    }
    void actualizarActivo(bool nuevoEstado) { activo = nuevoEstado; }

    // Métodos de visualización
    void mostrarNombre() const { cout << "Nombre: " << nombre << endl; }
    void mostrarCodigo() const { cout << "Código: " << codigo << endl; }
    void mostrarEdad() const { cout << "Edad: " << edad << " años" << endl; }
    void mostrarPromedio() const { cout << "Promedio: " << promedio << endl; }
    void mostrarActivo() const {
        cout << "Estado: " << (activo ? "Activo" : "Inactivo") << endl;
    }
    void mostrarInformacionCompleta() const {
        mostrarNombre();
        mostrarCodigo();
        mostrarEdad();
        mostrarPromedio();
        mostrarActivo();
        cout << "--------------------------\n";
    }

    string obtenerCodigo() const { return codigo; }
};

int main() {
    vector<Estudiante> estudiantes;
    int opcion;

    do {
        cout << "\nMenú del programa\n";
        cout << "1. Agregar estudiante\n";
        cout << "2. Mostrar un estudiante en específico\n";
        cout << "3. Mostrar todos los estudiantes\n";
        cout << "4. Salir\n";
        cout << "Seleccione una opción: ";
        cin >> opcion;
        cin.ignore();

        if (opcion == 1) {
            string nombre, codigo;
            int edad;
            float promedio;
            bool activo;

            cout << "Nombre: ";
            getline(cin, nombre);
            cout << "Código: ";
            getline(cin, codigo);
            cout << "Edad: ";
            cin >> edad;
            cout << "Promedio: ";
            cin >> promedio;
            cout << "¿Está activo? (1 = sí, 0 = no): ";
            cin >> activo;
            cin.ignore();

            estudiantes.emplace_back(nombre, codigo, edad, promedio, activo);
            cout << "Estudiante agregado exitosamente.\n";
        }
        else if (opcion == 2) {
            string codigoBuscado;
            cout << "Ingrese el código del estudiante: ";
            getline(cin, codigoBuscado);

            bool encontrado = false;
            for (const auto& est : estudiantes) {
                if (est.obtenerCodigo() == codigoBuscado) {
                    est.mostrarInformacionCompleta();
                    encontrado = true;
                    break;
                }
            }
            if (!encontrado)
                cout << "Estudiante no encontrado.\n";
        }
        else if (opcion == 3) {
            if (estudiantes.empty()) {
                cout << "No hay estudiantes registrados.\n";
            } else {
                for (const auto& est : estudiantes)
                    est.mostrarInformacionCompleta();
            }
        }
        else if (opcion != 4) {
            cout << "Opción inválida.\n";
        }

    } while (opcion != 4);

    cout << "Programa finalizado.\n";
    return 0;
}
