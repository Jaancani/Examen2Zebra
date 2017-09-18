//
// Created by Javier on 18/9/2017.
//

#ifndef EXAMEN2ZEBRA_NODOBINARIO_H
#define EXAMEN2ZEBRA_NODOBINARIO_H


#include <iostream>
using namespace std;

class NodoBinario
{
public:
    int valor;
    NodoBinario* izquierdo;
    NodoBinario* derecho;

    NodoBinario(int valor);
    virtual ~NodoBinario();
protected:
private:
};

#endif //EXAMEN2ZEBRA_NODOBINARIO_H
