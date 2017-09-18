//
// Created by Javier on 18/9/2017.
//

#include "NodoBinario.h"

NodoBinario::NodoBinario(int valor)
{
    this->valor = valor;
    this->derecho = NULL;
    this->izquierdo = NULL;
}

NodoBinario::~NodoBinario()
{
    //dtor
}