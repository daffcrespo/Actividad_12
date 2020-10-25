#include <iostream>
#include "arregloDinamico.h"

using namespace std;

int main ()
{
    ArregloDinamico arreglo;

    arreglo.insertar_final("yo");
    arreglo.insertar_final("me");
    arreglo.insertar_final("llamo");
    arreglo.insertar_final("dafne");
    arreglo.insertar_final("crespo");
    arreglo.insertar_final("tengo");
    arreglo.insertar_final("22 anos");
    arreglo.insertar_final("adios");
    arreglo.insertar_inicio("saludos");
    arreglo.insertar_inicio("que tal");

    for(size_t i = 0; i < arreglo.size(); i++){
        cout << arreglo[i] << " ";
    }

    return 0;
}