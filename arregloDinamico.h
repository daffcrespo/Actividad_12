#ifndef ARREGLO_DINAMICO_H
#define ARREGLO_DINAMICO_H

#include <iostream>

using namespace std;

class ArregloDinamico
{
private:
    string *arregloDinamico;
    size_t tam;
    size_t cont;
    const static size_t MAX = 10;
    void expandir();
public:
    ArregloDinamico();
    ~ArregloDinamico();
    void insertar_final(const string &s);
    void insertar_inicio(const string &s);
    size_t size();

    string operator[](size_t p)
    {
        return arregloDinamico[p];
    }
};


#endif