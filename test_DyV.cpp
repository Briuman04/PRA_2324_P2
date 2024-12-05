#include <iostream>
#include "DyV.h"

template <typename T>
void ImprimirVector(const std::vector<T>& v) {
    for (const auto& elem : v) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;
}

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

void TestQuickSort() {
    //Vector de enteros
    std::cout << "Pruebas para QuickSort con enteros:\n";
    std::vector<int> vecInt = {7, 2, 5, 3, 8, 1, 6, 4};
    std::cout << "Vector original (int): ";
    ImprimirVector(vecInt);

    QuickSort(vecInt, 0, vecInt.size() - 1);
    std::cout << "Vector ordenado (int): ";
    ImprimirVector(vecInt);
    std::cout << "-----------------------------\n";

    //Vector de floats
    std::cout << "Pruebas para QuickSort con floats:\n";
    std::vector<float> vecFloat = {5.5, 3.3, 8.8, 6.6, 2.2, 7.7, 4.4, 1.1};
    std::cout << "Vector original (float): ";
    ImprimirVector(vecFloat);

    QuickSort(vecFloat, 0, vecFloat.size() - 1);
    std::cout << "Vector ordenado (float): ";
    ImprimirVector(vecFloat);
    std::cout << "-----------------------------\n";

    //Vector de caracteres
    std::cout << "Pruebas para QuickSort con caractéres:\n";
    std::vector<char> vecChar = {'z', 'a', 'm', 'e', 'f'};
    std::cout << "Vector original (char): ";
    ImprimirVector(vecChar);

    QuickSort(vecChar, 0, vecChar.size() - 1);
    std::cout << "Vector ordenado (char): ";
    ImprimirVector(vecChar);
    std::cout << "-----------------------------\n";
}

int main() {
    TestBusquedaBinaria();
    std::cout << "-----------------------------\n";
    TestBusquedaBinaria_INV();
    std::cout << "-----------------------------\n";
    TestQuickSort();
    std::cout << "-----------------------------\n";

    std::cout << "Todas las pruebas han finalizado correctamente.\n";

    return 0;
}