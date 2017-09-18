//
// Created by Javier on 18/9/2017.
//

#ifndef EXAMEN2ZEBRA_LIBRO_H
#define EXAMEN2ZEBRA_LIBRO_H

#include <iostream>

using namespace std;

class Libro {
public:
    string nombre;
    string autor;
    int existencias;

    Libro(string nombre, string autor, int existencias);
    virtual ~Libro();

};

#endif //EXAMEN2ZEBRA_LIBRO_H
