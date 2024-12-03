#ifndef DYV_H
#define DYV_H

#include <vector>
#include <string>

int BusquedaBinaria (int x, const std::vector<int>& v, int ini, int fin) {
    if (ini > fin) {
        return -1; //El valor no se encuentra en el array
    }
    
    int medio = (ini + fin) / 2;
    
    if (v[medio] == x) {
        return medio; //Valor encontrado
    } else if (v[medio] > x) {
        return BusquedaBinaria(x, v, ini, medio - 1); // Buscar en la mitad izquierda
    } else {
        return BusquedaBinaria(x, v, medio + 1, fin); // Buscar en la mitad derecha
    }
}

int BusquedaBinaria_INV (int x, const std::vector<int>& v, int ini, int fin) {
    if (ini > fin) {
        return -1; //El valor no se encuentra en el array
    }
    
    int medio = (ini + fin) / 2;
    
    if (v[medio] == x) {
        return medio; //Valor encontrado
    } else if (v[medio] > x) {
        return BusquedaBinaria_INV(x, v, medio + 1, fin); // Buscar en la mitad derecha
    } else {
        return BusquedaBinaria_INV(x, v, ini, medio - 1); // Buscar en la mitad izquierda
    }
}

#endif // DYV_H