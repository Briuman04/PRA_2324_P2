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

template <typename T>
int Partition(std::vector<T>& v, int ini, int fin) {
    int x = v[fin];  // Pivote (último elemento)
    int i = ini;     // Índice de los elementos menores que el pivote

    // Recorre el vector desde el inicio hasta el penúltimo elemento
    for (int j = ini; j < fin; j++) {
        if (v[j] <= x) {  // Si el elemento actual es menor o igual al pivote
            std::swap(v[i], v[j]);  // Intercambiar v[i] con v[j]
            i++;  // Incrementar el índice de los elementos menores que el pivote
        }
    }

    // Colocar el pivote en su posición final
    std::swap(v[i], v[fin]);
    
    // Retornar la posición del pivote
    return i;
}

template <typename T>
void QuickSort(std::vector<T>& v, int ini, int fin) {
    if (ini < fin) { 
        int pivote = Partition(v, ini, fin);
        QuickSort(v, ini, pivote - 1); // Recursión para ordenar la parte izquierda del pivote
        QuickSort(v, pivote + 1, fin);  // Recursión para ordenar la parte derecha del pivote
    }
}

#endif // DYV_H