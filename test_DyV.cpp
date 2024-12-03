#include <iostream>
#include "DyV.h"

void TestBusquedaBinaria() {
    std::vector<int> v = {1, 3, 5, 7, 9, 11, 13};
    std::cout << "Pruebas para BusquedaBinaria (vector ascendente):\n";

    int indice = BusquedaBinaria(1, v, 0, v.size() - 1);
    if (indice != -1) {
        std::cout << "El valor 1 se encuentra en el índice " << indice << ".\n";
    } else {
        std::cout << "El valor 1 no se encuentra en el vector.\n";
    }

    indice = BusquedaBinaria(13, v, 0, v.size() - 1);
    if (indice != -1) {
        std::cout << "El valor 13 se encuentra en el índice " << indice << ".\n";
    } else {
        std::cout << "El valor 13 no se encuentra en el vector.\n";
    }
}

void TestBusquedaBinaria_INV() {
    std::vector<int> v = {13, 11, 9, 7, 5, 3, 1};
    std::cout << "Pruebas para BusquedaBinaria_INV (vector descendente):\n";

    int indice = BusquedaBinaria_INV(13, v, 0, v.size() - 1);
    if (indice != -1) {
        std::cout << "El valor 13 se encuentra en el índice " << indice << ".\n";
    } else {
        std::cout << "El valor 13 no se encuentra en el vector.\n";
    }

    indice = BusquedaBinaria_INV(1, v, 0, v.size() - 1);
    if (indice != -1) {
        std::cout << "El valor 1 se encuentra en el índice " << indice << ".\n";
    } else {
        std::cout << "El valor 1 no se encuentra en el vector.\n";
    }
}

int main() {
    TestBusquedaBinaria();
    std::cout << "-----------------------------\n";
    TestBusquedaBinaria_INV();

    return 0;
}