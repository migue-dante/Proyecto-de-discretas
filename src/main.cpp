// Proyecto final de Matemáticas Discretas I
// Menú principal: cada opción llama al menú de un módulo.
#include <iostream>

#include "conjuntos/conjuntos.h"
#include "funciones/funciones.h"
#include "predicados/predicados.h"
#include "proposiciones/proposiciones.h"
#include "relaciones/relaciones.h"

int main() {
    int opcion = -1;
    while (opcion != 0) {
        std::cout << "\n===== Matematicas Discretas I =====\n"
                  << "1. Conjuntos\n"
                  << "2. Relaciones\n"
                  << "3. Proposiciones\n"
                  << "4. Predicados\n"
                  << "5. Funciones\n"
                  << "0. Salir\n"
                  << "Opcion: ";
        if (!(std::cin >> opcion)) break;

        switch (opcion) {
            case 1: conjuntos::menu(); break;
            case 2: relaciones::menu(); break;
            case 3: proposiciones::menu(); break;
            case 4: predicados::menu(); break;
            case 5: funciones::menu(); break;
            case 0: std::cout << "Hasta luego.\n"; break;
            default: std::cout << "Opcion no valida.\n";
        }
    }
    return 0;
}
