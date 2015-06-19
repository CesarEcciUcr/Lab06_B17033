#include "stdafx.h"
#include "Pila.h"


Pila::Pila()
{
	this->top = NULL;
}


Pila::~Pila()
{
}
void Pila::push(Elemento* e)
{
	Elemento *nuevo;
    nuevo = e;
	nuevo->siguiente = e;
}
